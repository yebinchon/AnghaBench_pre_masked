
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sd_info {int sd_addr; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct rtsx_chip*,int ,scalar_t__,int,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ,int) ;
 int FUNC_6 (struct rtsx_chip*,int*,int) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct rtsx_chip *VAR_23, u8 VAR_24,
    u8 *VAR_25, int VAR_26, u16 VAR_27, u16 VAR_28,
    u8 VAR_29, u8 *VAR_30, int VAR_31, int VAR_32)
{
 struct sd_info *VAR_33 = &VAR_23->sd_card;
 int VAR_34;
 int VAR_35;

 FUNC_7(VAR_23);

 if (!VAR_30)
  VAR_31 = 0;

 if (VAR_31 > 512) {

  return VAR_20;
 }

 if (VAR_30 && VAR_31) {
  VAR_34 = FUNC_6(VAR_23, VAR_30, VAR_31);
  if (VAR_34 != VAR_21)
   return VAR_20;
 }

 FUNC_4(VAR_23);

 if (VAR_26) {
  FUNC_0(FUNC_3(VAR_23), "SD/MMC CMD %d\n", VAR_25[0] - 0x40);
  for (VAR_35 = 0; VAR_35 < (FUNC_1(VAR_26, 6)); VAR_35++) {
   FUNC_2(VAR_23, VAR_22,
         VAR_8 + VAR_35, 0xFF, VAR_25[VAR_35]);
  }
 }
 FUNC_2(VAR_23, VAR_22, VAR_5, 0xFF,
       (u8)VAR_27);
 FUNC_2(VAR_23, VAR_22, VAR_4, 0xFF,
       (u8)(VAR_27 >> 8));
 FUNC_2(VAR_23, VAR_22, VAR_3, 0xFF,
       (u8)VAR_28);
 FUNC_2(VAR_23, VAR_22, VAR_2, 0xFF,
       (u8)(VAR_28 >> 8));

 FUNC_2(VAR_23, VAR_22, VAR_6, 0x03, VAR_29);

 FUNC_2(VAR_23, VAR_22, VAR_7, 0xFF,
       VAR_10 | VAR_12 | VAR_14 |
       VAR_13 | VAR_15);

 FUNC_2(VAR_23, VAR_22, VAR_9, 0xFF,
       VAR_24 | VAR_18);
 FUNC_2(VAR_23, VAR_0, VAR_9, VAR_17,
       VAR_17);

 VAR_34 = FUNC_5(VAR_23, VAR_11, VAR_32);
 if (VAR_34 < 0) {
  if (VAR_34 == -VAR_1) {
   FUNC_8(VAR_23, VAR_19, VAR_33->sd_addr,
         VAR_16, ((void*)0), 0);
  }

  return VAR_20;
 }

 return VAR_21;
}
