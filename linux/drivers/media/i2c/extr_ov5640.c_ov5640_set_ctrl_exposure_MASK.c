
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ov5640_ctrls {TYPE_2__* exposure; TYPE_1__* auto_exp; } ;
struct ov5640_dev {struct ov5640_ctrls ctrls; } ;
typedef enum v4l2_exposure_auto_type { ____Placeholder_v4l2_exposure_auto_type } v4l2_exposure_auto_type ;
struct TYPE_4__ {scalar_t__ val; scalar_t__ is_new; } ;
struct TYPE_3__ {scalar_t__ is_new; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ov5640_dev*) ;
 int FUNC_1 (struct ov5640_dev*,int ,scalar_t__*) ;
 int FUNC_2 (struct ov5640_dev*,int) ;
 int FUNC_3 (struct ov5640_dev*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ov5640_dev *VAR_2,
        enum v4l2_exposure_auto_type VAR_3)
{
 struct ov5640_ctrls *VAR_4 = &VAR_2->ctrls;
 bool VAR_5 = (VAR_3 == VAR_1);
 int VAR_6 = 0;

 if (VAR_4->auto_exp->is_new) {
  VAR_6 = FUNC_2(VAR_2, VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 if (!VAR_5 && VAR_4->exposure->is_new) {
  u16 VAR_7;

  VAR_6 = FUNC_1(VAR_2, VAR_0,
     &VAR_7);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_0(VAR_2);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_7 += VAR_6;
  VAR_6 = 0;

  if (VAR_4->exposure->val < VAR_7)
   VAR_6 = FUNC_3(VAR_2, VAR_4->exposure->val);
 }

 return VAR_6;
}
