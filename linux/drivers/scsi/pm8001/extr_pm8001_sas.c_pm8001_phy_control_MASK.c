
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct sas_phy_linkrates {int maximum_linkrate; int minimum_linkrate; } ;
struct sas_phy {void* phy_reset_problem_count; void* loss_of_dword_sync_count; void* running_disparity_error_count; void* invalid_dword_count; } ;
struct sas_ha_struct {int (* notify_phy_event ) (int *,int ) ;} ;
struct pm8001_phy {int phy_attached; int sas_phy; int phy_state; int maximum_linkrate; int minimum_linkrate; int * enable_completion; } ;
struct pm8001_hba_info {int lock; int chip_id; TYPE_2__* io_mem; struct sas_ha_struct* sas; struct pm8001_phy* phy; } ;
struct asd_sas_phy {int id; struct sas_phy* phy; TYPE_1__* ha; } ;
typedef enum phy_func { ____Placeholder_phy_func } phy_func ;
struct TYPE_6__ {int (* phy_stop_req ) (struct pm8001_hba_info*,int) ;int (* phy_ctl_req ) (struct pm8001_hba_info*,int,int ) ;int (* phy_start_req ) (struct pm8001_hba_info*,int) ;} ;
struct TYPE_5__ {scalar_t__ memvirtaddr; } ;
struct TYPE_4__ {struct pm8001_hba_info* lldd_ha; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pm8001_hba_info*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct pm8001_hba_info*,int) ;
 int FUNC_7 (struct pm8001_hba_info*,int) ;
 int FUNC_8 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_9 (struct pm8001_hba_info*,int) ;
 int FUNC_10 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_11 (struct pm8001_hba_info*,int) ;
 int FUNC_12 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_13 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct asd_sas_phy *VAR_11, enum phy_func VAR_12,
 void *VAR_13)
{
 int VAR_14 = 0, VAR_15 = VAR_11->id;
 struct pm8001_hba_info *VAR_16 = ((void*)0);
 struct sas_phy_linkrates *VAR_17;
 struct sas_ha_struct *VAR_18;
 struct pm8001_phy *VAR_19;
 FUNC_0(VAR_10);
 unsigned long VAR_20;
 VAR_16 = VAR_11->ha->lldd_ha;
 VAR_19 = &VAR_16->phy[VAR_15];
 VAR_16->phy[VAR_15].enable_completion = &VAR_10;
 switch (VAR_12) {
 case 128:
  VAR_17 = VAR_13;
  if (VAR_17->minimum_linkrate) {
   VAR_16->phy[VAR_15].minimum_linkrate =
    VAR_17->minimum_linkrate;
  }
  if (VAR_17->maximum_linkrate) {
   VAR_16->phy[VAR_15].maximum_linkrate =
    VAR_17->maximum_linkrate;
  }
  if (VAR_16->phy[VAR_15].phy_state == VAR_4) {
   VAR_8->phy_start_req(VAR_16, VAR_15);
   FUNC_16(&VAR_10);
  }
  VAR_8->phy_ctl_req(VAR_16, VAR_15,
           VAR_5);
  break;
 case 131:
  if (VAR_16->phy[VAR_15].phy_state == VAR_4) {
   VAR_8->phy_start_req(VAR_16, VAR_15);
   FUNC_16(&VAR_10);
  }
  VAR_8->phy_ctl_req(VAR_16, VAR_15,
           VAR_3);
  break;
 case 130:
  if (VAR_16->phy[VAR_15].phy_state == VAR_4) {
   VAR_8->phy_start_req(VAR_16, VAR_15);
   FUNC_16(&VAR_10);
  }
  VAR_8->phy_ctl_req(VAR_16, VAR_15,
           VAR_5);
  break;
 case 129:
  VAR_8->phy_ctl_req(VAR_16, VAR_15,
           VAR_5);
  break;
 case 133:
  if (VAR_16->chip_id != VAR_9) {
   if (VAR_16->phy[VAR_15].phy_state ==
    VAR_7) {
    VAR_18 = VAR_16->sas;
    FUNC_3(&VAR_19->sas_phy);
    VAR_18->notify_phy_event(&VAR_19->sas_phy,
     VAR_2);
    VAR_19->phy_attached = 0;
   }
  } else {
   if (VAR_16->phy[VAR_15].phy_state ==
    VAR_6) {
    VAR_18 = VAR_16->sas;
    FUNC_3(&VAR_19->sas_phy);
    VAR_18->notify_phy_event(&VAR_19->sas_phy,
     VAR_2);
    VAR_19->phy_attached = 0;
   }
  }
  VAR_8->phy_stop_req(VAR_16, VAR_15);
  break;
 case 132:
  FUNC_4(&VAR_16->lock, VAR_20);
  if (VAR_16->chip_id == VAR_9) {
   if (-1 == FUNC_2(VAR_16,
     (VAR_15 < 4) ? 0x30000 : 0x40000)) {
    FUNC_5(&VAR_16->lock, VAR_20);
    return -VAR_0;
   }
  }
  {
   struct sas_phy *VAR_21 = VAR_11->phy;
   uint32_t *VAR_22 = (uint32_t *)(((char *)
    VAR_16->io_mem[2].memvirtaddr)
    + 0x1034 + (0x4000 * (VAR_15 & 3)));

   VAR_21->invalid_dword_count = VAR_22[0];
   VAR_21->running_disparity_error_count = VAR_22[1];
   VAR_21->loss_of_dword_sync_count = VAR_22[3];
   VAR_21->phy_reset_problem_count = VAR_22[4];
  }
  if (VAR_16->chip_id == VAR_9)
   FUNC_2(VAR_16, 0);
  FUNC_5(&VAR_16->lock, VAR_20);
  return 0;
 default:
  VAR_14 = -VAR_1;
 }
 FUNC_1(300);
 return VAR_14;
}
