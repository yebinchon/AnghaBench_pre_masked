
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int len; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_8__ {TYPE_2__ asq; TYPE_1__ arq; } ;
struct i40e_hw {int debug_mask; TYPE_3__ aq; } ;
struct i40e_pf {scalar_t__ adminq_work_limit; int state; TYPE_5__* pdev; struct i40e_hw hw; int arq_overflows; } ;
struct TYPE_9__ {int cookie_low; int cookie_high; int retval; int opcode; } ;
struct i40e_arq_event_info {int msg_buf; int msg_len; TYPE_4__ desc; int buf_len; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,struct i40e_arq_event_info*,int*) ;
 int FUNC_4 (struct i40e_hw*,int ,char*,int) ;
 int FUNC_5 (struct i40e_hw*) ;
 int FUNC_6 (struct i40e_pf*,struct i40e_arq_event_info*) ;
 int FUNC_7 (struct i40e_pf*,struct i40e_arq_event_info*) ;
 scalar_t__ FUNC_8 (struct i40e_pf*,struct i40e_arq_event_info*) ;
 scalar_t__ FUNC_9 (struct i40e_pf*,int,int ,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct i40e_hw*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void FUNC_19(struct i40e_pf *VAR_15)
{
 struct i40e_arq_event_info VAR_16;
 struct i40e_hw *VAR_17 = &VAR_15->hw;
 u16 VAR_18, VAR_19 = 0;
 i40e_status VAR_20;
 u16 VAR_21;
 u32 VAR_22;
 u32 VAR_23;


 if (FUNC_17(VAR_14, VAR_15->state))
  return;


 VAR_23 = FUNC_14(&VAR_15->hw, VAR_15->hw.aq.arq.len);
 VAR_22 = VAR_23;
 if (VAR_23 & VAR_9) {
  if (VAR_17->debug_mask & VAR_1)
   FUNC_2(&VAR_15->pdev->dev, "ARQ VF Error detected\n");
  VAR_23 &= ~VAR_9;
 }
 if (VAR_23 & VAR_8) {
  if (VAR_17->debug_mask & VAR_1)
   FUNC_2(&VAR_15->pdev->dev, "ARQ Overflow Error detected\n");
  VAR_23 &= ~VAR_8;
  VAR_15->arq_overflows++;
 }
 if (VAR_23 & VAR_7) {
  if (VAR_17->debug_mask & VAR_1)
   FUNC_2(&VAR_15->pdev->dev, "ARQ Critical Error detected\n");
  VAR_23 &= ~VAR_7;
 }
 if (VAR_22 != VAR_23)
  FUNC_18(&VAR_15->hw, VAR_15->hw.aq.arq.len, VAR_23);

 VAR_23 = FUNC_14(&VAR_15->hw, VAR_15->hw.aq.asq.len);
 VAR_22 = VAR_23;
 if (VAR_23 & VAR_12) {
  if (VAR_15->hw.debug_mask & VAR_1)
   FUNC_2(&VAR_15->pdev->dev, "ASQ VF Error detected\n");
  VAR_23 &= ~VAR_12;
 }
 if (VAR_23 & VAR_11) {
  if (VAR_15->hw.debug_mask & VAR_1)
   FUNC_2(&VAR_15->pdev->dev, "ASQ Overflow Error detected\n");
  VAR_23 &= ~VAR_11;
 }
 if (VAR_23 & VAR_10) {
  if (VAR_15->hw.debug_mask & VAR_1)
   FUNC_2(&VAR_15->pdev->dev, "ASQ Critical Error detected\n");
  VAR_23 &= ~VAR_10;
 }
 if (VAR_22 != VAR_23)
  FUNC_18(&VAR_15->hw, VAR_15->hw.aq.asq.len, VAR_23);

 VAR_16.buf_len = VAR_4;
 VAR_16.msg_buf = FUNC_11(VAR_16.buf_len, VAR_0);
 if (!VAR_16.msg_buf)
  return;

 do {
  VAR_20 = FUNC_3(VAR_17, &VAR_16, &VAR_18);
  if (VAR_20 == VAR_3)
   break;
  else if (VAR_20) {
   FUNC_2(&VAR_15->pdev->dev, "ARQ event error %d\n", VAR_20);
   break;
  }

  VAR_21 = FUNC_12(VAR_16.desc.opcode);
  switch (VAR_21) {

  case 134:
   FUNC_7(VAR_15, &VAR_16);
   break;
  case 128:
   VAR_20 = FUNC_9(VAR_15,
     FUNC_12(VAR_16.desc.retval),
     FUNC_13(VAR_16.desc.cookie_high),
     FUNC_13(VAR_16.desc.cookie_low),
     VAR_16.msg_buf,
     VAR_16.msg_len);
   break;
  case 133:
   FUNC_1(&VAR_15->pdev->dev, "ARQ: Update LLDP MIB event received\n");





   break;
  case 135:
   FUNC_1(&VAR_15->pdev->dev, "ARQ LAN queue overflow event received\n");
   FUNC_6(VAR_15, &VAR_16);
   break;
  case 129:
   FUNC_2(&VAR_15->pdev->dev, "ARQ: Msg from other pf\n");
   break;
  case 132:
  case 131:
  case 130:
   FUNC_4(&VAR_15->hw, VAR_2,
       "ARQ NVM operation 0x%04x completed\n",
       VAR_21);
   break;
  default:
   FUNC_2(&VAR_15->pdev->dev,
     "ARQ: Unknown event 0x%04x ignored\n",
     VAR_21);
   break;
  }
 } while (VAR_19++ < VAR_15->adminq_work_limit);

 if (VAR_19 < VAR_15->adminq_work_limit)
  FUNC_0(VAR_13, VAR_15->state);


 VAR_23 = FUNC_14(VAR_17, VAR_5);
 VAR_23 |= VAR_6;
 FUNC_18(VAR_17, VAR_5, VAR_23);
 FUNC_5(VAR_17);

 FUNC_10(VAR_16.msg_buf);
}
