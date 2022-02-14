
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fc_bsg_reply {int result; int reply_payload_rcv_len; } ;
struct bsg_job {struct fc_bsg_reply* reply; } ;
struct TYPE_5__ {struct bsg_job* bsg_job; } ;
struct TYPE_6__ {int (* free ) (TYPE_2__*) ;TYPE_1__ u; } ;
typedef TYPE_2__ srb_t ;


 int FUNC_0 (struct bsg_job*,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(srb_t *VAR_0, int VAR_1)
{
 struct bsg_job *VAR_2 = VAR_0->u.bsg_job;
 struct fc_bsg_reply *VAR_3 = VAR_2->reply;

 VAR_3->result = VAR_1;
 FUNC_0(VAR_2, VAR_3->result,
         VAR_3->reply_payload_rcv_len);
 VAR_0->free(VAR_0);
}
