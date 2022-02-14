
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_pf {int flags; TYPE_3__* pdev; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
struct i40e_arq_event_info {TYPE_2__ desc; } ;
struct i40e_aqc_get_link_status {scalar_t__ phy_type; int link_info; int an_info; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i40e_pf*) ;

__attribute__((used)) static void FUNC_2(struct i40e_pf *VAR_5,
       struct i40e_arq_event_info *VAR_6)
{
 struct i40e_aqc_get_link_status *VAR_7 =
  (struct i40e_aqc_get_link_status *)&VAR_6->desc.params.raw;







 FUNC_1(VAR_5);


 if (VAR_7->phy_type == VAR_4) {
  FUNC_0(&VAR_5->pdev->dev,
   "Rx/Tx is disabled on this device because the module does not meet thermal requirements.\n");
  FUNC_0(&VAR_5->pdev->dev,
   "Refer to the Intel(R) Ethernet Adapters and Devices User Guide for a list of supported modules.\n");
 } else {



  if ((VAR_7->link_info & VAR_1) &&
      (!(VAR_7->an_info & VAR_2)) &&
      (!(VAR_7->link_info & VAR_0)) &&
      (!(VAR_5->flags & VAR_3))) {
   FUNC_0(&VAR_5->pdev->dev,
    "Rx/Tx is disabled on this device because an unsupported SFP module type was detected.\n");
   FUNC_0(&VAR_5->pdev->dev,
    "Refer to the Intel(R) Ethernet Adapters and Devices User Guide for a list of supported modules.\n");
  }
 }
}
