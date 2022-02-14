
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fman_mac {int regs; int addr; int cfg; } ;
typedef scalar_t__ enet_addr_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct fman_mac *VAR_1, enet_addr_t *VAR_2)
{
 if (!FUNC_1(VAR_1->cfg))
  return -VAR_0;

 VAR_1->addr = FUNC_0(*VAR_2);
 FUNC_2(VAR_1->regs, (u8 *)(*VAR_2));

 return 0;
}
