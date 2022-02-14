
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct data_queue {int qid; TYPE_1__* rt2x00dev; } ;
struct TYPE_2__ {int workqueue; struct work_struct rxdone_work; struct work_struct txdone_work; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct work_struct*) ;
 scalar_t__ FUNC_2 (struct data_queue*) ;
 int FUNC_3 (struct data_queue*,int ,int ,int *,int ) ;
 int VAR_2 ;

void FUNC_4(struct data_queue *VAR_3, bool VAR_4)
{
 struct work_struct *VAR_5;
 unsigned int VAR_6;

 if (VAR_4)
  FUNC_3(VAR_3, VAR_1, VAR_0, ((void*)0),
        VAR_2);




 switch (VAR_3->qid) {
 case 129:
 case 130:
 case 132:
 case 131:
  VAR_5 = &VAR_3->rt2x00dev->txdone_work;
  break;
 case 128:
  VAR_5 = &VAR_3->rt2x00dev->rxdone_work;
  break;
 default:
  return;
 }

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {





  if (FUNC_2(VAR_3))
   break;





  FUNC_1(VAR_3->rt2x00dev->workqueue, VAR_5);





  FUNC_0(50);
 }
}
