
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ar5416_desc {int ds_ctl5; int ds_ctl4; } ;


 struct ar5416_desc* FUNC_0 (void const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ath_hw *VAR_4, const void *VAR_5, int VAR_6)
{
 struct ar5416_desc *VAR_7 = FUNC_0(VAR_5);

 switch (VAR_6) {
 case 0:
  return FUNC_1(FUNC_2(VAR_7->ds_ctl4), VAR_0);
 case 1:
  return FUNC_1(FUNC_2(VAR_7->ds_ctl4), VAR_1);
 case 2:
  return FUNC_1(FUNC_2(VAR_7->ds_ctl5), VAR_2);
 case 3:
  return FUNC_1(FUNC_2(VAR_7->ds_ctl5), VAR_3);
 default:
  return -1;
 }
}
