
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct at91_priv {int reg_base; } ;
typedef enum at91_reg { ____Placeholder_at91_reg } at91_reg ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline void FUNC_1(const struct at91_priv *VAR_0, enum at91_reg VAR_1,
  u32 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->reg_base + VAR_1);
}
