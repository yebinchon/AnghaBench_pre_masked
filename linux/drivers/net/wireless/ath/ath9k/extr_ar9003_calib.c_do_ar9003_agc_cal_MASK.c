
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
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ,int,int ,int) ;
 int FUNC_4 (struct ath_common*,int ,char*,int) ;

__attribute__((used)) static bool FUNC_5(struct ath_hw *VAR_4)
{
 struct ath_common *VAR_5 = FUNC_2(VAR_4);
 bool VAR_6;

 FUNC_1(VAR_4, VAR_1,
    FUNC_0(VAR_4, VAR_1) |
    VAR_2);

 VAR_6 = FUNC_3(VAR_4, VAR_1,
          VAR_2,
          0, VAR_0);
 if (!VAR_6) {
  FUNC_4(VAR_5, VAR_3,
   "offset calibration failed to complete in %d ms,"
   "noisy environment?\n",
   VAR_0 / 1000);
  return 0;
 }

 return 1;
}
