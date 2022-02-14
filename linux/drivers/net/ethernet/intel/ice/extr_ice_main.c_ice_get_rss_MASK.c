
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ice_vsi {int rss_lut_type; int idx; struct ice_pf* back; } ;
struct TYPE_4__ {int rq_last_status; } ;
struct ice_hw {TYPE_2__ adminq; } ;
struct ice_pf {TYPE_1__* pdev; struct ice_hw hw; } ;
struct ice_aqc_get_set_rss_keys {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (struct ice_hw*,int ,struct ice_aqc_get_set_rss_keys*) ;
 int FUNC_2 (struct ice_hw*,int ,int ,int *,int ) ;

int FUNC_3(struct ice_vsi *VAR_1, u8 *VAR_2, u8 *VAR_3, u16 VAR_4)
{
 struct ice_pf *VAR_5 = VAR_1->back;
 struct ice_hw *VAR_6 = &VAR_5->hw;
 enum ice_status VAR_7;

 if (VAR_2) {
  struct ice_aqc_get_set_rss_keys *VAR_8 =
      (struct ice_aqc_get_set_rss_keys *)VAR_2;

  VAR_7 = FUNC_1(VAR_6, VAR_1->idx, VAR_8);
  if (VAR_7) {
   FUNC_0(&VAR_5->pdev->dev,
    "Cannot get RSS key, err %d aq_err %d\n",
    VAR_7, VAR_6->adminq.rq_last_status);
   return -VAR_0;
  }
 }

 if (VAR_3) {
  VAR_7 = FUNC_2(VAR_6, VAR_1->idx, VAR_1->rss_lut_type,
         VAR_3, VAR_4);
  if (VAR_7) {
   FUNC_0(&VAR_5->pdev->dev,
    "Cannot get RSS lut, err %d aq_err %d\n",
    VAR_7, VAR_6->adminq.rq_last_status);
   return -VAR_0;
  }
 }

 return 0;
}
