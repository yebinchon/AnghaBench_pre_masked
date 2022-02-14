
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_abb {int txdone_mask; int int_base; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct ti_abb *VAR_0)
{
 return !!(FUNC_0(VAR_0->int_base) & VAR_0->txdone_mask);
}
