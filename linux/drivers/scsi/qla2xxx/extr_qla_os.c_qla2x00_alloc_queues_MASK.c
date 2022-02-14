
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsp_que {int dummy; } ;
typedef struct rsp_que req_que ;
struct qla_qpair {int dummy; } ;
struct qla_hw_data {struct rsp_que** req_q_map; struct rsp_que** rsp_q_map; struct rsp_que** base_qpair; int req_qid_map; int rsp_qid_map; void* queue_pair_map; scalar_t__ max_qpairs; scalar_t__ max_rsp_queues; scalar_t__ max_req_queues; int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (struct rsp_que**) ;
 struct rsp_que** FUNC_2 (int,int ) ;
 int * FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int *,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,struct rsp_que*,struct rsp_que*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct qla_hw_data *VAR_6, struct req_que *VAR_7,
    struct rsp_que *VAR_8)
{
 scsi_qla_host_t *VAR_9 = FUNC_3(VAR_6->pdev);

 VAR_6->req_q_map = FUNC_0(VAR_6->max_req_queues, sizeof(struct req_que *),
    VAR_1);
 if (!VAR_6->req_q_map) {
  FUNC_4(VAR_4, VAR_9, 0x003b,
      "Unable to allocate memory for request queue ptrs.\n");
  goto fail_req_map;
 }

 VAR_6->rsp_q_map = FUNC_0(VAR_6->max_rsp_queues, sizeof(struct rsp_que *),
    VAR_1);
 if (!VAR_6->rsp_q_map) {
  FUNC_4(VAR_4, VAR_9, 0x003c,
      "Unable to allocate memory for response queue ptrs.\n");
  goto fail_rsp_map;
 }

 VAR_6->base_qpair = FUNC_2(sizeof(struct qla_qpair), VAR_1);
 if (VAR_6->base_qpair == ((void*)0)) {
  FUNC_4(VAR_5, VAR_9, 0x00e0,
      "Failed to allocate base queue pair memory.\n");
  goto fail_base_qpair;
 }

 FUNC_5(VAR_9, VAR_7, VAR_8);

 if ((VAR_2 || VAR_3) && VAR_6->max_qpairs) {
  VAR_6->queue_pair_map = FUNC_0(VAR_6->max_qpairs, sizeof(struct qla_qpair *),
   VAR_1);
  if (!VAR_6->queue_pair_map) {
   FUNC_4(VAR_4, VAR_9, 0x0180,
       "Unable to allocate memory for queue pair ptrs.\n");
   goto fail_qpair_map;
  }
 }





 VAR_6->rsp_q_map[0] = VAR_8;
 VAR_6->req_q_map[0] = VAR_7;
 FUNC_6(0, VAR_6->rsp_qid_map);
 FUNC_6(0, VAR_6->req_qid_map);
 return 0;

fail_qpair_map:
 FUNC_1(VAR_6->base_qpair);
 VAR_6->base_qpair = ((void*)0);
fail_base_qpair:
 FUNC_1(VAR_6->rsp_q_map);
 VAR_6->rsp_q_map = ((void*)0);
fail_rsp_map:
 FUNC_1(VAR_6->req_q_map);
 VAR_6->req_q_map = ((void*)0);
fail_req_map:
 return -VAR_0;
}
