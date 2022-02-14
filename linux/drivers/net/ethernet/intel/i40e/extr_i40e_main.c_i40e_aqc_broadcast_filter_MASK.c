
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {TYPE_2__* back; int state; int seid; } ;
struct i40e_mac_filter {scalar_t__ state; int vlan; } ;
struct TYPE_6__ {int asq_last_status; } ;
struct i40e_hw {TYPE_3__ aq; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_5__ {TYPE_1__* pdev; struct i40e_hw hw; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,char const*) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ,int,int ,int *) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int ,int,int *) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static i40e_status
FUNC_5(struct i40e_vsi *VAR_3, const char *VAR_4,
     struct i40e_mac_filter *VAR_5)
{
 bool VAR_6 = VAR_5->state == VAR_0;
 struct i40e_hw *VAR_7 = &VAR_3->back->hw;
 i40e_status VAR_8;

 if (VAR_5->vlan == VAR_1) {
  VAR_8 = FUNC_2(VAR_7,
         VAR_3->seid,
         VAR_6,
         ((void*)0));
 } else {
  VAR_8 = FUNC_1(VAR_7,
           VAR_3->seid,
           VAR_6,
           VAR_5->vlan,
           ((void*)0));
 }

 if (VAR_8) {
  FUNC_4(VAR_2, VAR_3->state);
  FUNC_0(&VAR_3->back->pdev->dev,
    "Error %s, forcing overflow promiscuous on %s\n",
    FUNC_3(VAR_7, VAR_7->aq.asq_last_status),
    VAR_4);
 }

 return VAR_8;
}
