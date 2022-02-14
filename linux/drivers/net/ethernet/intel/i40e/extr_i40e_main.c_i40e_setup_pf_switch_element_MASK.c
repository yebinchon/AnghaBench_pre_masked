
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_pf {int mac_seid; int lan_veb; int pf_seid; int main_vsi_seid; TYPE_2__* pdev; TYPE_1__** veb; } ;
struct i40e_aqc_switch_config_element_resp {int element_type; int seid; int uplink_seid; int downlink_seid; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int seid; int uplink_seid; int veb_idx; struct i40e_pf* pf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int,...) ;
 int FUNC_1 (struct i40e_pf*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct i40e_pf *VAR_2,
    struct i40e_aqc_switch_config_element_resp *VAR_3,
    u16 VAR_4, bool VAR_5)
{
 u16 VAR_6 = FUNC_2(VAR_3->downlink_seid);
 u16 VAR_7 = FUNC_2(VAR_3->uplink_seid);
 u8 VAR_8 = VAR_3->element_type;
 u16 VAR_9 = FUNC_2(VAR_3->seid);

 if (VAR_5)
  FUNC_0(&VAR_2->pdev->dev,
    "type=%d seid=%d uplink=%d downlink=%d\n",
    VAR_8, VAR_9, VAR_7, VAR_6);

 switch (VAR_8) {
 case 134:
  VAR_2->mac_seid = VAR_9;
  break;
 case 130:

  if (VAR_7 != VAR_2->mac_seid)
   break;
  if (VAR_2->lan_veb >= VAR_0) {
   int VAR_10;


   for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
    if (VAR_2->veb[VAR_10] && (VAR_2->veb[VAR_10]->seid == VAR_9)) {
     VAR_2->lan_veb = VAR_10;
     break;
    }
   }
   if (VAR_2->lan_veb >= VAR_0) {
    VAR_10 = FUNC_1(VAR_2);
    if (VAR_10 < 0)
     break;
    VAR_2->lan_veb = VAR_10;
   }
  }
  if (VAR_2->lan_veb >= VAR_0)
   break;

  VAR_2->veb[VAR_2->lan_veb]->seid = VAR_9;
  VAR_2->veb[VAR_2->lan_veb]->uplink_seid = VAR_2->mac_seid;
  VAR_2->veb[VAR_2->lan_veb]->pf = VAR_2;
  VAR_2->veb[VAR_2->lan_veb]->veb_idx = VAR_1;
  break;
 case 128:
  if (VAR_4 != 1)
   break;



  VAR_2->mac_seid = VAR_7;
  VAR_2->pf_seid = VAR_6;
  VAR_2->main_vsi_seid = VAR_9;
  if (VAR_5)
   FUNC_0(&VAR_2->pdev->dev,
     "pf_seid=%d main_vsi_seid=%d\n",
     VAR_2->pf_seid, VAR_2->main_vsi_seid);
  break;
 case 131:
 case 129:
 case 135:
 case 136:
 case 132:
 case 133:

  break;
 default:
  FUNC_0(&VAR_2->pdev->dev, "unknown element type=%d seid=%d\n",
    VAR_8, VAR_9);
  break;
 }
}
