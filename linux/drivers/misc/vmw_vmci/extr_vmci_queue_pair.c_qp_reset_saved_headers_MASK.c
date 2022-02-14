
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qp_broker_entry {TYPE_2__* consume_q; TYPE_1__* produce_q; } ;
struct TYPE_4__ {int * saved_header; } ;
struct TYPE_3__ {int * saved_header; } ;



__attribute__((used)) static void FUNC_0(struct qp_broker_entry *VAR_0)
{
 VAR_0->produce_q->saved_header = ((void*)0);
 VAR_0->consume_q->saved_header = ((void*)0);
}
