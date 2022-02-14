
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint16_t ;
struct sm_oob {int dummy; } ;
struct sm_ftl {int max_lba; int zone_size; void* cis_block; struct ftl_zone* zones; } ;
struct ftl_zone {void** lba_to_phys_table; int initialized; int free_sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,void*,int) ;
 int FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned char*,int) ;
 int FUNC_9 (void**) ;
 void** FUNC_10 (int,int,int ) ;
 int FUNC_11 (void**,int,int) ;
 scalar_t__ FUNC_12 (struct sm_oob*) ;
 int FUNC_13 (struct sm_oob*) ;
 scalar_t__ FUNC_14 (struct sm_ftl*,int,void*) ;
 int FUNC_15 (struct sm_ftl*,int,void*,int) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (struct sm_oob*) ;
 scalar_t__ FUNC_18 (struct sm_ftl*,int,void*,int ,int *,struct sm_oob*) ;

__attribute__((used)) static int FUNC_19(struct sm_ftl *VAR_3, int VAR_4)
{
 struct ftl_zone *VAR_5 = &VAR_3->zones[VAR_4];
 struct sm_oob VAR_6;
 uint16_t VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_1("initializing zone %d", VAR_4);


 VAR_5->lba_to_phys_table = FUNC_10(VAR_3->max_lba, 2, VAR_2);

 if (!VAR_5->lba_to_phys_table)
  return -VAR_1;
 FUNC_11(VAR_5->lba_to_phys_table, -1, VAR_3->max_lba * 2);



 if (FUNC_4(&VAR_5->free_sectors, VAR_3->zone_size * 2, VAR_2)) {
  FUNC_9(VAR_5->lba_to_phys_table);
  return -VAR_1;
 }


 for (VAR_7 = 0 ; VAR_7 < VAR_3->zone_size ; VAR_7++) {


  if (VAR_4 == 0 && VAR_7 <= VAR_3->cis_block)
   continue;


  if (FUNC_18(VAR_3, VAR_4, VAR_7, 0, ((void*)0), &VAR_6)) {
   FUNC_5(&VAR_5->free_sectors);
   FUNC_9(VAR_5->lba_to_phys_table);
   return -VAR_0;
  }



  if (FUNC_12(&VAR_6)) {
   FUNC_6(&VAR_5->free_sectors,
    (unsigned char *)&VAR_7, 2);
   continue;
  }





  if (!FUNC_13(&VAR_6)) {
   FUNC_1("PH %04d <-> <marked bad>", VAR_7);
   continue;
  }


  VAR_8 = FUNC_17(&VAR_6);




  if (VAR_8 == -2 || VAR_8 >= VAR_3->max_lba) {
   FUNC_1("PH %04d <-> LBA %04d(bad)", VAR_7, VAR_8);
   continue;
  }




  if (VAR_5->lba_to_phys_table[VAR_8] < 0) {
   FUNC_2("PH %04d <-> LBA %04d", VAR_7, VAR_8);
   VAR_5->lba_to_phys_table[VAR_8] = VAR_7;
   continue;
  }

  FUNC_16("collision"
   " of LBA %d between blocks %d and %d in zone %d",
   VAR_8, VAR_5->lba_to_phys_table[VAR_8], VAR_7, VAR_4);


  if (FUNC_14(VAR_3, VAR_4, VAR_7))
   continue;


  if (FUNC_14(VAR_3, VAR_4,
     VAR_5->lba_to_phys_table[VAR_8])) {
   VAR_5->lba_to_phys_table[VAR_8] = VAR_7;
   continue;
  }





  FUNC_16("both blocks are valid, erasing the later");
  FUNC_15(VAR_3, VAR_4, VAR_7, 1);
 }

 FUNC_1("zone initialized");
 VAR_5->initialized = 1;



 if (!FUNC_7(&VAR_5->free_sectors)) {
  FUNC_16("no free blocks in zone %d", VAR_4);
  return 0;
 }


 FUNC_3(&VAR_9, 2);
 VAR_9 %= (FUNC_7(&VAR_5->free_sectors) / 2);

 while (VAR_9--) {
  VAR_10 = FUNC_8(&VAR_5->free_sectors,
     (unsigned char *)&VAR_7, 2);
  FUNC_0(VAR_10 != 2);
  FUNC_6(&VAR_5->free_sectors, (const unsigned char *)&VAR_7, 2);
 }
 return 0;
}
