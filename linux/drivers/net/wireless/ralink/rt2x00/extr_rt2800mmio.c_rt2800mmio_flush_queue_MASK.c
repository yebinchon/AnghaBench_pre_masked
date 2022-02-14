
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int txdone_work; int workqueue; } ;
struct data_queue {int qid; struct rt2x00_dev* rt2x00dev; } ;







 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct data_queue*) ;

void FUNC_3(struct data_queue *VAR_0, bool VAR_1)
{
 struct rt2x00_dev *VAR_2 = VAR_0->rt2x00dev;
 bool VAR_3 = 0;
 unsigned int VAR_4;

 switch (VAR_0->qid) {
 case 129:
 case 130:
 case 132:
 case 131:
  VAR_3 = 1;
  break;
 case 128:
  break;
 default:
  return;
 }

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {





  if (FUNC_2(VAR_0))
   break;





  if (VAR_3)
   FUNC_1(VAR_2->workqueue, &VAR_2->txdone_work);





  FUNC_0(50);
 }
}
