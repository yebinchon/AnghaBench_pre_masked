
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {scalar_t__ mbps; } ;
struct aq_nic_s {int flags; int ndev; TYPE_3__ link_status; TYPE_4__* aq_hw; TYPE_2__* aq_hw_ops; TYPE_1__* aq_fw_ops; } ;
struct TYPE_10__ {TYPE_3__ aq_link_status; } ;
struct TYPE_8__ {int (* hw_set_fc ) (TYPE_4__*,int ,int ) ;} ;
struct TYPE_7__ {int (* update_link_status ) (TYPE_4__*) ;int (* get_flow_control ) (TYPE_4__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct aq_nic_s *VAR_3)
{
 int VAR_4 = VAR_3->aq_fw_ops->update_link_status(VAR_3->aq_hw);
 u32 VAR_5 = 0;

 if (VAR_4)
  return VAR_4;

 if (VAR_3->link_status.mbps != VAR_3->aq_hw->aq_link_status.mbps) {
  FUNC_8("%s: link change old %d new %d\n",
   VAR_0, VAR_3->link_status.mbps,
   VAR_3->aq_hw->aq_link_status.mbps);
  FUNC_0(VAR_3);





  if (VAR_3->aq_fw_ops->get_flow_control)
   VAR_3->aq_fw_ops->get_flow_control(VAR_3->aq_hw, &VAR_5);
  if (VAR_3->aq_hw_ops->hw_set_fc)
   VAR_3->aq_hw_ops->hw_set_fc(VAR_3->aq_hw, VAR_5, 0);
 }

 VAR_3->link_status = VAR_3->aq_hw->aq_link_status;
 if (!FUNC_4(VAR_3->ndev) && VAR_3->link_status.mbps) {
  FUNC_2(&VAR_3->flags,
     VAR_1);
  FUNC_1(&VAR_3->flags,
       VAR_2);
  FUNC_5(VAR_3->ndev);
  FUNC_7(VAR_3->ndev);
 }
 if (FUNC_4(VAR_3->ndev) && !VAR_3->link_status.mbps) {
  FUNC_3(VAR_3->ndev);
  FUNC_6(VAR_3->ndev);
  FUNC_2(&VAR_3->flags, VAR_2);
 }
 return 0;
}
