
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*) ;
 int VAR_4 ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;

void FUNC_5(struct ath_hw *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_3(VAR_5);

 FUNC_4(VAR_6, VAR_4, "disable IER\n");
 FUNC_2(VAR_5, VAR_0, VAR_1);
 (void) FUNC_1(VAR_5, VAR_0);
 if (!FUNC_0(VAR_5)) {
  FUNC_2(VAR_5, VAR_2, 0);
  (void) FUNC_1(VAR_5, VAR_2);

  FUNC_2(VAR_5, VAR_3, 0);
  (void) FUNC_1(VAR_5, VAR_3);
 }
}
