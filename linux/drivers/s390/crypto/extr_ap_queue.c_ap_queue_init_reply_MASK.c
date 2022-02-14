
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue {int lock; struct ap_message* reply; } ;
struct ap_message {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ap_queue*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ap_queue *VAR_1, struct ap_message *VAR_2)
{
 VAR_1->reply = VAR_2;

 FUNC_2(&VAR_1->lock);
 FUNC_1(FUNC_0(VAR_1, VAR_0));
 FUNC_3(&VAR_1->lock);
}
