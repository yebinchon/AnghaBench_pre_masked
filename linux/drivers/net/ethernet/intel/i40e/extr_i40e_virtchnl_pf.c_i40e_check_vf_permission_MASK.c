
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_ether_addr_list {int num_elements; TYPE_1__* list; } ;
struct TYPE_5__ {int addr; } ;
struct i40e_vf {scalar_t__ num_mac; TYPE_2__ default_lan_addr; scalar_t__ pf_set_mac; int vf_caps; struct i40e_pf* pf; } ;
struct i40e_pf {TYPE_3__* pdev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int * addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static inline int FUNC_6(struct i40e_vf *VAR_4,
        struct virtchnl_ether_addr_list *VAR_5)
{
 struct i40e_pf *VAR_6 = VAR_4->pf;
 int VAR_7;





 if (!FUNC_5(VAR_3, &VAR_4->vf_caps) &&
     (VAR_4->num_mac + VAR_5->num_elements) > VAR_2) {
  FUNC_0(&VAR_6->pdev->dev,
   "Cannot add more MAC addresses, VF is not trusted, switch the VF to trusted to add more functionality\n");
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->num_elements; VAR_7++) {
  u8 *VAR_8 = VAR_5->list[VAR_7].addr;

  if (FUNC_2(VAR_8) ||
      FUNC_4(VAR_8)) {
   FUNC_0(&VAR_6->pdev->dev, "invalid VF MAC addr %pM\n",
    VAR_8);
   return VAR_1;
  }
  if (!FUNC_5(VAR_3, &VAR_4->vf_caps) &&
      !FUNC_3(VAR_8) && VAR_4->pf_set_mac &&
      !FUNC_1(VAR_8, VAR_4->default_lan_addr.addr)) {
   FUNC_0(&VAR_6->pdev->dev,
    "VF attempting to override administratively set MAC address, bring down and up the VF interface to resume normal operation\n");
   return -VAR_0;
  }
 }

 return 0;
}
