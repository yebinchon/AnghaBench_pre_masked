
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ov2680_ctrls {TYPE_2__* auto_exp; TYPE_1__* auto_gain; } ;
struct ov2680_dev {int mode_pending_changes; int current_mode; struct ov2680_ctrls ctrls; } ;
struct TYPE_4__ {scalar_t__ val; } ;
struct TYPE_3__ {scalar_t__ val; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ov2680_dev*,int) ;
 int FUNC_1 (struct ov2680_dev*,int) ;
 int FUNC_2 (struct ov2680_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct ov2680_dev *VAR_1)
{
 struct ov2680_ctrls *VAR_2 = &VAR_1->ctrls;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_1->current_mode);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_2->auto_gain->val) {
  VAR_3 = FUNC_1(VAR_1, 1);
  if (VAR_3 < 0)
   return VAR_3;
 }

 if (VAR_2->auto_exp->val == VAR_0) {
  VAR_3 = FUNC_0(VAR_1, 1);
  if (VAR_3 < 0)
   return VAR_3;
 }

 VAR_1->mode_pending_changes = 0;

 return 0;
}
