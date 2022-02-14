
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fm10k_hw_stat {scalar_t__ base_h; scalar_t__ base_l; } ;
struct fm10k_hw {int hw_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct fm10k_hw*,scalar_t__) ;

u32 FUNC_2(struct fm10k_hw *VAR_0, u32 VAR_1,
       struct fm10k_hw_stat *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_0, VAR_1) - VAR_2->base_l;

 if (FUNC_0(VAR_0->hw_addr))
  VAR_2->base_h = 0;

 return VAR_3;
}
