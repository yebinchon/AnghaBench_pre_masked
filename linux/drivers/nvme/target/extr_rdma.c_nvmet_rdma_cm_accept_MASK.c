
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rdma_conn_param {int rnr_retry_count; int flow_control; int private_data_len; struct nvme_rdma_cm_rep* private_data; int initiator_depth; } ;
struct rdma_cm_id {int dummy; } ;
struct nvmet_rdma_queue {int recv_queue_size; TYPE_3__* dev; } ;
struct nvme_rdma_cm_rep {void* crqsize; void* recfmt; } ;
typedef int priv ;
struct TYPE_6__ {TYPE_2__* device; } ;
struct TYPE_4__ {int max_qp_init_rd_atom; } ;
struct TYPE_5__ {TYPE_1__ attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct rdma_cm_id*,struct rdma_conn_param*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct rdma_cm_id *VAR_3,
  struct nvmet_rdma_queue *VAR_4,
  struct rdma_conn_param *VAR_5)
{
 struct rdma_conn_param VAR_6 = { };
 struct nvme_rdma_cm_rep VAR_7 = { };
 int VAR_8 = -VAR_0;

 VAR_6.rnr_retry_count = 7;
 VAR_6.flow_control = 1;
 VAR_6.initiator_depth = FUNC_1(VAR_2, VAR_5->initiator_depth,
  VAR_4->dev->device->attrs.max_qp_init_rd_atom);
 VAR_6.private_data = &VAR_7;
 VAR_6.private_data_len = sizeof(VAR_7);
 VAR_7.recfmt = FUNC_0(VAR_1);
 VAR_7.crqsize = FUNC_0(VAR_4->recv_queue_size);

 VAR_8 = FUNC_3(VAR_3, &VAR_6);
 if (VAR_8)
  FUNC_2("rdma_accept failed (error code = %d)\n", VAR_8);

 return VAR_8;
}
