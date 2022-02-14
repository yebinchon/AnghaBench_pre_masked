
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int name; } ;
struct cpmac_desc {int dummy; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, struct cpmac_desc *VAR_1)
{
 int VAR_2;

 FUNC_0("%s: desc[%p]:", VAR_0->name, VAR_1);
 for (VAR_2 = 0; VAR_2 < sizeof(*VAR_1) / 4; VAR_2++)
  FUNC_0(" %08x", ((u32 *)VAR_1)[VAR_2]);
 FUNC_0("\n");
}
