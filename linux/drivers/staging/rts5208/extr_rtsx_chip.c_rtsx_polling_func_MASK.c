
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int sd_int; int sd_io; scalar_t__ polling_config; } ;


 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 scalar_t__ FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*) ;
 int FUNC_10 (struct rtsx_chip*) ;
 int FUNC_11 (struct rtsx_chip*) ;
 int FUNC_12 (struct rtsx_chip*) ;
 int FUNC_13 (struct rtsx_chip*) ;
 int FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (struct rtsx_chip*,int ,int *) ;
 int FUNC_16 (struct rtsx_chip*) ;

void FUNC_17(struct rtsx_chip *VAR_4)
{
 if (FUNC_3(VAR_4, VAR_2))
  return;

 if (FUNC_3(VAR_4, VAR_0))
  goto delink_stage;

 if (VAR_4->polling_config) {
  u8 VAR_5;

  FUNC_15(VAR_4, 0, &VAR_5);
 }

 if (FUNC_3(VAR_4, VAR_1))
  return;

 FUNC_12(VAR_4);

 FUNC_13(VAR_4);

 FUNC_7(VAR_4);

 FUNC_14(VAR_4);

 FUNC_10(VAR_4);

 FUNC_11(VAR_4);

 switch (FUNC_6(VAR_4)) {
 case 128:



  FUNC_1(VAR_4);
  break;

 case 129:
  if (VAR_4->sd_io && !VAR_4->sd_int)
   FUNC_16(VAR_4);

  FUNC_5(VAR_4);
  break;

 default:
  break;
 }

 if (FUNC_0(VAR_4, VAR_3))
  FUNC_9(VAR_4);
 else
  FUNC_8(VAR_4);

delink_stage:
 FUNC_4(VAR_4);
}
