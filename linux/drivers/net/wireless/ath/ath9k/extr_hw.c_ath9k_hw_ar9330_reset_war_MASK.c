
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int (* external_reset ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(struct ath_hw *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_2(VAR_4, VAR_6);
  if (VAR_7)
   break;
 }

 if (VAR_4->external_reset &&
     (VAR_7 || VAR_5 == VAR_2)) {
  int VAR_8 = 0;

  FUNC_3(FUNC_1(VAR_4), VAR_3,
   "reset MAC via external reset\n");

  VAR_8 = VAR_4->external_reset();
  if (VAR_8) {
   FUNC_4(FUNC_1(VAR_4),
    "External reset failed, err=%d\n",
    VAR_8);
   return 0;
  }

  FUNC_0(VAR_4, VAR_1, 1);
 }

 return 1;
}
