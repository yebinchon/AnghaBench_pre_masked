
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int txstatus_fifo; } ;
struct queue_entry {int entry_idx; int flags; } ;
struct data_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct queue_entry*) ;
 int FUNC_2 (struct queue_entry*,int ,int ,int) ;
 int FUNC_3 (struct queue_entry*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct rt2x00_dev*,char*,int ,int ) ;
 int FUNC_7 (struct data_queue*) ;
 struct queue_entry* FUNC_8 (struct data_queue*,int ) ;
 struct data_queue* FUNC_9 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct rt2x00_dev *VAR_4, unsigned int VAR_5)
{
 struct data_queue *VAR_6;
 struct queue_entry *VAR_7;
 u32 VAR_8;
 u8 VAR_9;
 bool VAR_10;

 while (VAR_5-- > 0 && FUNC_0(&VAR_4->txstatus_fifo, &VAR_8)) {




  VAR_9 = FUNC_5(VAR_8, VAR_3);
  VAR_6 = FUNC_9(VAR_4, VAR_9);

  if (FUNC_11(FUNC_7(VAR_6))) {
   FUNC_4(VAR_4, "Got TX status for an empty queue %u, dropping\n",
       VAR_9);
   break;
  }

  VAR_7 = FUNC_8(VAR_6, VAR_2);

  if (FUNC_11(FUNC_10(VAR_1, &VAR_7->flags) ||
        !FUNC_10(VAR_0, &VAR_7->flags))) {
   FUNC_6(VAR_4, "Data pending for entry %u in queue %u\n",
        VAR_7->entry_idx, VAR_9);
   break;
  }

  VAR_10 = FUNC_3(VAR_7, VAR_8);
  FUNC_2(VAR_7, VAR_8, FUNC_1(VAR_7), VAR_10);
 }
}
