
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_datain_req {int cmd_datain_node; } ;
struct iscsi_cmd {int datain_lock; int datain_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iscsi_cmd *VAR_0, struct iscsi_datain_req *VAR_1)
{
 FUNC_1(&VAR_0->datain_lock);
 FUNC_0(&VAR_1->cmd_datain_node, &VAR_0->datain_list);
 FUNC_2(&VAR_0->datain_lock);
}
