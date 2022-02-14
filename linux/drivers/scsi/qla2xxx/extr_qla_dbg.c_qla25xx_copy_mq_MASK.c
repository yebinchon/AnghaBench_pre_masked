
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {scalar_t__ max_req_queues; scalar_t__ max_rsp_queues; int mqenable; } ;
struct qla2xxx_mq_chain {int type; void** qregs; void* count; void* chain_size; } ;
struct TYPE_4__ {int rsp_q_out; int rsp_q_in; int req_q_out; int req_q_in; } ;
struct TYPE_5__ {TYPE_1__ isp25mq; } ;
typedef TYPE_2__ device_reg_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct qla_hw_data*,int) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int) ;

__attribute__((used)) static inline void *
FUNC_6(struct qla_hw_data *VAR_1, void *VAR_2, uint32_t **VAR_3)
{
 uint32_t VAR_4, VAR_5;
 uint8_t VAR_6;
 struct qla2xxx_mq_chain *VAR_7 = VAR_2;
 device_reg_t *VAR_8;

 if (!VAR_1->mqenable || FUNC_3(VAR_1) || FUNC_1(VAR_1) ||
     FUNC_2(VAR_1))
  return VAR_2;

 VAR_7 = VAR_2;
 *VAR_3 = &VAR_7->type;
 VAR_7->type = FUNC_5(VAR_0);
 VAR_7->chain_size = FUNC_5(sizeof(struct qla2xxx_mq_chain));

 VAR_6 = VAR_1->max_req_queues > VAR_1->max_rsp_queues ?
  VAR_1->max_req_queues : VAR_1->max_rsp_queues;
 VAR_7->count = FUNC_5(VAR_6);
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_8 = FUNC_0(VAR_1, VAR_4);
  VAR_5 = VAR_4 * 4;
  VAR_7->qregs[VAR_5] =
      FUNC_5(FUNC_4(&VAR_8->isp25mq.req_q_in));
  VAR_7->qregs[VAR_5+1] =
      FUNC_5(FUNC_4(&VAR_8->isp25mq.req_q_out));
  VAR_7->qregs[VAR_5+2] =
      FUNC_5(FUNC_4(&VAR_8->isp25mq.rsp_q_in));
  VAR_7->qregs[VAR_5+3] =
      FUNC_5(FUNC_4(&VAR_8->isp25mq.rsp_q_out));
 }

 return VAR_2 + sizeof(struct qla2xxx_mq_chain);
}
