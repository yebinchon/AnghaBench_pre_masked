
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fman_mac {int regs; int memac_drv_param; } ;
typedef scalar_t__ enet_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct fman_mac *VAR_1, enet_addr_t *VAR_2)
{
 if (!FUNC_1(VAR_1->memac_drv_param))
  return -VAR_0;

 FUNC_0(VAR_1->regs, (u8 *)(*VAR_2), 0);

 return 0;
}
