
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ap_queue {int lock; TYPE_1__* card; int total_request_count; int requestq_count; int requestq; } ;
struct ap_message {int list; int receive; } ;
struct TYPE_2__ {int total_request_count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ap_queue*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ap_queue *VAR_1, struct ap_message *VAR_2)
{



 FUNC_0(!VAR_2->receive);

 FUNC_5(&VAR_1->lock);

 FUNC_4(&VAR_2->list, &VAR_1->requestq);
 VAR_1->requestq_count++;
 VAR_1->total_request_count++;
 FUNC_3(&VAR_1->card->total_request_count);

 FUNC_2(FUNC_1(VAR_1, VAR_0));
 FUNC_6(&VAR_1->lock);
}
