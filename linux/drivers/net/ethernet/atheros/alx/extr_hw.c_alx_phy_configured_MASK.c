
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct alx_hw {int adv_cfg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct alx_hw*) ;
 scalar_t__ FUNC_2 (struct alx_hw*,int ) ;

bool FUNC_3(struct alx_hw *VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_2, VAR_2->adv_cfg);
 VAR_3 = FUNC_0(VAR_3, VAR_0);
 VAR_4 = FUNC_1(VAR_2);

 if (VAR_4 == VAR_1)
  return 0;

 return VAR_3 == VAR_4;
}
