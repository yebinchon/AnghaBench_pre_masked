
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ice_vsi {TYPE_2__* back; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_4__ {TYPE_1__* pdev; int hw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct ice_vsi*,int *,int const*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;

enum ice_status
FUNC_5(struct ice_vsi *VAR_2, const u8 *VAR_3, bool VAR_4)
{
 FUNC_0(VAR_1);
 enum ice_status VAR_5;


 if (FUNC_2(VAR_2, &VAR_1, VAR_3)) {
  VAR_5 = VAR_0;
  goto cfg_mac_fltr_exit;
 }

 if (VAR_4)
  VAR_5 = FUNC_1(&VAR_2->back->hw, &VAR_1);
 else
  VAR_5 = FUNC_4(&VAR_2->back->hw, &VAR_1);

cfg_mac_fltr_exit:
 FUNC_3(&VAR_2->back->pdev->dev, &VAR_1);
 return VAR_5;
}
