
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ type; int step; int default_value; int maximum; int minimum; scalar_t__ value64; int flags; int changes; } ;
struct TYPE_6__ {TYPE_2__ ctrl; } ;
struct v4l2_event {TYPE_3__ u; int id; int type; } ;
struct TYPE_4__ {scalar_t__* p_s64; } ;
struct v4l2_ctrl {scalar_t__ type; int step; int default_value; int maximum; int minimum; TYPE_1__ p_cur; scalar_t__ is_ptr; int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_event*,int ,int) ;
 int FUNC_1 (struct v4l2_ctrl*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_event *VAR_3, struct v4l2_ctrl *VAR_4, u32 VAR_5)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->type = VAR_2;
 VAR_3->id = VAR_4->id;
 VAR_3->u.ctrl.changes = VAR_5;
 VAR_3->u.ctrl.type = VAR_4->type;
 VAR_3->u.ctrl.flags = FUNC_1(VAR_4);
 if (VAR_4->is_ptr)
  VAR_3->u.ctrl.value64 = 0;
 else
  VAR_3->u.ctrl.value64 = *VAR_4->p_cur.p_s64;
 VAR_3->u.ctrl.minimum = VAR_4->minimum;
 VAR_3->u.ctrl.maximum = VAR_4->maximum;
 if (VAR_4->type == VAR_1
     || VAR_4->type == VAR_0)
  VAR_3->u.ctrl.step = 1;
 else
  VAR_3->u.ctrl.step = VAR_4->step;
 VAR_3->u.ctrl.default_value = VAR_4->default_value;
}
