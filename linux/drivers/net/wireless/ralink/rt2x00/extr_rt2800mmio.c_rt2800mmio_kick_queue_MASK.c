
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int txstatus_timer; } ;
struct queue_entry {int entry_idx; } ;
struct data_queue {int qid; struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_4 (struct data_queue*) ;
 struct queue_entry* FUNC_5 (struct data_queue*,int ) ;

void FUNC_6(struct data_queue *VAR_3)
{
 struct rt2x00_dev *VAR_4 = VAR_3->rt2x00dev;
 struct queue_entry *VAR_5;

 switch (VAR_3->qid) {
 case 129:
 case 130:
 case 132:
 case 131:
  FUNC_1(FUNC_4(VAR_3));
  VAR_5 = FUNC_5(VAR_3, VAR_1);
  FUNC_3(VAR_4, FUNC_0(VAR_3->qid),
       VAR_5->entry_idx);
  FUNC_2(&VAR_4->txstatus_timer,
         VAR_2, VAR_0);
  break;
 case 128:
  VAR_5 = FUNC_5(VAR_3, VAR_1);
  FUNC_3(VAR_4, FUNC_0(5),
       VAR_5->entry_idx);
  break;
 default:
  break;
 }
}
