
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message_queue {unsigned int qlines; int* hstatus; int head; int data; int * limit; int * next; int * start2; int * start; } ;
struct gru_message_queue_desc {unsigned int qlines; int interrupt_pnode; int interrupt_vector; int interrupt_apicid; int mq_gpa; struct message_queue* mq; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct message_queue*,int ,unsigned int) ;
 int FUNC_2 (struct message_queue*) ;

int FUNC_3(struct gru_message_queue_desc *VAR_1,
  void *VAR_2, unsigned int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct message_queue *VAR_7 = VAR_2;
 unsigned int VAR_8;

 VAR_8 = VAR_3 / VAR_0 - 2;
 FUNC_1(VAR_7, 0, VAR_3);
 VAR_7->start = &VAR_7->data;
 VAR_7->start2 = &VAR_7->data + (VAR_8 / 2 - 1) * VAR_0;
 VAR_7->next = &VAR_7->data;
 VAR_7->limit = &VAR_7->data + (VAR_8 - 2) * VAR_0;
 VAR_7->qlines = VAR_8;
 VAR_7->hstatus[0] = 0;
 VAR_7->hstatus[1] = 1;
 VAR_7->head = FUNC_0(2, VAR_8 / 2 + 1);
 VAR_1->mq = VAR_7;
 VAR_1->mq_gpa = FUNC_2(VAR_7);
 VAR_1->qlines = VAR_8;
 VAR_1->interrupt_pnode = VAR_4 >> 1;
 VAR_1->interrupt_vector = VAR_5;
 VAR_1->interrupt_apicid = VAR_6;
 return 0;
}
