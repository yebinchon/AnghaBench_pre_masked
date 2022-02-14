
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_vsi {struct ice_port_info* port_info; int state; } ;
struct TYPE_3__ {int link_info; } ;
struct TYPE_4__ {TYPE_1__ link_info; } ;
struct ice_port_info {TYPE_2__ phy; } ;
struct ice_pf {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ice_vsi*,int) ;
 struct ice_vsi* FUNC_2 (struct ice_pf*) ;
 int FUNC_3 (struct ice_port_info*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ice_pf *VAR_3)
{
 struct ice_port_info *VAR_4;
 struct ice_vsi *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return;




 if (!FUNC_4(VAR_1, VAR_3->flags) ||
     FUNC_4(VAR_2, VAR_5->state))
  return;


 VAR_4 = VAR_5->port_info;
 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return;

 if (VAR_4->phy.link_info.link_info & VAR_0) {
  VAR_6 = FUNC_1(VAR_5, 1);
  if (VAR_6)
   return;
  FUNC_0(VAR_1, VAR_3->flags);




 }
}
