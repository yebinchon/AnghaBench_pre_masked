
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bcm_sysport_priv {scalar_t__ base; scalar_t__ is_lite; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct bcm_sysport_priv *VAR_2, u32 VAR_3)
{
 if (VAR_2->is_lite && VAR_3 >= VAR_0)
  VAR_3 += 4;
 return FUNC_0(VAR_2->base + VAR_1 + VAR_3);
}
