
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct list_head {int dummy; } ;
struct io_bdt {struct bnx2fc_cmd* io_req; } ;
struct fcoe_port {struct bnx2fc_interface* priv; } ;
struct TYPE_6__ {scalar_t__ counter; } ;
struct bnx2fc_rport {int free_sqes; TYPE_3__ num_active_ios; struct fcoe_port* port; } ;
struct bnx2fc_interface {TYPE_1__* hba; } ;
struct bnx2fc_cmd_mgr {struct io_bdt** io_bdt_pool; int * free_list_lock; struct bnx2fc_cmd** cmds; TYPE_2__* free_list; } ;
struct bnx2fc_cmd {size_t xid; int refcount; struct io_bdt* bd_tbl; scalar_t__ req_flags; struct bnx2fc_cmd_mgr* cmd_mgr; struct fcoe_port* port; int link; } ;
struct TYPE_5__ {scalar_t__ next; } ;
struct TYPE_4__ {struct bnx2fc_cmd_mgr* cmd_mgr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct list_head*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct bnx2fc_cmd *FUNC_11(struct bnx2fc_rport *VAR_2)
{
 struct fcoe_port *VAR_3 = VAR_2->port;
 struct bnx2fc_interface *VAR_4 = VAR_3->priv;
 struct bnx2fc_cmd_mgr *VAR_5 = VAR_4->hba->cmd_mgr;
 struct bnx2fc_cmd *VAR_6;
 struct list_head *VAR_7;
 struct io_bdt *VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u16 VAR_11;
 int VAR_12 = FUNC_4();

 VAR_10 = VAR_0;




 FUNC_9(&VAR_5->free_list_lock[VAR_12]);
 VAR_9 = FUNC_3(&VAR_2->free_sqes);
 if ((FUNC_7(&VAR_5->free_list[VAR_12])) ||
     (VAR_2->num_active_ios.counter >= VAR_10) ||
     (VAR_9 + VAR_10 <= VAR_1)) {
  FUNC_10(&VAR_5->free_list_lock[VAR_12]);
  FUNC_8();
  return ((void*)0);
 }

 VAR_7 = (struct list_head *)
  VAR_5->free_list[VAR_12].next;
 FUNC_6(VAR_7);
 VAR_6 = (struct bnx2fc_cmd *) VAR_7;
 VAR_11 = VAR_6->xid;
 VAR_5->cmds[VAR_11] = VAR_6;
 FUNC_2(&VAR_2->num_active_ios);
 FUNC_1(&VAR_2->free_sqes);
 FUNC_10(&VAR_5->free_list_lock[VAR_12]);
 FUNC_8();

 FUNC_0(&VAR_6->link);

 VAR_6->port = VAR_3;
 VAR_6->cmd_mgr = VAR_5;
 VAR_6->req_flags = 0;



 VAR_8 = VAR_6->bd_tbl = VAR_5->io_bdt_pool[VAR_11];
 VAR_8->io_req = VAR_6;


 FUNC_5(&VAR_6->refcount);
 return VAR_6;
}
