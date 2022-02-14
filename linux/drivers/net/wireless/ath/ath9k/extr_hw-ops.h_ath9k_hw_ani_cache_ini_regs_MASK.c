
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct TYPE_2__ {int (* ani_cache_ini_regs ) (struct ath_hw*) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;

__attribute__((used)) static inline void FUNC_2(struct ath_hw *VAR_0)
{
 if (!FUNC_0(VAR_0)->ani_cache_ini_regs)
  return;

 FUNC_0(VAR_0)->ani_cache_ini_regs(VAR_0);
}
