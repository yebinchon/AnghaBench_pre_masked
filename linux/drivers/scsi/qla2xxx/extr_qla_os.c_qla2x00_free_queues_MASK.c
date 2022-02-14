
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsp_que {int dummy; } ;
typedef struct rsp_que req_que ;
struct qla_hw_data {int max_req_queues; int max_rsp_queues; struct rsp_que** rsp_q_map; int hardware_lock; int rsp_qid_map; struct rsp_que** req_q_map; int req_qid_map; struct rsp_que** base_qpair; struct rsp_que** queue_pair_map; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct rsp_que**) ;
 int FUNC_2 (struct qla_hw_data*,struct rsp_que*) ;
 int FUNC_3 (struct qla_hw_data*,struct rsp_que*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct qla_hw_data *VAR_0)
{
 struct req_que *VAR_1;
 struct rsp_que *VAR_2;
 int VAR_3;
 unsigned long VAR_4;

 if (VAR_0->queue_pair_map) {
  FUNC_1(VAR_0->queue_pair_map);
  VAR_0->queue_pair_map = ((void*)0);
 }
 if (VAR_0->base_qpair) {
  FUNC_1(VAR_0->base_qpair);
  VAR_0->base_qpair = ((void*)0);
 }

 FUNC_4(&VAR_0->hardware_lock, VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_0->max_req_queues; VAR_3++) {
  if (!FUNC_6(VAR_3, VAR_0->req_qid_map))
   continue;

  VAR_1 = VAR_0->req_q_map[VAR_3];
  FUNC_0(VAR_3, VAR_0->req_qid_map);
  VAR_0->req_q_map[VAR_3] = ((void*)0);

  FUNC_5(&VAR_0->hardware_lock, VAR_4);
  FUNC_2(VAR_0, VAR_1);
  FUNC_4(&VAR_0->hardware_lock, VAR_4);
 }
 FUNC_5(&VAR_0->hardware_lock, VAR_4);

 FUNC_1(VAR_0->req_q_map);
 VAR_0->req_q_map = ((void*)0);


 FUNC_4(&VAR_0->hardware_lock, VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_0->max_rsp_queues; VAR_3++) {
  if (!FUNC_6(VAR_3, VAR_0->rsp_qid_map))
   continue;

  VAR_2 = VAR_0->rsp_q_map[VAR_3];
  FUNC_0(VAR_3, VAR_0->rsp_qid_map);
  VAR_0->rsp_q_map[VAR_3] = ((void*)0);
  FUNC_5(&VAR_0->hardware_lock, VAR_4);
  FUNC_3(VAR_0, VAR_2);
  FUNC_4(&VAR_0->hardware_lock, VAR_4);
 }
 FUNC_5(&VAR_0->hardware_lock, VAR_4);

 FUNC_1(VAR_0->rsp_q_map);
 VAR_0->rsp_q_map = ((void*)0);
}
