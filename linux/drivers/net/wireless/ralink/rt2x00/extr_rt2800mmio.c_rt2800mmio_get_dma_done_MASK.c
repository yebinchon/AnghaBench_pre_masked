
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
struct queue_entry {int entry_idx; } ;
struct data_queue {int qid; struct rt2x00_dev* rt2x00dev; } ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 struct queue_entry* FUNC_3 (struct data_queue*,int ) ;

unsigned int FUNC_4(struct data_queue *VAR_1)
{
 struct rt2x00_dev *VAR_2 = VAR_1->rt2x00dev;
 struct queue_entry *VAR_3;
 int VAR_4, VAR_5;

 switch (VAR_1->qid) {
 case 130:
 case 131:
 case 133:
 case 132:
  VAR_5 = VAR_1->qid;
  VAR_4 = FUNC_2(VAR_2, FUNC_0(VAR_5));
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_2, FUNC_0(5));
  break;
 case 128:
  VAR_3 = FUNC_3(VAR_1, VAR_0);
  VAR_4 = VAR_3->entry_idx;
  break;
 default:
  FUNC_1(1);
  VAR_4 = 0;
  break;
 }

 return VAR_4;
}
