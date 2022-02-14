
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbdma_cmd {int res_count; int xfer_status; int cmd_dep; int phy_addr; int req_count; int command; } ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_2(volatile struct dbdma_cmd *VAR_0,
      unsigned short VAR_1, unsigned VAR_2, unsigned long VAR_3,
      unsigned long VAR_4)
{
 FUNC_0(&VAR_0->command, VAR_1);
 FUNC_0(&VAR_0->req_count, VAR_2);
 FUNC_1(&VAR_0->phy_addr, VAR_3);
 FUNC_1(&VAR_0->cmd_dep, VAR_4);
 FUNC_0(&VAR_0->xfer_status, 0);
 FUNC_0(&VAR_0->res_count, 0);
}
