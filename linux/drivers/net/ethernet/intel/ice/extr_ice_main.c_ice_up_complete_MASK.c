
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ice_vsi {scalar_t__ netdev; TYPE_3__* port_info; int state; struct ice_pf* back; } ;
struct ice_pf {int dummy; } ;
struct TYPE_4__ {int link_info; } ;
struct TYPE_5__ {TYPE_1__ link_info; } ;
struct TYPE_6__ {TYPE_2__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ice_vsi*) ;
 int FUNC_2 (struct ice_vsi*,int) ;
 int FUNC_3 (struct ice_pf*) ;
 int FUNC_4 (struct ice_vsi*) ;
 int FUNC_5 (struct ice_vsi*) ;
 int FUNC_6 (struct ice_vsi*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct ice_vsi *VAR_2)
{
 struct ice_pf *VAR_3 = VAR_2->back;
 int VAR_4;

 FUNC_4(VAR_2);





 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_1, VAR_2->state);
 FUNC_1(VAR_2);
 FUNC_5(VAR_2);

 if (VAR_2->port_info &&
     (VAR_2->port_info->phy.link_info.link_info & VAR_0) &&
     VAR_2->netdev) {
  FUNC_2(VAR_2, 1);
  FUNC_8(VAR_2->netdev);
  FUNC_7(VAR_2->netdev);
 }

 FUNC_3(VAR_3);

 return 0;
}
