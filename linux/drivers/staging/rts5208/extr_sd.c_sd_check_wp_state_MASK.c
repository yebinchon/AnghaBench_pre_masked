
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sd_info {int sd_addr; } ;
struct rtsx_chip {int card_wp; struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (struct rtsx_chip*,int ,int*,int,int,int,int ,int*,int,int) ;
 int FUNC_5 (struct rtsx_chip*,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct rtsx_chip *VAR_11)
{
 struct sd_info *VAR_12 = &VAR_11->sd_card;
 int VAR_13;
 u32 VAR_14;
 u16 VAR_15;
 u8 VAR_16[5], VAR_17[64];

 VAR_13 = FUNC_5(VAR_11, VAR_0, VAR_12->sd_addr,
         VAR_4, ((void*)0), 0);
 if (VAR_13 != VAR_10)
  return VAR_9;

 VAR_16[0] = 0x40 | VAR_5;
 VAR_16[1] = 0;
 VAR_16[2] = 0;
 VAR_16[3] = 0;
 VAR_16[4] = 0;

 VAR_13 = FUNC_4(VAR_11, VAR_6, VAR_16, 5, 64, 1,
         VAR_2, VAR_17, 64, 250);
 if (VAR_13 != VAR_10) {
  FUNC_1(VAR_11);

  FUNC_5(VAR_11, VAR_8, VAR_12->sd_addr,
        VAR_4, ((void*)0), 0);
  return VAR_9;
 }

 FUNC_0(FUNC_2(VAR_11), "ACMD13:\n");
 FUNC_0(FUNC_2(VAR_11), "%*ph\n", 64, VAR_17);

 VAR_15 = ((u16)VAR_17[2] << 8) | VAR_17[3];
 FUNC_0(FUNC_2(VAR_11), "sd_card_type = 0x%04x\n", VAR_15);
 if ((VAR_15 == 0x0001) || (VAR_15 == 0x0002)) {

  VAR_11->card_wp |= VAR_3;
 }


 VAR_14 = FUNC_3(VAR_11, VAR_1);
 if (VAR_14 & VAR_7)
  VAR_11->card_wp |= VAR_3;

 return VAR_10;
}
