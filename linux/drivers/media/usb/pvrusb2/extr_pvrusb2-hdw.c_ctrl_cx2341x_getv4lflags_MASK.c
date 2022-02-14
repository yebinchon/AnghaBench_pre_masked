
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_queryctrl {int flags; int id; } ;
struct pvr2_ctrl {TYPE_2__* info; TYPE_1__* hdw; } ;
struct pvr2_ctl_info {int * set_value; } ;
struct TYPE_4__ {int v4l_id; } ;
struct TYPE_3__ {int enc_ctl_state; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,struct v4l2_queryctrl*) ;

__attribute__((used)) static unsigned int FUNC_1(struct pvr2_ctrl *VAR_2)
{
 struct v4l2_queryctrl VAR_3 = {};
 struct pvr2_ctl_info *VAR_4;
 VAR_3.id = VAR_2->info->v4l_id;
 FUNC_0(&VAR_2->hdw->enc_ctl_state,&VAR_3);






 VAR_4 = (struct pvr2_ctl_info *)(VAR_2->info);
 if (VAR_3.flags & VAR_0) {
  if (VAR_4->set_value) {
   VAR_4->set_value = ((void*)0);
  }
 } else {
  if (!(VAR_4->set_value)) {
   VAR_4->set_value = VAR_1;
  }
 }
 return VAR_3.flags;
}
