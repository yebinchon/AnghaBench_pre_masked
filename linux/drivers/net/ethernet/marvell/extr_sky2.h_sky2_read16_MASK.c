
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_hw {unsigned int regs; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline u16 FUNC_1(const struct sky2_hw *VAR_0, unsigned VAR_1)
{
 return FUNC_0(VAR_0->regs + VAR_1);
}
