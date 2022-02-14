
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct c_can_priv {int* regs; scalar_t__ base; } ;
typedef enum reg { ____Placeholder_reg } reg ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(const struct c_can_priv *VAR_0,
        enum reg VAR_1)
{
 return (u16)FUNC_0(VAR_0->base + 2 * VAR_0->regs[VAR_1]);
}
