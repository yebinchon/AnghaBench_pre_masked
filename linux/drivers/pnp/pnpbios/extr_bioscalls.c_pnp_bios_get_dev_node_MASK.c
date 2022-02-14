
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pnp_bios_node {int dummy; } ;


 int FUNC_0 (int *,char,struct pnp_bios_node*) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(u8 *VAR_0, char VAR_1, struct pnp_bios_node *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1("get_dev_node", VAR_3);
 return VAR_3;
}
