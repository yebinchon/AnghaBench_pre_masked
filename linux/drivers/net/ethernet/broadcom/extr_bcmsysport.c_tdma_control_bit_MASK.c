
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bcm_sysport_priv {int is_lite; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct bcm_sysport_priv *VAR_1, u32 VAR_2)
{
 if (!VAR_1->is_lite) {
  return FUNC_0(VAR_2);
 } else {
  if (VAR_2 >= VAR_0)
   return FUNC_0(VAR_2 + 1);
  else
   return FUNC_0(VAR_2);
 }
}
