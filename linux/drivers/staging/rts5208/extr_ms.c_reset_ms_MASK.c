
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ms_info {int boot_block; int block_shift; int page_off; int total_block; int capacity; int ms_type; int raw_sys_info; } ;
struct rtsx_chip {size_t card_wp; int* capacity; size_t* card2lun; int* card_bus_width; struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ms_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (struct rtsx_chip*,size_t) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int*,int) ;
 scalar_t__ FUNC_4 (struct rtsx_chip*,int ) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int,int ,int*,int) ;
 int FUNC_7 (struct rtsx_chip*,int,int) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*,int ,int ) ;
 int FUNC_10 (struct rtsx_chip*,int ) ;
 int FUNC_11 (struct rtsx_chip*,int ,int ,int ,int) ;
 int FUNC_12 (struct rtsx_chip*,int ,int ,int,int ) ;
 int FUNC_13 (struct rtsx_chip*,int ,int,int ,int ) ;
 int FUNC_14 (struct rtsx_chip*) ;
 int* FUNC_15 (struct rtsx_chip*) ;
 int FUNC_16 (struct rtsx_chip*) ;
 int FUNC_17 (struct rtsx_chip*,int,int*) ;
 int FUNC_18 (struct rtsx_chip*,size_t,int) ;
 int FUNC_19 (struct rtsx_chip*,int,int,int) ;

__attribute__((used)) static int FUNC_20(struct rtsx_chip *VAR_32)
{
 struct ms_info *VAR_33 = &VAR_32->ms_card;
 int VAR_34;
 u16 VAR_35, VAR_36, VAR_37;
 u8 VAR_38, VAR_39[VAR_13], VAR_40, *VAR_41;

 u16 VAR_42;


 VAR_34 = FUNC_5(VAR_32);
 if (VAR_34 != VAR_27)
  return VAR_26;

 VAR_33->ms_type |= VAR_29;

 VAR_34 = FUNC_9(VAR_32, VAR_18, VAR_21);
 if (VAR_34 != VAR_27)
  return VAR_26;

 VAR_34 = FUNC_8(VAR_32);
 if (VAR_34 != VAR_27)
  return VAR_26;

 VAR_34 = FUNC_17(VAR_32, VAR_23, &VAR_38);
 if (VAR_34)
  return VAR_34;

 if (VAR_38 & VAR_31)
  VAR_32->card_wp |= VAR_10;
 else
  VAR_32->card_wp &= ~VAR_10;

 VAR_35 = 0;

RE_SEARCH:

 while (VAR_35 < (VAR_6 + 2)) {
  if (FUNC_1(VAR_32, VAR_10) != VAR_27) {
   FUNC_10(VAR_32, VAR_15);
   return VAR_26;
  }

  VAR_34 = FUNC_6(VAR_32, VAR_35, 0, VAR_39, VAR_13);
  if (VAR_34 != VAR_27) {
   VAR_35++;
   continue;
  }

  if (VAR_39[0] & VAR_0) {
   if (!(VAR_39[1] & VAR_20)) {
    VAR_33->boot_block = VAR_35;
    break;
   }
  }
  VAR_35++;
 }

 if (VAR_35 == (VAR_6 + 2)) {
  FUNC_2(FUNC_14(VAR_32), "No boot block found!");
  return VAR_26;
 }

 for (VAR_40 = 0; VAR_40 < 3; VAR_40++) {
  VAR_34 = FUNC_7(VAR_32, VAR_33->boot_block, VAR_40);
  if (VAR_34 != VAR_27) {
   if (FUNC_4(VAR_32, VAR_14)) {
    VAR_35 = VAR_33->boot_block + 1;
    FUNC_10(VAR_32, VAR_17);
    goto RE_SEARCH;
   }
  }
 }

 VAR_34 = FUNC_7(VAR_32, VAR_33->boot_block, 0);
 if (VAR_34 != VAR_27)
  return VAR_26;


 FUNC_16(VAR_32);

 for (VAR_35 = 0; VAR_35 < 96; VAR_35++)
  FUNC_13(VAR_32, VAR_25, VAR_23 + 0x1A0 + VAR_35, 0, 0);

 VAR_34 = FUNC_18(VAR_32, VAR_10, 100);
 if (VAR_34 < 0)
  return VAR_26;

 VAR_41 = FUNC_15(VAR_32);
 FUNC_3(VAR_33->raw_sys_info, VAR_41, 96);


 FUNC_16(VAR_32);

 FUNC_13(VAR_32, VAR_25, VAR_4, 0, 0);
 FUNC_13(VAR_32, VAR_25, VAR_5, 0, 0);

 for (VAR_36 = VAR_2; VAR_36 <= VAR_3;
      VAR_36++)
  FUNC_13(VAR_32, VAR_25, VAR_36, 0, 0);

 for (VAR_36 = VAR_1; VAR_36 <= VAR_22; VAR_36++)
  FUNC_13(VAR_32, VAR_25, VAR_36, 0, 0);

 FUNC_13(VAR_32, VAR_25, VAR_12, 0, 0);
 FUNC_13(VAR_32, VAR_25, VAR_8, 0, 0);

 VAR_34 = FUNC_18(VAR_32, VAR_10, 100);
 if (VAR_34 < 0)
  return VAR_26;

 VAR_41 = FUNC_15(VAR_32);

 FUNC_2(FUNC_14(VAR_32), "Boot block data:\n");
 FUNC_2(FUNC_14(VAR_32), "%*ph\n", 16, VAR_41);




 if (VAR_41[0] != 0x00 || VAR_41[1] != 0x01) {
  VAR_35 = VAR_33->boot_block + 1;
  goto RE_SEARCH;
 }




 if (VAR_41[12] != 0x02 || VAR_41[13] != 0x00) {
  VAR_35 = VAR_33->boot_block + 1;
  goto RE_SEARCH;
 }

 if ((VAR_41[14] == 1) || (VAR_41[14] == 3))
  VAR_32->card_wp |= VAR_10;


 VAR_37 = ((u16)VAR_41[6] << 8) | VAR_41[7];
 if (VAR_37 == 0x0010) {

  VAR_33->block_shift = 5;
  VAR_33->page_off = 0x1F;
 } else if (VAR_37 == 0x0008) {

  VAR_33->block_shift = 4;
  VAR_33->page_off = 0x0F;
 }


 VAR_33->total_block = ((u16)VAR_41[8] << 8) | VAR_41[9];
 VAR_42 = ((u16)VAR_41[10] << 8) | VAR_41[11];

 VAR_33->capacity = ((u32)VAR_42 - 2) << VAR_33->block_shift;


 VAR_32->capacity[VAR_32->card2lun[VAR_10]] = VAR_33->capacity;


 if (VAR_41[15]) {
  VAR_34 = FUNC_11(VAR_32, 0, 0, VAR_28, 1);
  if (VAR_34 != VAR_27)
   return VAR_26;

  VAR_34 = FUNC_19(VAR_32, VAR_23, 0xFF, 0x88);
  if (VAR_34)
   return VAR_34;

  VAR_34 = FUNC_19(VAR_32, VAR_23 + 1, 0xFF, 0);
  if (VAR_34)
   return VAR_34;

  VAR_34 = FUNC_12(VAR_32, VAR_19, VAR_30, 1,
      VAR_21);
  if (VAR_34 != VAR_27)
   return VAR_26;

  VAR_34 = FUNC_19(VAR_32, VAR_11,
          0x58 | VAR_16,
          VAR_9 |
          VAR_24 |
          VAR_16);
  if (VAR_34)
   return VAR_34;

  VAR_33->ms_type |= VAR_7;
 }

 if (FUNC_0(VAR_33))
  VAR_32->card_bus_width[VAR_32->card2lun[VAR_10]] = 4;
 else
  VAR_32->card_bus_width[VAR_32->card2lun[VAR_10]] = 1;

 return VAR_27;
}
