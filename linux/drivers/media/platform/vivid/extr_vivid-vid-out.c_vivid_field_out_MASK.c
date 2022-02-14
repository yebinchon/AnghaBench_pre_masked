
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ interlaced; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;
struct vivid_dev {TYPE_2__ dv_timings_out; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;






 int VAR_0 ;


 scalar_t__ FUNC_0 (struct vivid_dev*) ;
 scalar_t__ FUNC_1 (struct vivid_dev*) ;

__attribute__((used)) static enum v4l2_field FUNC_2(struct vivid_dev *VAR_1, enum v4l2_field VAR_2)
{
 if (FUNC_1(VAR_1)) {
  switch (VAR_2) {
  case 130:
  case 131:
  case 128:
  case 129:
  case 133:
   return VAR_2;
  case 132:
  default:
   return 132;
  }
 }
 if (FUNC_0(VAR_1))
  return VAR_1->dv_timings_out.bt.interlaced ? 133 :
             VAR_0;
 return VAR_0;
}
