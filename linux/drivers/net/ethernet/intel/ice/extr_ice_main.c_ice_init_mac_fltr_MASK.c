
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ice_vsi {TYPE_4__* netdev; TYPE_3__* port_info; } ;
struct ice_pf {TYPE_1__* pdev; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_9__ {scalar_t__ reg_state; } ;
struct TYPE_7__ {int * perm_addr; } ;
struct TYPE_8__ {TYPE_2__ mac; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 struct ice_vsi* FUNC_3 (struct ice_pf*) ;
 int FUNC_4 (struct ice_vsi*,int *,int) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(struct ice_pf *VAR_4)
{
 enum ice_status VAR_5;
 u8 VAR_6[VAR_2];
 struct ice_vsi *VAR_7;

 VAR_7 = FUNC_3(VAR_4);
 if (!VAR_7)
  return -VAR_0;






 VAR_5 = FUNC_4(VAR_7, VAR_7->port_info->mac.perm_addr, 1);
 if (VAR_5)
  goto unregister;




 FUNC_1(VAR_6);
 VAR_5 = FUNC_4(VAR_7, VAR_6, 1);
 if (VAR_5)
  goto unregister;

 return 0;
unregister:



 if (VAR_5 && VAR_7->netdev->reg_state == VAR_3) {
  FUNC_0(&VAR_4->pdev->dev,
   "Could not add MAC filters error %d. Unregistering device\n",
   VAR_5);
  FUNC_5(VAR_7->netdev);
  FUNC_2(VAR_7->netdev);
  VAR_7->netdev = ((void*)0);
 }

 return -VAR_1;
}
