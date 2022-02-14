
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int changes; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;
struct v4l2_event {TYPE_2__ u; } ;



void FUNC_0(struct v4l2_event *VAR_0, const struct v4l2_event *VAR_1)
{
 u32 VAR_2 = VAR_0->u.ctrl.changes;

 VAR_0->u.ctrl = VAR_1->u.ctrl;
 VAR_0->u.ctrl.changes |= VAR_2;
}
