
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct emac_instance {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct emac_instance*,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct emac_instance *VAR_3, unsigned int VAR_4)
{
 if (FUNC_0(VAR_3, VAR_0))
  return ((VAR_4 >> 6) - 1) << VAR_2;
 else
  return ((VAR_4 >> 6) - 1) << VAR_1;
}
