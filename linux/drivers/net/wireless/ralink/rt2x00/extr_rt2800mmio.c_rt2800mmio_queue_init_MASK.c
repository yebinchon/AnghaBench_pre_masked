
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
struct queue_entry_priv_mmio {int dummy; } ;
struct data_queue {int qid; int limit; unsigned short winfo_size; int priv_size; void* desc_size; void* data_size; struct rt2x00_dev* rt2x00dev; } ;


 void* VAR_0 ;
 int FUNC_0 () ;







 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct rt2x00_dev*,unsigned short*,unsigned short*) ;

void FUNC_2(struct data_queue *VAR_3)
{
 struct rt2x00_dev *VAR_4 = VAR_3->rt2x00dev;
 unsigned short VAR_5, VAR_6;

 FUNC_1(VAR_4, &VAR_5, &VAR_6);

 switch (VAR_3->qid) {
 case 128:
  VAR_3->limit = 128;
  VAR_3->data_size = VAR_0;
  VAR_3->desc_size = VAR_1;
  VAR_3->winfo_size = VAR_6;
  VAR_3->priv_size = sizeof(struct queue_entry_priv_mmio);
  break;

 case 131:
 case 132:
 case 134:
 case 133:
  VAR_3->limit = 64;
  VAR_3->data_size = VAR_0;
  VAR_3->desc_size = VAR_2;
  VAR_3->winfo_size = VAR_5;
  VAR_3->priv_size = sizeof(struct queue_entry_priv_mmio);
  break;

 case 129:
  VAR_3->limit = 8;
  VAR_3->data_size = 0;
  VAR_3->desc_size = VAR_2;
  VAR_3->winfo_size = VAR_5;
  VAR_3->priv_size = sizeof(struct queue_entry_priv_mmio);
  break;

 case 130:

 default:
  FUNC_0();
  break;
 }
}
