
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct req_que {scalar_t__ cnt; scalar_t__ ring_index; scalar_t__ length; int req_q_out; scalar_t__* out_ptr; } ;
struct qla_qpair {scalar_t__ use_shadow_reg; struct req_que* req; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct qla_qpair *VAR_1,
 uint32_t VAR_2)
{
 uint32_t VAR_3;
 struct req_que *VAR_4 = VAR_1->req;

 if (VAR_4->cnt < (VAR_2 + 2)) {
  VAR_3 = (uint16_t)(VAR_1->use_shadow_reg ? *VAR_4->out_ptr :
      FUNC_0(VAR_4->req_q_out));

  if (VAR_4->ring_index < VAR_3)
   VAR_4->cnt = VAR_3 - VAR_4->ring_index;
  else
   VAR_4->cnt = VAR_4->length - (VAR_4->ring_index - VAR_3);

  if (FUNC_1(VAR_4->cnt < (VAR_2 + 2)))
   return -VAR_0;
 }

 VAR_4->cnt -= VAR_2;

 return 0;
}
