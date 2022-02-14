
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi {TYPE_1__* netdev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_vsi*) ;
 int FUNC_1 (struct ice_vsi*,int) ;

__attribute__((used)) static int FUNC_2(struct ice_vsi *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->netdev->features & VAR_0)
  VAR_3 = FUNC_1(VAR_2, 1);
 if (VAR_2->netdev->features & VAR_1)
  VAR_3 = FUNC_0(VAR_2);

 return VAR_3;
}
