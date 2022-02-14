
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ar9003_txc {int ctl16; int ctl15; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ath_hw *VAR_4, const void *VAR_5, int VAR_6)
{
 const struct ar9003_txc *VAR_7 = VAR_5;

 switch (VAR_6) {
 case 0:
  return FUNC_0(FUNC_1(VAR_7->ctl15), VAR_0);
 case 1:
  return FUNC_0(FUNC_1(VAR_7->ctl15), VAR_1);
 case 2:
  return FUNC_0(FUNC_1(VAR_7->ctl16), VAR_2);
 case 3:
  return FUNC_0(FUNC_1(VAR_7->ctl16), VAR_3);
 default:
  return 0;
 }
}
