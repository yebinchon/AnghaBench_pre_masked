
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ctx {int prio; int vlan_id; int dbg_ctx; } ;


 int FUNC_0 (int *,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct qedf_ctx *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = VAR_3 | (VAR_2->prio << VAR_1);
 VAR_2->vlan_id = VAR_4;
 FUNC_0(&VAR_2->dbg_ctx, VAR_0,
    "Setting vlan_id=0x%04x prio=%d.\n",
    VAR_4, VAR_2->prio);
}
