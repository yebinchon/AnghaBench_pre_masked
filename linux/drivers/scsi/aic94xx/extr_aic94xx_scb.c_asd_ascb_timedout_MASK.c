
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct asd_seq_data {int pend_q_lock; int pending; } ;
struct asd_ascb {int list; TYPE_3__* scb; TYPE_1__* ha; } ;
struct TYPE_5__ {int opcode; } ;
struct TYPE_6__ {TYPE_2__ header; } ;
struct TYPE_4__ {struct asd_seq_data seq; } ;


 int FUNC_0 (char*,int ) ;
 struct asd_ascb* VAR_0 ;
 int FUNC_1 (struct asd_ascb*) ;
 struct asd_ascb* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_1 ;

void FUNC_6(struct timer_list *VAR_2)
{
 struct asd_ascb *VAR_3 = FUNC_2(VAR_3, VAR_2, VAR_1);
 struct asd_seq_data *VAR_4 = &VAR_3->ha->seq;
 unsigned long VAR_5;

 FUNC_0("scb:0x%x timed out\n", VAR_3->scb->header.opcode);

 FUNC_4(&VAR_4->pend_q_lock, VAR_5);
 VAR_4->pending--;
 FUNC_3(&VAR_3->list);
 FUNC_5(&VAR_4->pend_q_lock, VAR_5);

 FUNC_1(VAR_3);
}
