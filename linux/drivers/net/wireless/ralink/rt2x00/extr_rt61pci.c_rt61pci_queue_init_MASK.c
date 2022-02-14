
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_entry_priv_mmio {int dummy; } ;
struct data_queue {int qid; int limit; int priv_size; int desc_size; void* data_size; } ;


 int FUNC_0 () ;
 void* VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct data_queue *VAR_4)
{
 switch (VAR_4->qid) {
 case 128:
  VAR_4->limit = 32;
  VAR_4->data_size = VAR_0;
  VAR_4->desc_size = VAR_1;
  VAR_4->priv_size = sizeof(struct queue_entry_priv_mmio);
  break;

 case 131:
 case 132:
 case 134:
 case 133:
  VAR_4->limit = 32;
  VAR_4->data_size = VAR_0;
  VAR_4->desc_size = VAR_2;
  VAR_4->priv_size = sizeof(struct queue_entry_priv_mmio);
  break;

 case 129:
  VAR_4->limit = 4;
  VAR_4->data_size = 0;
  VAR_4->desc_size = VAR_3;
  VAR_4->priv_size = sizeof(struct queue_entry_priv_mmio);
  break;

 case 130:

 default:
  FUNC_0();
  break;
 }
}
