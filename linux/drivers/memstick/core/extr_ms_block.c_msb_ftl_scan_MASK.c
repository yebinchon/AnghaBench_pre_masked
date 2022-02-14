
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct msb_data {size_t block_count; size_t* boot_block_locations; size_t* lba_to_pba_table; int used_blocks_bitmap; } ;
struct ms_extra_data_register {int management_flag; int overwrite_flag; int logical_address; } ;
typedef int extra ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,size_t,...) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct ms_extra_data_register*,int ,int) ;
 int FUNC_6 (struct msb_data*,size_t) ;
 scalar_t__ FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (size_t) ;
 int FUNC_9 (struct msb_data*,size_t) ;
 int FUNC_10 (struct msb_data*,size_t,int ,struct ms_extra_data_register*) ;
 int FUNC_11 (char*,int,size_t) ;
 int FUNC_12 (char*,size_t,...) ;
 scalar_t__ FUNC_13 (size_t,int ) ;

__attribute__((used)) static int FUNC_14(struct msb_data *VAR_8)
{
 u16 VAR_9, VAR_10, VAR_11;
 u8 VAR_12, VAR_13, VAR_14;
 int VAR_15;
 struct ms_extra_data_register VAR_16;
 u8 *VAR_17 = FUNC_4(VAR_8->block_count, VAR_2);

 if (!VAR_17)
  return -VAR_1;

 FUNC_1("Start of media scanning");
 for (VAR_9 = 0; VAR_9 < VAR_8->block_count; VAR_9++) {

  if (VAR_9 == VAR_8->boot_block_locations[0] ||
   VAR_9 == VAR_8->boot_block_locations[1]) {
   FUNC_2("pba %05d -> [boot block]", VAR_9);
   FUNC_9(VAR_8, VAR_9);
   continue;
  }

  if (FUNC_13(VAR_9, VAR_8->used_blocks_bitmap)) {
   FUNC_2("pba %05d -> [factory bad]", VAR_9);
   continue;
  }

  FUNC_5(&VAR_16, 0, sizeof(VAR_16));
  VAR_15 = FUNC_10(VAR_8, VAR_9, 0, &VAR_16);


  if (VAR_15 == -VAR_0) {
   FUNC_12(
   "oob of pba %d damaged, will try to erase it", VAR_9);
   FUNC_9(VAR_8, VAR_9);
   FUNC_6(VAR_8, VAR_9);
   continue;
  } else if (VAR_15) {
   FUNC_11("unknown error %d on read of oob of pba %d - aborting",
    VAR_15, VAR_9);

   FUNC_3(VAR_17);
   return VAR_15;
  }

  VAR_10 = FUNC_0(VAR_16.logical_address);
  VAR_13 = VAR_16.management_flag;
  VAR_12 = VAR_16.overwrite_flag;
  VAR_17[VAR_9] = VAR_12;


  if (!(VAR_12 & VAR_5)) {
   FUNC_1("pba %05d -> [BAD]", VAR_9);
   FUNC_9(VAR_8, VAR_9);
   continue;
  }


  if ((VAR_13 & VAR_4) !=
   VAR_4) {
   FUNC_1("pba %05d -> [reserved management flag %02x]",
       VAR_9, VAR_13);
   FUNC_9(VAR_8, VAR_9);
   continue;
  }


  if (!(VAR_13 & VAR_3)) {
   FUNC_1("pba %05d -> [temp table] - will erase", VAR_9);

   FUNC_9(VAR_8, VAR_9);
   FUNC_6(VAR_8, VAR_9);
   continue;
  }

  if (VAR_10 == VAR_7) {
   FUNC_2("pba %05d -> [free]", VAR_9);
   continue;
  }

  FUNC_9(VAR_8, VAR_9);


  if (FUNC_7(VAR_10) != FUNC_8(VAR_9)) {
   FUNC_12("pba %05d -> [bad lba %05d] - will erase",
        VAR_9, VAR_10);
   FUNC_6(VAR_8, VAR_9);
   continue;
  }


  if (VAR_8->lba_to_pba_table[VAR_10] == VAR_7) {
   FUNC_2("pba %05d -> [lba %05d]", VAR_9, VAR_10);
   VAR_8->lba_to_pba_table[VAR_10] = VAR_9;
   continue;
  }

  VAR_11 = VAR_8->lba_to_pba_table[VAR_10];
  VAR_14 = VAR_17[VAR_11];

  FUNC_12("Collision between pba %d and pba %d",
   VAR_9, VAR_11);

  if (!(VAR_12 & VAR_6)) {
   FUNC_12("pba %d is marked as stable, use it", VAR_9);
   FUNC_6(VAR_8, VAR_11);
   VAR_8->lba_to_pba_table[VAR_10] = VAR_9;
   continue;
  }

  if (!(VAR_14 & VAR_6)) {
   FUNC_12("pba %d is marked as stable, use it",
        VAR_11);
   FUNC_6(VAR_8, VAR_9);
   continue;
  }

  FUNC_12("collision between blocks %d and %d, without stable flag set on both, erasing pba %d",
    VAR_9, VAR_11, VAR_11);

  FUNC_6(VAR_8, VAR_11);
  VAR_8->lba_to_pba_table[VAR_10] = VAR_9;
 }

 FUNC_1("End of media scanning");
 FUNC_3(VAR_17);
 return 0;
}
