
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qed_rdma_port {scalar_t__ pkey_bad_counter; int max_msg_size; int port_state; } ;
struct qed_rdma_device {int max_mr_mw_fmr_size; } ;
struct qed_hwfn {TYPE_1__* cdev; TYPE_3__* mcp_info; TYPE_2__* p_rdma_info; } ;
struct TYPE_8__ {scalar_t__ link_up; } ;
struct TYPE_7__ {TYPE_4__ link_output; } ;
struct TYPE_6__ {struct qed_rdma_device* dev; struct qed_rdma_port* port; } ;
struct TYPE_5__ {int rdma_max_sge; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_3)
{
 struct qed_rdma_port *VAR_4 = VAR_3->p_rdma_info->port;
 struct qed_rdma_device *VAR_5 = VAR_3->p_rdma_info->dev;

 VAR_4->port_state = VAR_3->mcp_info->link_output.link_up ?
      VAR_1 : VAR_0;

 VAR_4->max_msg_size = FUNC_1(VAR_2,
       (VAR_5->max_mr_mw_fmr_size *
        VAR_3->cdev->rdma_max_sge),
       FUNC_0(31));

 VAR_4->pkey_bad_counter = 0;
}
