
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int link_status; int link_speed; } ;
struct TYPE_8__ {TYPE_3__ link_event; } ;
struct virtchnl_pf_event {TYPE_4__ event_data; int severity; int event; } ;
struct i40e_vf {int vf_id; int link_up; scalar_t__ link_forced; int queues_enabled; struct i40e_pf* pf; } ;
struct TYPE_6__ {scalar_t__ vf_base_id; } ;
struct i40e_link_status {int link_info; int link_speed; } ;
struct TYPE_5__ {struct i40e_link_status link_info; } ;
struct i40e_hw {TYPE_2__ func_caps; TYPE_1__ phy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
typedef int pfe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i40e_hw*,int,int ,int ,int *,int,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct i40e_vf *VAR_5)
{
 struct virtchnl_pf_event VAR_6;
 struct i40e_pf *VAR_7 = VAR_5->pf;
 struct i40e_hw *VAR_8 = &VAR_7->hw;
 struct i40e_link_status *VAR_9 = &VAR_7->hw.phy.link_info;
 int VAR_10 = VAR_5->vf_id + (int)VAR_8->func_caps.vf_base_id;

 VAR_6.event = VAR_2;
 VAR_6.severity = VAR_1;


 if (!VAR_5->queues_enabled) {
  VAR_6.event_data.link_event.link_status = 0;
  VAR_6.event_data.link_event.link_speed = 0;
 } else if (VAR_5->link_forced) {
  VAR_6.event_data.link_event.link_status = VAR_5->link_up;
  VAR_6.event_data.link_event.link_speed =
   (VAR_5->link_up ? VAR_3 : 0);
 } else {
  VAR_6.event_data.link_event.link_status =
   VAR_9->link_info & VAR_0;
  VAR_6.event_data.link_event.link_speed =
   FUNC_1(VAR_9->link_speed);
 }

 FUNC_0(VAR_8, VAR_10, VAR_4,
          0, (u8 *)&VAR_6, sizeof(VAR_6), ((void*)0));
}
