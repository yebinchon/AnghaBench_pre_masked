
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hclgevf_mbx_resp_status {int received_resp; int origin_mbx_msg; int resp_status; int * additional_info; } ;
struct hclgevf_cmq_ring {size_t next_to_use; struct hclgevf_desc* desc; } ;
struct TYPE_6__ {struct hclgevf_cmq_ring crq; } ;
struct TYPE_8__ {TYPE_1__ cmq; } ;
struct TYPE_9__ {size_t tail; int count; int ** msg_q; } ;
struct hclgevf_dev {int mbx_event_pending; TYPE_3__ hw; TYPE_2__* pdev; TYPE_5__ arq; int state; struct hclgevf_mbx_resp_status mbx_resp; } ;
struct hclgevf_desc {scalar_t__ flag; scalar_t__ data; } ;
struct hclge_mbx_pf_to_vf_cmd {int* msg; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct hclgevf_cmq_ring*) ;
 int FUNC_6 (TYPE_5__) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct hclgevf_dev*) ;
 int FUNC_9 (TYPE_3__*,int ,size_t) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,int*,int) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int) ;

void FUNC_15(struct hclgevf_dev *VAR_6)
{
 struct hclgevf_mbx_resp_status *VAR_7;
 struct hclge_mbx_pf_to_vf_cmd *VAR_8;
 struct hclgevf_cmq_ring *VAR_9;
 struct hclgevf_desc *VAR_10;
 u16 *VAR_11;
 u16 VAR_12;
 u8 *VAR_13;
 int VAR_14;

 VAR_7 = &VAR_6->mbx_resp;
 VAR_9 = &VAR_6->hw.cmq.crq;

 while (!FUNC_7(&VAR_6->hw)) {
  if (FUNC_13(VAR_2, &VAR_6->state)) {
   FUNC_3(&VAR_6->pdev->dev, "vf crq need init\n");
   return;
  }

  VAR_10 = &VAR_9->desc[VAR_9->next_to_use];
  VAR_8 = (struct hclge_mbx_pf_to_vf_cmd *)VAR_10->data;

  VAR_12 = FUNC_11(VAR_9->desc[VAR_9->next_to_use].flag);
  if (FUNC_14(!FUNC_10(VAR_12, VAR_0))) {
   FUNC_4(&VAR_6->pdev->dev,
     "dropped invalid mailbox message, code = %d\n",
     VAR_8->msg[0]);


   VAR_9->desc[VAR_9->next_to_use].flag = 0;
   FUNC_5(VAR_9);
   continue;
  }







  switch (VAR_8->msg[0]) {
  case 129:
   if (VAR_7->received_resp)
    FUNC_4(&VAR_6->pdev->dev,
      "VF mbx resp flag not clear(%d)\n",
      VAR_8->msg[1]);
   VAR_7->received_resp = 1;

   VAR_7->origin_mbx_msg = (VAR_8->msg[1] << 16);
   VAR_7->origin_mbx_msg |= VAR_8->msg[2];
   VAR_7->resp_status = VAR_8->msg[3];

   VAR_13 = (u8 *)&VAR_8->msg[4];
   for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
    VAR_7->additional_info[VAR_14] = *VAR_13;
    VAR_13++;
   }
   break;
  case 131:
  case 132:
  case 130:
  case 128:





   VAR_6->mbx_event_pending = 1;




   if (FUNC_1(&VAR_6->arq.count) >=
       VAR_3) {
    FUNC_4(&VAR_6->pdev->dev,
      "Async Q full, dropping msg(%d)\n",
      VAR_8->msg[1]);
    break;
   }


   VAR_11 = VAR_6->arq.msg_q[VAR_6->arq.tail];
   FUNC_12(&VAR_11[0], VAR_8->msg,
          VAR_4 * sizeof(u16));
   FUNC_6(VAR_6->arq);
   FUNC_0(&VAR_6->arq.count);

   FUNC_8(VAR_6);

   break;
  default:
   FUNC_2(&VAR_6->pdev->dev,
    "VF received unsupported(%d) mbx msg from PF\n",
    VAR_8->msg[0]);
   break;
  }
  VAR_9->desc[VAR_9->next_to_use].flag = 0;
  FUNC_5(VAR_9);
 }


 FUNC_9(&VAR_6->hw, VAR_1,
     VAR_9->next_to_use);
}
