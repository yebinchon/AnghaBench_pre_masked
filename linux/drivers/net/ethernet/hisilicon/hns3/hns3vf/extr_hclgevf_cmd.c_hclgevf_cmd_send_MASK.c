
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct hclgevf_cmq_ring {int next_to_use; int desc_num; int lock; struct hclgevf_desc* desc; int next_to_clean; } ;
struct TYPE_4__ {scalar_t__ tx_timeout; int last_status; struct hclgevf_cmq_ring csq; } ;
struct hclgevf_hw {TYPE_2__ cmq; scalar_t__ hdev; } ;
struct hclgevf_dev {TYPE_1__* pdev; int state; } ;
struct hclgevf_desc {int retval; int flag; int opcode; } ;
typedef enum hclgevf_cmd_status { ____Placeholder_hclgevf_cmd_status } hclgevf_cmd_status ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct hclgevf_hw*) ;
 scalar_t__ FUNC_4 (struct hclgevf_hw*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct hclgevf_hw*,int ) ;
 int FUNC_7 (struct hclgevf_cmq_ring*) ;
 int FUNC_8 (struct hclgevf_hw*,int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int) ;

int FUNC_15(struct hclgevf_hw *VAR_5, struct hclgevf_desc *VAR_6, int VAR_7)
{
 struct hclgevf_dev *VAR_8 = (struct hclgevf_dev *)VAR_5->hdev;
 struct hclgevf_cmq_ring *VAR_9 = &VAR_5->cmq.csq;
 struct hclgevf_desc *VAR_10;
 bool VAR_11 = 0;
 u32 VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 u16 VAR_15;
 u16 VAR_16;
 int VAR_17;

 FUNC_11(&VAR_5->cmq.csq.lock);

 if (FUNC_13(VAR_4, &VAR_8->state)) {
  FUNC_12(&VAR_5->cmq.csq.lock);
  return -VAR_1;
 }

 if (VAR_7 > FUNC_7(&VAR_5->cmq.csq)) {



  VAR_9->next_to_clean = FUNC_6(VAR_5,
            VAR_2);
  FUNC_12(&VAR_5->cmq.csq.lock);
  return -VAR_1;
 }




 VAR_17 = VAR_5->cmq.csq.next_to_use;
 VAR_16 = FUNC_9(VAR_6[0].opcode);
 while (VAR_13 < VAR_7) {
  VAR_10 = &VAR_5->cmq.csq.desc[VAR_5->cmq.csq.next_to_use];
  *VAR_10 = VAR_6[VAR_13];
  (VAR_5->cmq.csq.next_to_use)++;
  if (VAR_5->cmq.csq.next_to_use == VAR_5->cmq.csq.desc_num)
   VAR_5->cmq.csq.next_to_use = 0;
  VAR_13++;
 }


 FUNC_8(VAR_5, VAR_3,
     VAR_5->cmq.csq.next_to_use);




 if (FUNC_0(FUNC_9(VAR_6->flag))) {
  do {
   if (FUNC_4(VAR_5))
    break;
   FUNC_14(1);
   VAR_12++;
  } while (VAR_12 < VAR_5->cmq.tx_timeout);
 }

 if (FUNC_4(VAR_5)) {
  VAR_11 = 1;
  VAR_13 = 0;

  while (VAR_13 < VAR_7) {

   VAR_10 = &VAR_5->cmq.csq.desc[VAR_17];
   VAR_6[VAR_13] = *VAR_10;

   if (FUNC_10(!FUNC_5(VAR_16)))
    VAR_15 = FUNC_9(VAR_6[VAR_13].retval);
   else
    VAR_15 = FUNC_9(VAR_6[0].retval);

   VAR_14 = FUNC_2(VAR_15);
   VAR_5->cmq.last_status = (enum hclgevf_cmd_status)VAR_15;
   VAR_17++;
   VAR_13++;
   if (VAR_17 == VAR_5->cmq.csq.desc_num)
    VAR_17 = 0;
  }
 }

 if (!VAR_11)
  VAR_14 = -VAR_0;


 VAR_13 = FUNC_3(VAR_5);
 if (VAR_13 != VAR_7)
  FUNC_1(&VAR_8->pdev->dev,
    "cleaned %d, need to clean %d\n", VAR_13, VAR_7);

 FUNC_12(&VAR_5->cmq.csq.lock);

 return VAR_14;
}
