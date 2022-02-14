
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_set {int sq_cnt; int cq_cnt; int rbdr_cnt; int rq_cnt; int sq_len; int cq_len; } ;
struct nicvf {scalar_t__ sqs_mode; TYPE_1__* pnicvf; struct queue_set* qs; } ;
struct TYPE_2__ {struct queue_set* qs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nicvf*) ;
 int FUNC_1 (struct nicvf*,struct queue_set*,int,int) ;
 int FUNC_2 (struct nicvf*) ;
 int FUNC_3 (struct nicvf*,struct queue_set*,int,int) ;
 int FUNC_4 (struct nicvf*,struct queue_set*,int,int) ;
 int FUNC_5 (struct nicvf*) ;
 int FUNC_6 (struct nicvf*,struct queue_set*,int,int) ;

int FUNC_7(struct nicvf *VAR_1, bool VAR_2)
{
 bool VAR_3 = 0;
 struct queue_set *VAR_4 = VAR_1->qs;
 struct queue_set *VAR_5 = VAR_1->pnicvf->qs;
 int VAR_6;

 if (!VAR_4)
  return 0;





 if (VAR_1->sqs_mode && VAR_5) {
  VAR_4->cq_len = VAR_5->cq_len;
  VAR_4->sq_len = VAR_5->sq_len;
 }

 if (VAR_2) {
  if (FUNC_0(VAR_1))
   return -VAR_0;

  for (VAR_6 = 0; VAR_6 < VAR_4->sq_cnt; VAR_6++)
   FUNC_6(VAR_1, VAR_4, VAR_6, VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_4->cq_cnt; VAR_6++)
   FUNC_1(VAR_1, VAR_4, VAR_6, VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_4->rbdr_cnt; VAR_6++)
   FUNC_3(VAR_1, VAR_4, VAR_6, VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_4->rq_cnt; VAR_6++)
   FUNC_4(VAR_1, VAR_4, VAR_6, VAR_2);
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_4->rq_cnt; VAR_6++)
   FUNC_4(VAR_1, VAR_4, VAR_6, VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_4->rbdr_cnt; VAR_6++)
   FUNC_3(VAR_1, VAR_4, VAR_6, VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_4->sq_cnt; VAR_6++)
   FUNC_6(VAR_1, VAR_4, VAR_6, VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_4->cq_cnt; VAR_6++)
   FUNC_1(VAR_1, VAR_4, VAR_6, VAR_3);

  FUNC_2(VAR_1);
 }




 FUNC_5(VAR_1);

 return 0;
}
