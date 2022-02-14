
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 scalar_t__ FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_4)
{
 if (!FUNC_2(VAR_4))
  goto set;




 if (FUNC_1(VAR_4, VAR_3) != VAR_2)
  return;
set:
 FUNC_0(VAR_4, VAR_0, VAR_1);
}
