
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*,int ,int) ;
 scalar_t__ FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (int) ;

bool FUNC_3(struct ath_hw *VAR_3, u32 VAR_4)
{


 int VAR_5 = 1000 / 100;
 int VAR_6;

 FUNC_0(VAR_3, VAR_0, 1 << VAR_4);

 for (VAR_6 = VAR_5; VAR_6 != 0; VAR_6--) {
  if (VAR_6 != VAR_5)
   FUNC_2(100);

  if (FUNC_1(VAR_3, VAR_4) == 0)
   break;
 }

 FUNC_0(VAR_3, VAR_0, 0);

 return VAR_6 != 0;



}
