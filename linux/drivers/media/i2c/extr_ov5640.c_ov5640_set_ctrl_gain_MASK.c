
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ov5640_ctrls {TYPE_2__* gain; TYPE_1__* auto_gain; } ;
struct ov5640_dev {struct ov5640_ctrls ctrls; } ;
struct TYPE_4__ {int val; scalar_t__ is_new; } ;
struct TYPE_3__ {scalar_t__ is_new; } ;


 int FUNC_0 (struct ov5640_dev*,int) ;
 int FUNC_1 (struct ov5640_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct ov5640_dev *VAR_0, bool VAR_1)
{
 struct ov5640_ctrls *VAR_2 = &VAR_0->ctrls;
 int VAR_3 = 0;

 if (VAR_2->auto_gain->is_new) {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 if (!VAR_1 && VAR_2->gain->is_new)
  VAR_3 = FUNC_1(VAR_0, VAR_2->gain->val);

 return VAR_3;
}
