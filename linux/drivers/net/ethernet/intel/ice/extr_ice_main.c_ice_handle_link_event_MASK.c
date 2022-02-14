
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_rq_event_info {scalar_t__ msg_buf; } ;
struct ice_port_info {int dummy; } ;
struct TYPE_4__ {struct ice_port_info* port_info; } ;
struct ice_pf {TYPE_1__* pdev; TYPE_2__ hw; } ;
struct ice_aqc_get_link_status_data {int link_info; int link_speed; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ice_pf*,struct ice_port_info*,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ice_pf *VAR_2, struct ice_rq_event_info *VAR_3)
{
 struct ice_aqc_get_link_status_data *VAR_4;
 struct ice_port_info *VAR_5;
 int VAR_6;

 VAR_4 = (struct ice_aqc_get_link_status_data *)VAR_3->msg_buf;
 VAR_5 = VAR_2->hw.port_info;
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2, VAR_5,
    !!(VAR_4->link_info & VAR_1),
    FUNC_2(VAR_4->link_speed));
 if (VAR_6)
  FUNC_0(&VAR_2->pdev->dev,
   "Could not process link event, error %d\n", VAR_6);

 return VAR_6;
}
