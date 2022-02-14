
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req_que {scalar_t__ ring_index; scalar_t__ length; int req_q_in; int ring_ptr; int ring; } ;
struct qla_qpair {struct req_que* req; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct qla_qpair *VAR_0)
{
 struct req_que *VAR_1 = VAR_0->req;

 VAR_1->ring_index++;
 if (VAR_1->ring_index == VAR_1->length) {
  VAR_1->ring_index = 0;
  VAR_1->ring_ptr = VAR_1->ring;
 } else
  VAR_1->ring_ptr++;

 FUNC_0(VAR_1->req_q_in, VAR_1->ring_index);
}
