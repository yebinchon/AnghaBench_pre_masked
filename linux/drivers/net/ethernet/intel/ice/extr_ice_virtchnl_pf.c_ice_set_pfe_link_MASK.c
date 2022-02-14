
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int link_status; int link_speed; } ;
struct TYPE_4__ {int link_status; scalar_t__ link_speed; } ;
struct TYPE_5__ {TYPE_3__ link_event; TYPE_1__ link_event_adv; } ;
struct virtchnl_pf_event {TYPE_2__ event_data; } ;
struct ice_vf {int driver_caps; } ;
typedef enum virtchnl_link_speed { ____Placeholder_virtchnl_link_speed } virtchnl_link_speed ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(struct ice_vf *VAR_1, struct virtchnl_pf_event *VAR_2,
   int VAR_3, bool VAR_4)
{
 if (VAR_1->driver_caps & VAR_0) {
  VAR_2->event_data.link_event_adv.link_status = VAR_4;

  VAR_2->event_data.link_event_adv.link_speed =
   FUNC_0(1, VAR_3);
 } else {
  VAR_2->event_data.link_event.link_status = VAR_4;

  VAR_2->event_data.link_event.link_speed =
   (enum virtchnl_link_speed)
   FUNC_0(0, VAR_3);
 }
}
