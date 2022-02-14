
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xcan_priv {int reg_base; } ;
typedef enum xcan_reg { ____Placeholder_xcan_reg } xcan_reg ;


 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(const struct xcan_priv *VAR_0, enum xcan_reg VAR_1)
{
 return FUNC_0(VAR_0->reg_base + VAR_1);
}
