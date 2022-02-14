
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_queue {int qid; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct data_queue*) ;
 int FUNC_1 (struct data_queue*,int ,int ,int *,int ) ;
 int FUNC_2 (struct data_queue*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(struct data_queue *VAR_4)
{
 switch (VAR_4->qid) {
 case 129:
 case 130:
 case 132:
 case 131:
  if (!FUNC_0(VAR_4))
   FUNC_1(VAR_4,
         VAR_1,
         VAR_0,
         ((void*)0),
         VAR_3);
  break;
 case 128:
  if (!FUNC_2(VAR_4))
   FUNC_1(VAR_4,
         VAR_0,
         VAR_1,
         ((void*)0),
         VAR_2);
  break;
 default:
  break;
 }
}
