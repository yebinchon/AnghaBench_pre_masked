
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_conn_param {scalar_t__ private_data_len; scalar_t__ private_data; } ;
struct nvmet_rdma_queue {scalar_t__ recv_queue_size; scalar_t__ host_qid; scalar_t__ send_queue_size; } ;
struct nvme_rdma_cm_req {int hrqsize; int hsqsize; int qid; int recfmt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct rdma_conn_param *VAR_5,
    struct nvmet_rdma_queue *VAR_6)
{
 struct nvme_rdma_cm_req *VAR_7;

 VAR_7 = (struct nvme_rdma_cm_req *)VAR_5->private_data;
 if (!VAR_7 || VAR_5->private_data_len == 0)
  return VAR_3;

 if (FUNC_0(VAR_7->recfmt) != VAR_1)
  return VAR_4;

 VAR_6->host_qid = FUNC_0(VAR_7->qid);





 VAR_6->recv_queue_size = FUNC_0(VAR_7->hsqsize) + 1;
 VAR_6->send_queue_size = FUNC_0(VAR_7->hrqsize);

 if (!VAR_6->host_qid && VAR_6->recv_queue_size > VAR_0)
  return VAR_2;



 return 0;
}
