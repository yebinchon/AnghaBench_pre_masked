
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hclge_vport {int dummy; } ;
struct hclge_mbx_vf_to_pf_cmd {int* msg; size_t mbx_src_vfid; } ;
struct hclge_cmq_ring {size_t next_to_use; struct hclge_desc* desc; } ;
struct TYPE_5__ {struct hclge_cmq_ring crq; } ;
struct TYPE_7__ {TYPE_1__ cmq; } ;
struct hclge_dev {TYPE_3__ hw; TYPE_2__* pdev; int vport_cfg_mutex; struct hclge_vport* vport; int state; } ;
struct hclge_desc {scalar_t__ flag; scalar_t__ data; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_4 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_5 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_6 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_7 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_8 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int) ;
 int FUNC_9 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int) ;
 int FUNC_10 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int) ;
 int FUNC_11 (struct hclge_dev*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_12 (struct hclge_dev*) ;
 int FUNC_13 (struct hclge_vport*,int,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_14 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_15 (struct hclge_cmq_ring*) ;
 int FUNC_16 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_17 (struct hclge_vport*,int,int ) ;
 int FUNC_18 (struct hclge_vport*,int) ;
 int FUNC_19 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int) ;
 int FUNC_20 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int) ;
 int FUNC_21 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_22 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_23 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_24 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_25 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*) ;
 int FUNC_26 (TYPE_3__*,int ,size_t) ;
 int FUNC_27 (unsigned int,int ) ;
 unsigned int FUNC_28 (scalar_t__) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 scalar_t__ FUNC_31 (int ,int *) ;
 scalar_t__ FUNC_32 (int) ;

void FUNC_33(struct hclge_dev *VAR_5)
{
 struct hclge_cmq_ring *VAR_6 = &VAR_5->hw.cmq.crq;
 struct hclge_mbx_vf_to_pf_cmd *VAR_7;
 struct hclge_vport *VAR_8;
 struct hclge_desc *VAR_9;
 unsigned int VAR_10;
 int VAR_11;


 while (!FUNC_2(&VAR_5->hw)) {
  if (FUNC_31(VAR_4, &VAR_5->state)) {
   FUNC_1(&VAR_5->pdev->dev,
     "command queue needs re-initializing\n");
   return;
  }

  VAR_9 = &VAR_6->desc[VAR_6->next_to_use];
  VAR_7 = (struct hclge_mbx_vf_to_pf_cmd *)VAR_9->data;

  VAR_10 = FUNC_28(VAR_6->desc[VAR_6->next_to_use].flag);
  if (FUNC_32(!FUNC_27(VAR_10, VAR_0))) {
   FUNC_1(&VAR_5->pdev->dev,
     "dropped invalid mailbox message, code = %d\n",
     VAR_7->msg[0]);


   VAR_6->desc[VAR_6->next_to_use].flag = 0;
   FUNC_15(VAR_6);
   continue;
  }

  VAR_8 = &VAR_5->vport[VAR_7->mbx_src_vfid];

  switch (VAR_7->msg[0]) {
  case 139:
   VAR_11 = FUNC_13(VAR_8, 1,
        VAR_7);
   break;
  case 128:
   VAR_11 = FUNC_13(VAR_8, 0,
        VAR_7);
   break;
  case 131:
   VAR_11 = FUNC_22(VAR_8, VAR_7);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF fail(%d) to set VF promisc mode\n",
     VAR_11);
   break;
  case 130:
   VAR_11 = FUNC_23(VAR_8, VAR_7);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF fail(%d) to set VF UC MAC Addr\n",
     VAR_11);
   break;
  case 132:
   VAR_11 = FUNC_20(VAR_8, VAR_7, 0);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF fail(%d) to set VF MC MAC Addr\n",
     VAR_11);
   break;
  case 129:
   VAR_11 = FUNC_24(VAR_8, VAR_7);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF failed(%d) to config VF's VLAN\n",
     VAR_11);
   break;
  case 134:
   VAR_11 = FUNC_19(VAR_8, VAR_7, 0);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF failed(%d) to set VF's ALIVE\n",
     VAR_11);
   break;
  case 144:
   VAR_11 = FUNC_9(VAR_8, VAR_7, 1);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF failed(%d) to get Q info for VF\n",
     VAR_11);
   break;
  case 146:
   VAR_11 = FUNC_8(VAR_8, VAR_7, 1);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF failed(%d) to get Q depth for VF\n",
     VAR_11);
   break;

  case 142:
   VAR_11 = FUNC_10(VAR_8, VAR_7, 1);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF failed(%d) to get TC info for VF\n",
     VAR_11);
   break;
  case 148:
   VAR_11 = FUNC_3(VAR_8, VAR_7);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF fail(%d) to get link stat for VF\n",
     VAR_11);
   break;
  case 136:
   FUNC_14(VAR_8, VAR_7);
   break;
  case 135:
   FUNC_16(VAR_8, VAR_7);
   break;
  case 140:
   FUNC_25(VAR_8, VAR_7);
   break;
  case 133:
   VAR_11 = FUNC_21(VAR_8, VAR_7);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "VF fail(%d) to set mtu\n", VAR_11);
   break;
  case 145:
   VAR_11 = FUNC_5(VAR_8, VAR_7);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF failed(%d) to get qid for VF\n",
     VAR_11);
   break;
  case 143:
   VAR_11 = FUNC_6(VAR_8, VAR_7);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF fail(%d) to get rss key for VF\n",
     VAR_11);
   break;
  case 149:
   FUNC_4(VAR_8, VAR_7);
   break;
  case 141:
   FUNC_29(&VAR_5->vport_cfg_mutex);
   FUNC_17(VAR_8, 1,
           VAR_2);
   FUNC_17(VAR_8, 1,
           VAR_1);
   FUNC_18(VAR_8, 1);
   FUNC_30(&VAR_5->vport_cfg_mutex);
   break;
  case 147:
   VAR_11 = FUNC_7(VAR_8, VAR_7);
   if (VAR_11)
    FUNC_0(&VAR_5->pdev->dev,
     "PF fail(%d) to media type for VF\n",
     VAR_11);
   break;
  case 137:
   FUNC_11(VAR_5, VAR_7);
   break;
  case 138:
   FUNC_12(VAR_5);
   break;
  default:
   FUNC_0(&VAR_5->pdev->dev,
    "un-supported mailbox message, code = %d\n",
    VAR_7->msg[0]);
   break;
  }
  VAR_6->desc[VAR_6->next_to_use].flag = 0;
  FUNC_15(VAR_6);
 }


 FUNC_26(&VAR_5->hw, VAR_3, VAR_6->next_to_use);
}
