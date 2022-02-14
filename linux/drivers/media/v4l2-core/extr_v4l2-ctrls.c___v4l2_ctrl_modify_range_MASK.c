
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {scalar_t__* p_s64; scalar_t__* p_s32; } ;
struct TYPE_6__ {scalar_t__* p_s64; scalar_t__* p_s32; } ;
struct v4l2_ctrl {int type; scalar_t__ minimum; scalar_t__ maximum; scalar_t__ step; scalar_t__ default_value; TYPE_2__ p_cur; TYPE_3__ p_new; int is_array; TYPE_1__* handler; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct v4l2_ctrl*,int ) ;
 int FUNC_4 (int *,struct v4l2_ctrl*,int ) ;
 scalar_t__ FUNC_5 (struct v4l2_ctrl*,TYPE_3__) ;

int FUNC_6(struct v4l2_ctrl *VAR_2,
   s64 VAR_3, s64 VAR_4, u64 VAR_5, s64 VAR_6)
{
 bool VAR_7;
 bool VAR_8 = 0;
 int VAR_9;

 FUNC_2(VAR_2->handler->lock);

 switch (VAR_2->type) {
 case 134:
 case 133:
 case 135:
 case 131:
 case 132:
 case 136:
 case 128:
 case 130:
 case 129:
  if (VAR_2->is_array)
   return -VAR_0;
  VAR_9 = FUNC_0(VAR_2->type, VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_9)
   return VAR_9;
  break;
 default:
  return -VAR_0;
 }
 if ((VAR_2->minimum != VAR_3) || (VAR_2->maximum != VAR_4) ||
  (VAR_2->step != VAR_5) || VAR_2->default_value != VAR_6) {
  VAR_8 = 1;
  VAR_2->minimum = VAR_3;
  VAR_2->maximum = VAR_4;
  VAR_2->step = VAR_5;
  VAR_2->default_value = VAR_6;
 }
 FUNC_1(VAR_2);
 if (FUNC_5(VAR_2, VAR_2->p_new)) {
  if (VAR_2->type == 133)
   *VAR_2->p_new.p_s64 = VAR_6;
  else
   *VAR_2->p_new.p_s32 = VAR_6;
 }

 if (VAR_2->type == 133)
  VAR_7 = *VAR_2->p_new.p_s64 != *VAR_2->p_cur.p_s64;
 else
  VAR_7 = *VAR_2->p_new.p_s32 != *VAR_2->p_cur.p_s32;
 if (VAR_7)
  VAR_9 = FUNC_4(((void*)0), VAR_2, VAR_1);
 else if (VAR_8)
  FUNC_3(((void*)0), VAR_2, VAR_1);
 return VAR_9;
}
