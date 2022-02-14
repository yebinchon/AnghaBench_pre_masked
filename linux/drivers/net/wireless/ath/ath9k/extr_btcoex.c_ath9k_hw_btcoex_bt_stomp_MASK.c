
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
typedef enum ath_stomp_type { ____Placeholder_ath_stomp_type } ath_stomp_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_1 (struct ath_hw*,int ,int ,int) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (int ,int ,char*) ;

void FUNC_4(struct ath_hw *VAR_5,
         enum ath_stomp_type VAR_6)
{
 if (FUNC_0(VAR_5)) {
  FUNC_1(VAR_5, 0, 0, VAR_6);
  return;
 }

 switch (VAR_6) {
 case 130:
  FUNC_1(VAR_5, VAR_0,
        VAR_1, 0);
  break;
 case 129:
  FUNC_1(VAR_5, VAR_0,
        VAR_2, 0);
  break;
 case 128:
  FUNC_1(VAR_5, VAR_0,
        VAR_3, 0);
  break;
 default:
  FUNC_3(FUNC_2(VAR_5), VAR_4, "Invalid Stomptype\n");
  break;
 }
}
