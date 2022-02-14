
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_vsi {scalar_t__ type; } ;
struct i40e_pf {size_t lan_vsi; TYPE_2__* pdev; TYPE_1__** vsi; } ;
struct i40e_channel {scalar_t__ initialized; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int uplink_seid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct i40e_pf*,struct i40e_vsi*,struct i40e_channel*,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct i40e_pf *VAR_2, struct i40e_vsi *VAR_3,
          struct i40e_channel *VAR_4)
{
 u8 VAR_5;
 u16 VAR_6;
 int VAR_7;

 if (VAR_3->type == VAR_0) {
  VAR_5 = VAR_1;
 } else {
  FUNC_0(&VAR_2->pdev->dev, "unsupported parent vsi type(%d)\n",
   VAR_3->type);
  return 0;
 }


 VAR_6 = VAR_2->vsi[VAR_2->lan_vsi]->uplink_seid;


 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6, VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_2->pdev->dev, "failed to setup hw_channel\n");
  return 0;
 }

 return VAR_4->initialized ? 1 : 0;
}
