
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vivid_dev {size_t input; TYPE_2__* dv_timings_cap; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_3__ {scalar_t__ interlaced; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;







 int VAR_0 ;



 scalar_t__ FUNC_0 (struct vivid_dev*) ;
 scalar_t__ FUNC_1 (struct vivid_dev*) ;

__attribute__((used)) static enum v4l2_field FUNC_2(struct vivid_dev *VAR_1, enum v4l2_field VAR_2)
{
 if (FUNC_1(VAR_1)) {
  switch (VAR_2) {
  case 131:
  case 132:
  case 129:
  case 130:
  case 128:
  case 134:
  case 135:
   return VAR_2;
  case 133:
  default:
   return 133;
  }
 }
 if (FUNC_0(VAR_1))
  return VAR_1->dv_timings_cap[VAR_1->input].bt.interlaced ?
   135 : VAR_0;
 return VAR_0;
}
