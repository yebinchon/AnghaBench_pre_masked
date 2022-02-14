
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int opcode; } ;
struct ice_rq_event_info {int msg_buf; TYPE_4__ desc; int buf_len; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_5__ {int len; } ;
struct ice_ctl_q_info {int rq_buf_size; TYPE_2__ sq; TYPE_1__ rq; } ;
struct ice_hw {struct ice_ctl_q_info mailboxq; struct ice_ctl_q_info adminq; } ;
struct ice_pf {TYPE_3__* pdev; int state; struct ice_hw hw; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_ctl_q { ____Placeholder_ice_ctl_q } ice_ctl_q ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,char const*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;



 int FUNC_5 (struct ice_hw*,struct ice_ctl_q_info*,struct ice_rq_event_info*,int*) ;
 int FUNC_6 (struct ice_pf*,struct ice_rq_event_info*) ;
 int FUNC_7 (struct ice_pf*,struct ice_rq_event_info*) ;

 int FUNC_8 (struct ice_hw*,TYPE_4__*,int ) ;
 int FUNC_9 (struct ice_pf*,struct ice_rq_event_info*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ice_hw*,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct ice_hw*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct ice_pf *VAR_10, enum ice_ctl_q VAR_11)
{
 struct ice_rq_event_info VAR_12;
 struct ice_hw *VAR_13 = &VAR_10->hw;
 struct ice_ctl_q_info *VAR_14;
 u16 VAR_15, VAR_16 = 0;
 const char *VAR_17;
 u32 VAR_18, VAR_19;


 if (FUNC_12(VAR_9, VAR_10->state))
  return 0;

 switch (VAR_11) {
 case 133:
  VAR_14 = &VAR_13->adminq;
  VAR_17 = "Admin";
  break;
 case 132:
  VAR_14 = &VAR_13->mailboxq;
  VAR_17 = "Mailbox";
  break;
 default:
  FUNC_2(&VAR_10->pdev->dev, "Unknown control queue type 0x%x\n",
    VAR_11);
  return 0;
 }




 VAR_19 = FUNC_11(VAR_13, VAR_14->rq.len);
 if (VAR_19 & (VAR_5 | VAR_4 |
     VAR_3)) {
  VAR_18 = VAR_19;
  if (VAR_19 & VAR_5)
   FUNC_0(&VAR_10->pdev->dev,
    "%s Receive Queue VF Error detected\n", VAR_17);
  if (VAR_19 & VAR_4) {
   FUNC_0(&VAR_10->pdev->dev,
    "%s Receive Queue Overflow Error detected\n",
    VAR_17);
  }
  if (VAR_19 & VAR_3)
   FUNC_0(&VAR_10->pdev->dev,
    "%s Receive Queue Critical Error detected\n",
    VAR_17);
  VAR_19 &= ~(VAR_5 | VAR_4 |
    VAR_3);
  if (VAR_18 != VAR_19)
   FUNC_13(VAR_13, VAR_14->rq.len, VAR_19);
 }

 VAR_19 = FUNC_11(VAR_13, VAR_14->sq.len);
 if (VAR_19 & (VAR_8 | VAR_7 |
     VAR_6)) {
  VAR_18 = VAR_19;
  if (VAR_19 & VAR_8)
   FUNC_0(&VAR_10->pdev->dev,
    "%s Send Queue VF Error detected\n", VAR_17);
  if (VAR_19 & VAR_7) {
   FUNC_0(&VAR_10->pdev->dev,
    "%s Send Queue Overflow Error detected\n",
    VAR_17);
  }
  if (VAR_19 & VAR_6)
   FUNC_0(&VAR_10->pdev->dev,
    "%s Send Queue Critical Error detected\n",
    VAR_17);
  VAR_19 &= ~(VAR_8 | VAR_7 |
    VAR_6);
  if (VAR_18 != VAR_19)
   FUNC_13(VAR_13, VAR_14->sq.len, VAR_19);
 }

 VAR_12.buf_len = VAR_14->rq_buf_size;
 VAR_12.msg_buf = FUNC_4(&VAR_10->pdev->dev, VAR_12.buf_len,
         VAR_0);
 if (!VAR_12.msg_buf)
  return 0;

 do {
  enum ice_status VAR_20;
  u16 VAR_21;

  VAR_20 = FUNC_5(VAR_13, VAR_14, &VAR_12, &VAR_15);
  if (VAR_20 == VAR_2)
   break;
  if (VAR_20) {
   FUNC_1(&VAR_10->pdev->dev,
    "%s Receive Queue event error %d\n", VAR_17,
    VAR_20);
   break;
  }

  VAR_21 = FUNC_10(VAR_12.desc.opcode);

  switch (VAR_21) {
  case 130:
   if (FUNC_7(VAR_10, &VAR_12))
    FUNC_1(&VAR_10->pdev->dev,
     "Could not handle link event\n");
   break;
  case 128:
   FUNC_9(VAR_10, &VAR_12);
   break;
  case 131:
   FUNC_8(VAR_13, &VAR_12.desc, VAR_12.msg_buf);
   break;
  case 129:
   FUNC_6(VAR_10, &VAR_12);
   break;
  default:
   FUNC_0(&VAR_10->pdev->dev,
    "%s Receive Queue unknown event 0x%04x ignored\n",
    VAR_17, VAR_21);
   break;
  }
 } while (VAR_15 && (VAR_16++ < VAR_1));

 FUNC_3(&VAR_10->pdev->dev, VAR_12.msg_buf);

 return VAR_15 && (VAR_16 == VAR_1);
}
