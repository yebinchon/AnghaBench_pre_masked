
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emac_instance {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct emac_instance*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct emac_instance *VAR_2, u32 VAR_3)
{
 int VAR_4 = !!(VAR_3 & VAR_1);

 if (FUNC_0(VAR_2, VAR_0))
  VAR_4 = !VAR_4;

 return VAR_4;
}
