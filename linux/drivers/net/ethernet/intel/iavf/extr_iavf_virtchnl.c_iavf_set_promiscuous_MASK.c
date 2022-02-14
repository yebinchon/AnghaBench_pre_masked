
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vpi ;
typedef int u8 ;
struct virtchnl_promisc_info {int flags; int vsi_id; } ;
struct iavf_adapter {scalar_t__ current_op; int flags; int aq_required; TYPE_2__* vsi_res; TYPE_1__* pdev; } ;
struct TYPE_4__ {int vsi_id; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct iavf_adapter*,scalar_t__,int *,int) ;

void FUNC_3(struct iavf_adapter *VAR_10, int VAR_11)
{
 struct virtchnl_promisc_info VAR_12;
 int VAR_13;

 if (VAR_10->current_op != VAR_9) {

  FUNC_0(&VAR_10->pdev->dev, "Cannot set promiscuous mode, command %d pending\n",
   VAR_10->current_op);
  return;
 }

 VAR_13 = VAR_1 |
        VAR_0;
 if ((VAR_11 & VAR_13) == VAR_13) {
  VAR_10->flags |= VAR_7;
  VAR_10->aq_required &= ~VAR_6;
  FUNC_1(&VAR_10->pdev->dev, "Entering promiscuous mode\n");
 }

 if (VAR_11 & VAR_0) {
  VAR_10->flags |= VAR_2;
  VAR_10->aq_required &= ~VAR_5;
  FUNC_1(&VAR_10->pdev->dev, "Entering multicast promiscuous mode\n");
 }

 if (!VAR_11) {
  VAR_10->flags &= ~(VAR_7 |
        VAR_2);
  VAR_10->aq_required &= ~(VAR_4 |
       VAR_3);
  FUNC_1(&VAR_10->pdev->dev, "Leaving promiscuous mode\n");
 }

 VAR_10->current_op = VAR_8;
 VAR_12.vsi_id = VAR_10->vsi_res->vsi_id;
 VAR_12.flags = VAR_11;
 FUNC_2(VAR_10, VAR_8,
    (u8 *)&VAR_12, sizeof(VAR_12));
}
