
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rcom {void* rc_seq_reply; void* rc_seq; void* rc_id; void* rc_result; void* rc_type; int rc_header; } ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;

void FUNC_3(struct dlm_rcom *VAR_0)
{
 FUNC_0(&VAR_0->rc_header);

 VAR_0->rc_type = FUNC_1(VAR_0->rc_type);
 VAR_0->rc_result = FUNC_1(VAR_0->rc_result);
 VAR_0->rc_id = FUNC_2(VAR_0->rc_id);
 VAR_0->rc_seq = FUNC_2(VAR_0->rc_seq);
 VAR_0->rc_seq_reply = FUNC_2(VAR_0->rc_seq_reply);
}
