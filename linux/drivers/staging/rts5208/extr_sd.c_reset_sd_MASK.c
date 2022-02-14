
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sd_info {int sd_lock_status; int sd_addr; int* raw_csd; int sd_switch_fail; } ;
struct rtsx_chip {int sdio_retry_cnt; int sd_io; int sd30_drive_sel_1v8; int* card_bus_width; size_t* card2lun; struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 scalar_t__ FUNC_3 (struct sd_info*) ;
 int FUNC_4 (struct sd_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
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
 int VAR_32 ;
 int FUNC_5 (struct sd_info*) ;
 int FUNC_6 (struct sd_info*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_7 (struct rtsx_chip*,size_t) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct rtsx_chip*) ;
 int FUNC_10 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_11 (struct rtsx_chip*,int) ;
 int FUNC_12 (struct rtsx_chip*,int) ;
 int FUNC_13 (struct rtsx_chip*) ;
 int FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*) ;
 int FUNC_16 (struct rtsx_chip*) ;
 int FUNC_17 (struct rtsx_chip*) ;
 int FUNC_18 (struct rtsx_chip*) ;
 int FUNC_19 (struct rtsx_chip*) ;
 int FUNC_20 (struct rtsx_chip*,int) ;
 int FUNC_21 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_22 (struct rtsx_chip*,int ) ;
 int FUNC_23 (struct rtsx_chip*,int ) ;
 int FUNC_24 (struct rtsx_chip*) ;
 int FUNC_25 (struct rtsx_chip*,int) ;
 int FUNC_26 (struct rtsx_chip*) ;
 int FUNC_27 (struct rtsx_chip*) ;
 int FUNC_28 (struct rtsx_chip*,int,int,int) ;
 int FUNC_29 (int) ;

__attribute__((used)) static int FUNC_30(struct rtsx_chip *VAR_36)
{
 struct sd_info *VAR_37 = &VAR_36->sd_card;
 bool VAR_38 = 0;
 int VAR_39, VAR_40 = 0, VAR_41 = 0, VAR_42 = 0;
 bool VAR_43 = 0;
 bool VAR_44 = 0;
 bool VAR_45 = 1;
 u8 VAR_46[16];
 u8 VAR_47;
 u32 VAR_48 = 0;
 bool VAR_49 = 0;

 FUNC_5(VAR_37);

switch_fail:

 VAR_40 = 0;
 VAR_41 = 0;
 VAR_42 = 0;
 VAR_38 = 0;






 VAR_39 = FUNC_17(VAR_36);
 if (VAR_39 != VAR_34)
  goto status_fail;

 VAR_39 = FUNC_15(VAR_36);
 if (VAR_39 != VAR_34)
  goto status_fail;

 if (FUNC_1(VAR_36) && !FUNC_2(VAR_36) && VAR_45) {
  int VAR_50 = 0;

  for (; VAR_50 < VAR_36->sdio_retry_cnt; VAR_50++) {
   if (FUNC_7(VAR_36, VAR_13) != VAR_34) {
    FUNC_23(VAR_36, VAR_17);
    goto status_fail;
   }

   VAR_39 = FUNC_21(VAR_36, VAR_4, 0,
           VAR_23, VAR_46, 5);
   if (VAR_39 == VAR_34) {
    int VAR_51 = (VAR_46[1] >> 4) & 0x07;

    if (VAR_51) {
     FUNC_8(FUNC_9(VAR_36), "SD_IO card (Function number: %d)!\n",
      VAR_51);
     VAR_36->sd_io = 1;
     goto status_fail;
    }

    break;
   }

   FUNC_16(VAR_36);

   FUNC_15(VAR_36);
  }

  FUNC_8(FUNC_9(VAR_36), "Normal card!\n");
 }


RTY_SD_RST:
 VAR_39 = FUNC_21(VAR_36, VAR_3, 0, VAR_19,
         ((void*)0), 0);
 if (VAR_39 != VAR_34)
  goto status_fail;

 FUNC_29(20);

 VAR_39 = FUNC_21(VAR_36, VAR_27, 0x000001AA,
         VAR_25, VAR_46, 5);
 if (VAR_39 == VAR_34) {
  if ((VAR_46[4] == 0xAA) && ((VAR_46[3] & 0x0f) == 0x01)) {
   VAR_38 = 1;
   VAR_48 = VAR_35 | 0x40000000;
  }
 }

 if (!VAR_38) {
  VAR_48 = VAR_35;

  VAR_39 = FUNC_21(VAR_36, VAR_3, 0,
          VAR_19, ((void*)0), 0);
  if (VAR_39 != VAR_34)
   goto status_fail;

  FUNC_29(20);
 }

 do {
  VAR_39 = FUNC_21(VAR_36, VAR_1, 0, VAR_20,
          ((void*)0), 0);
  if (VAR_39 != VAR_34) {
   if (FUNC_7(VAR_36, VAR_13) != VAR_34) {
    FUNC_23(VAR_36, VAR_17);
    goto status_fail;
   }

   VAR_41++;
   if (VAR_41 < 3)
    goto RTY_SD_RST;
   else
    goto status_fail;
  }

  VAR_39 = FUNC_21(VAR_36, VAR_10, VAR_48,
          VAR_22, VAR_46, 5);
  if (VAR_39 != VAR_34) {
   VAR_42++;
   if (VAR_42 < 3)
    goto RTY_SD_RST;
   else
    goto status_fail;
  }

  VAR_40++;
  FUNC_29(20);
 } while (!(VAR_46[1] & 0x80) && (VAR_40 < 255));

 if (VAR_40 == 255)
  goto status_fail;

 if (VAR_38) {
  if (VAR_46[1] & 0x40)
   FUNC_6(VAR_37);
  else
   FUNC_4(VAR_37);

  VAR_44 = 0;
 } else {
  FUNC_4(VAR_37);
  VAR_44 = 0;
 }
 FUNC_8(FUNC_9(VAR_36), "support_1v8 = %d\n", VAR_44);

 if (VAR_44) {
  VAR_39 = FUNC_27(VAR_36);
  if (VAR_39 != VAR_34)
   goto status_fail;
 }

 VAR_39 = FUNC_21(VAR_36, VAR_0, 0, VAR_21,
         ((void*)0), 0);
 if (VAR_39 != VAR_34)
  goto status_fail;

 for (VAR_40 = 0; VAR_40 < 3; VAR_40++) {
  VAR_39 = FUNC_21(VAR_36, VAR_28, 0,
          VAR_24, VAR_46, 5);
  if (VAR_39 != VAR_34)
   goto status_fail;

  VAR_37->sd_addr = (u32)VAR_46[1] << 24;
  VAR_37->sd_addr += (u32)VAR_46[2] << 16;

  if (VAR_37->sd_addr)
   break;
 }

 VAR_39 = FUNC_11(VAR_36, 1);
 if (VAR_39 != VAR_34)
  goto status_fail;

 VAR_39 = FUNC_20(VAR_36, 1);
 if (VAR_39 != VAR_34)
  goto status_fail;
 VAR_39 = FUNC_21(VAR_36, VAR_1, VAR_37->sd_addr,
         VAR_20, ((void*)0), 0);
 if (VAR_39 != VAR_34)
  goto status_fail;

 VAR_39 = FUNC_21(VAR_36, VAR_32, 0,
         VAR_20, ((void*)0), 0);
 if (VAR_39 != VAR_34)
  goto status_fail;

 if (VAR_44) {
  VAR_39 = FUNC_21(VAR_36, VAR_1, VAR_37->sd_addr,
          VAR_20, ((void*)0), 0);
  if (VAR_39 != VAR_34)
   goto status_fail;

  VAR_39 = FUNC_21(VAR_36, VAR_31, 2,
          VAR_20, ((void*)0), 0);
  if (VAR_39 != VAR_34)
   goto status_fail;

  VAR_47 = VAR_12;
 } else {
  VAR_47 = VAR_11;
 }

 VAR_39 = FUNC_21(VAR_36, VAR_30, 0x200, VAR_20,
         ((void*)0), 0);
 if (VAR_39 != VAR_34)
  goto status_fail;

 VAR_39 = FUNC_22(VAR_36, VAR_14);
 if (VAR_39 != VAR_34)
  goto status_fail;

 if (!(VAR_37->raw_csd[4] & 0x40))
  VAR_43 = 1;

 if (!VAR_43) {
  if (VAR_49) {



   VAR_37->sd_switch_fail = VAR_8 |
    VAR_2 | VAR_9;
  }


  VAR_39 = FUNC_12(VAR_36, VAR_47);
  if (VAR_39 == VAR_34) {
   VAR_39 = FUNC_25(VAR_36, VAR_47);
   if (VAR_39 != VAR_34) {
    FUNC_16(VAR_36);
    VAR_43 = 1;
    VAR_45 = 0;

    goto switch_fail;
   }
  } else {
   if (VAR_44) {
    FUNC_16(VAR_36);
    VAR_43 = 1;
    VAR_45 = 0;

    goto switch_fail;
   }
  }
 }

 if (!VAR_44) {
  VAR_39 = FUNC_21(VAR_36, VAR_1, VAR_37->sd_addr,
          VAR_20, ((void*)0), 0);
  if (VAR_39 != VAR_34)
   goto status_fail;

  VAR_39 = FUNC_21(VAR_36, VAR_31, 2,
          VAR_20, ((void*)0), 0);
  if (VAR_39 != VAR_34)
   goto status_fail;
 }





 if (!VAR_49 && FUNC_0(VAR_37)) {
  int VAR_52 = 1;

  VAR_39 = FUNC_10(VAR_36, VAR_7, 0x07,
          VAR_36->sd30_drive_sel_1v8);
  if (VAR_39)
   return VAR_39;

  VAR_39 = FUNC_24(VAR_36);
  if (VAR_39 != VAR_34)
   goto status_fail;

  if (FUNC_3(VAR_37))
   VAR_39 = FUNC_14(VAR_36);
  else
   VAR_39 = FUNC_19(VAR_36);

  if (VAR_39 != VAR_34) {
   VAR_39 = FUNC_16(VAR_36);
   if (VAR_39 != VAR_34)
    goto status_fail;

   VAR_45 = 0;
   VAR_49 = 1;
   goto switch_fail;
  }

  FUNC_21(VAR_36, VAR_29, VAR_37->sd_addr,
        VAR_20, ((void*)0), 0);

  if (FUNC_3(VAR_37)) {
   VAR_39 = FUNC_28(VAR_36, 0x08, 1, 1000);
   if (VAR_39 != VAR_34)
    VAR_52 = 0;
  }

  if (VAR_52) {
   VAR_39 = FUNC_18(VAR_36);
   if (VAR_39 != VAR_34) {
    VAR_39 = FUNC_16(VAR_36);
    if (VAR_39 != VAR_34)
     goto status_fail;

    VAR_45 = 0;
    VAR_49 = 1;
    goto switch_fail;
   }
  }
 }

 VAR_39 = FUNC_13(VAR_36);
 if (VAR_39 != VAR_34)
  goto status_fail;

 VAR_36->card_bus_width[VAR_36->card2lun[VAR_13]] = 4;
 return VAR_34;

status_fail:
 return VAR_33;
}
