
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcms_c_info {TYPE_1__* hw; } ;
struct TYPE_2__ {int d11core; int sih; int clk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(struct brcms_c_info *VAR_3)
{
 u32 VAR_4;

 if (!VAR_3->hw->clk)
  return FUNC_1(VAR_3->hw->sih);
 VAR_4 = FUNC_2(VAR_3->hw->d11core,
         FUNC_0(VAR_2));
 return (VAR_4 & (VAR_1 | VAR_0)) != VAR_0;
}
