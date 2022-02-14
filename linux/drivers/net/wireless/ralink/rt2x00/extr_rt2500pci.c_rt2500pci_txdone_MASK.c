
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct txdone_entry_desc {int retry; scalar_t__ flags; } ;
struct rt2x00_dev {int dummy; } ;
struct queue_entry_priv_mmio {int desc; } ;
struct queue_entry {struct queue_entry_priv_mmio* priv_data; } ;
struct data_queue {int dummy; } ;
typedef enum data_queue_qid { ____Placeholder_data_queue_qid } data_queue_qid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct queue_entry*,struct txdone_entry_desc*) ;
 int FUNC_4 (struct data_queue*) ;
 struct queue_entry* FUNC_5 (struct data_queue*,int ) ;
 struct data_queue* FUNC_6 (struct rt2x00_dev*,int const) ;

__attribute__((used)) static void FUNC_7(struct rt2x00_dev *VAR_8,
        const enum data_queue_qid VAR_9)
{
 struct data_queue *VAR_10 = FUNC_6(VAR_8, VAR_9);
 struct queue_entry_priv_mmio *VAR_11;
 struct queue_entry *VAR_12;
 struct txdone_entry_desc VAR_13;
 u32 VAR_14;

 while (!FUNC_4(VAR_10)) {
  VAR_12 = FUNC_5(VAR_10, VAR_0);
  VAR_11 = VAR_12->priv_data;
  VAR_14 = FUNC_1(VAR_11->desc, 0);

  if (FUNC_2(VAR_14, VAR_4) ||
      !FUNC_2(VAR_14, VAR_7))
   break;




  VAR_13.flags = 0;
  switch (FUNC_2(VAR_14, VAR_5)) {
  case 0:
  case 1:
   FUNC_0(VAR_3, &VAR_13.flags);
   break;
  case 2:
   FUNC_0(VAR_1, &VAR_13.flags);

  default:
   FUNC_0(VAR_2, &VAR_13.flags);
  }
  VAR_13.retry = FUNC_2(VAR_14, VAR_6);

  FUNC_3(VAR_12, &VAR_13);
 }
}
