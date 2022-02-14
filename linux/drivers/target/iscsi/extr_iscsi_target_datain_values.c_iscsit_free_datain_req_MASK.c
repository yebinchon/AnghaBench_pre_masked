
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_datain_req {int cmd_datain_node; } ;
struct iscsi_cmd {int datain_lock; } ;


 int FUNC_0 (int ,struct iscsi_datain_req*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iscsi_cmd *VAR_1, struct iscsi_datain_req *VAR_2)
{
 FUNC_2(&VAR_1->datain_lock);
 FUNC_1(&VAR_2->cmd_datain_node);
 FUNC_3(&VAR_1->datain_lock);

 FUNC_0(VAR_0, VAR_2);
}
