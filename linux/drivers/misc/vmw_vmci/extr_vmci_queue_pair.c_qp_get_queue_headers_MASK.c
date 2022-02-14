
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmci_queue_header {int dummy; } ;
struct vmci_qp {TYPE_2__* consume_q; TYPE_1__* produce_q; } ;
struct TYPE_4__ {struct vmci_queue_header* saved_header; struct vmci_queue_header* q_header; } ;
struct TYPE_3__ {struct vmci_queue_header* saved_header; struct vmci_queue_header* q_header; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(const struct vmci_qp *VAR_1,
    struct vmci_queue_header **VAR_2,
    struct vmci_queue_header **VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->produce_q, VAR_1->consume_q);
 if (VAR_4 == VAR_0) {
  *VAR_2 = VAR_1->produce_q->q_header;
  *VAR_3 = VAR_1->consume_q->q_header;
 } else if (VAR_1->produce_q->saved_header &&
     VAR_1->consume_q->saved_header) {
  *VAR_2 = VAR_1->produce_q->saved_header;
  *VAR_3 = VAR_1->consume_q->saved_header;
  VAR_4 = VAR_0;
 }

 return VAR_4;
}
