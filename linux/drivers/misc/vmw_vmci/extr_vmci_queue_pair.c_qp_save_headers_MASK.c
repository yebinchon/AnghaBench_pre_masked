
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qp_broker_entry {int saved_consume_q; TYPE_2__* consume_q; int saved_produce_q; TYPE_1__* produce_q; } ;
struct TYPE_4__ {int * saved_header; int * q_header; } ;
struct TYPE_3__ {int * saved_header; int * q_header; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct qp_broker_entry *VAR_1)
{
 int VAR_2;

 if (VAR_1->produce_q->saved_header != ((void*)0) &&
     VAR_1->consume_q->saved_header != ((void*)0)) {






  return VAR_0;
 }

 if (((void*)0) == VAR_1->produce_q->q_header ||
     ((void*)0) == VAR_1->consume_q->q_header) {
  VAR_2 = FUNC_1(VAR_1->produce_q, VAR_1->consume_q);
  if (VAR_2 < VAR_0)
   return VAR_2;
 }

 FUNC_0(&VAR_1->saved_produce_q, VAR_1->produce_q->q_header,
        sizeof(VAR_1->saved_produce_q));
 VAR_1->produce_q->saved_header = &VAR_1->saved_produce_q;
 FUNC_0(&VAR_1->saved_consume_q, VAR_1->consume_q->q_header,
        sizeof(VAR_1->saved_consume_q));
 VAR_1->consume_q->saved_header = &VAR_1->saved_consume_q;

 return VAR_0;
}
