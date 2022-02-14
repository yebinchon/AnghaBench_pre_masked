
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int sd_voltage_switch_delay; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_4 (struct rtsx_chip*,int ) ;
 int FUNC_5 (struct rtsx_chip*,int ,int ,int ,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct rtsx_chip *VAR_14)
{
 int VAR_15;
 u8 VAR_16;

 VAR_15 = FUNC_3(VAR_14, VAR_1,
         VAR_3 | VAR_2,
         VAR_3);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_5(VAR_14, VAR_13, 0, VAR_10,
         ((void*)0), 0);
 if (VAR_15 != VAR_12)
  return VAR_11;

 FUNC_6(VAR_14->sd_voltage_switch_delay);

 VAR_15 = FUNC_2(VAR_14, VAR_1, &VAR_16);
 if (VAR_15)
  return VAR_15;
 if (VAR_16 & (VAR_4 | VAR_8 | VAR_7 |
    VAR_6 | VAR_5)) {
  return VAR_11;
 }

 VAR_15 = FUNC_3(VAR_14, VAR_1, 0xFF,
         VAR_2);
 if (VAR_15)
  return VAR_15;
 VAR_15 = FUNC_4(VAR_14, VAR_9);
 if (VAR_15 != VAR_12)
  return VAR_11;

 FUNC_7(50);

 VAR_15 = FUNC_3(VAR_14, VAR_1, 0xFF,
         VAR_3);
 if (VAR_15)
  return VAR_15;
 FUNC_7(10);

 VAR_15 = FUNC_2(VAR_14, VAR_1, &VAR_16);
 if (VAR_15)
  return VAR_15;
 if ((VAR_16 & (VAR_4 | VAR_8 | VAR_7 |
    VAR_6 | VAR_5)) !=
   (VAR_4 | VAR_8 | VAR_7 |
    VAR_6 | VAR_5)) {
  FUNC_0(FUNC_1(VAR_14), "SD_BUS_STAT: 0x%x\n", VAR_16);
  FUNC_3(VAR_14, VAR_1, VAR_3 |
        VAR_2, 0);
  FUNC_3(VAR_14, VAR_0, 0xFF, 0);
  return VAR_11;
 }

 VAR_15 = FUNC_3(VAR_14, VAR_1,
         VAR_3 | VAR_2, 0);
 if (VAR_15)
  return VAR_15;

 return VAR_12;
}
