
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_pf_event {int severity; int event; int member_0; } ;
struct ice_vf {int vf_id; int link_up; scalar_t__ link_forced; int num_qs_ena; struct ice_pf* pf; } ;
struct ice_hw {TYPE_2__* port_info; } ;
struct ice_pf {struct ice_hw hw; } ;
struct ice_link_status {int link_info; int link_speed; } ;
typedef int pfe ;
struct TYPE_3__ {struct ice_link_status link_info; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ice_hw*,int ,int ,int ,int *,int,int *) ;
 int FUNC_1 (struct ice_vf*,struct virtchnl_pf_event*,int ,int) ;
 int FUNC_2 (struct ice_vf*,struct virtchnl_pf_event*,int ) ;

__attribute__((used)) static void FUNC_3(struct ice_vf *VAR_6)
{
 struct virtchnl_pf_event VAR_7 = { 0 };
 struct ice_link_status *VAR_8;
 struct ice_pf *VAR_9 = VAR_6->pf;
 struct ice_hw *VAR_10;

 VAR_10 = &VAR_9->hw;
 VAR_8 = &VAR_10->port_info->phy.link_info;

 VAR_7.event = VAR_3;
 VAR_7.severity = VAR_2;


 if (!VAR_6->num_qs_ena)
  FUNC_1(VAR_6, &VAR_7, VAR_0, 0);
 else if (VAR_6->link_forced)
  FUNC_2(VAR_6, &VAR_7, VAR_6->link_up);
 else
  FUNC_1(VAR_6, &VAR_7, VAR_8->link_speed, VAR_8->link_info &
     VAR_1);

 FUNC_0(VAR_10, VAR_6->vf_id, VAR_4,
         VAR_5, (u8 *)&VAR_7,
         sizeof(VAR_7), ((void*)0));
}
