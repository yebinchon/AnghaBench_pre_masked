
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct emac_instance {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct emac_instance*,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct emac_instance *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 if (FUNC_0(VAR_1, VAR_0))
  return (VAR_2 << 22) | ( (VAR_3 & 0x3ff) << 6);
 else
  return (VAR_2 << 23) | ( (VAR_3 & 0x1ff) << 7);
}
