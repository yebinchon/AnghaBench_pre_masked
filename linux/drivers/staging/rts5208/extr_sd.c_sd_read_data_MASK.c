
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sd_info {int sd_addr; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct rtsx_chip*,int ,scalar_t__,int,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int*,int) ;
 int FUNC_6 (struct rtsx_chip*,int ,int) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct rtsx_chip *VAR_26,
   u8 VAR_27, u8 *VAR_28, int VAR_29, u16 VAR_30,
   u16 VAR_31, u8 VAR_32, u8 *VAR_33, int VAR_34,
   int VAR_35)
{
 struct sd_info *VAR_36 = &VAR_26->sd_card;
 int VAR_37;
 int VAR_38;

 FUNC_7(VAR_26);

 if (!VAR_33)
  VAR_34 = 0;

 if (VAR_34 > 512)
  return VAR_23;

 FUNC_4(VAR_26);

 if (VAR_29) {
  FUNC_0(FUNC_3(VAR_26), "SD/MMC CMD %d\n", VAR_28[0] - 0x40);
  for (VAR_38 = 0; VAR_38 < (FUNC_1(VAR_29, 6)); VAR_38++)
   FUNC_2(VAR_26, VAR_25, VAR_10 + VAR_38,
         0xFF, VAR_28[VAR_38]);
 }
 FUNC_2(VAR_26, VAR_25, VAR_7, 0xFF,
       (u8)VAR_30);
 FUNC_2(VAR_26, VAR_25, VAR_6, 0xFF,
       (u8)(VAR_30 >> 8));
 FUNC_2(VAR_26, VAR_25, VAR_5, 0xFF,
       (u8)VAR_31);
 FUNC_2(VAR_26, VAR_25, VAR_4, 0xFF,
       (u8)(VAR_31 >> 8));

 FUNC_2(VAR_26, VAR_25, VAR_8, 0x03, VAR_32);

 FUNC_2(VAR_26, VAR_25, VAR_9, 0xFF,
       VAR_12 | VAR_14 | VAR_16 |
       VAR_15 | VAR_17);
 if (VAR_27 != VAR_19)
  FUNC_2(VAR_26, VAR_25,
        VAR_0, 0x01, VAR_3);

 FUNC_2(VAR_26, VAR_25, VAR_11, 0xFF,
       VAR_27 | VAR_21);
 FUNC_2(VAR_26, VAR_1, VAR_11, VAR_20,
       VAR_20);

 VAR_37 = FUNC_6(VAR_26, VAR_13, VAR_35);
 if (VAR_37 < 0) {
  if (VAR_37 == -VAR_2) {
   FUNC_8(VAR_26, VAR_22, VAR_36->sd_addr,
         VAR_18, ((void*)0), 0);
  }

  return VAR_23;
 }

 if (VAR_33 && VAR_34) {
  VAR_37 = FUNC_5(VAR_26, VAR_33, VAR_34);
  if (VAR_37 != VAR_24)
   return VAR_23;
 }

 return VAR_24;
}
