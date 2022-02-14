
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency_band {scalar_t__ tuner; size_t index; } ;
struct si476x_radio {TYPE_1__* core; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int chip_id; } ;


 size_t FUNC_0 (struct v4l2_frequency_band*) ;
 int VAR_0 ;
 size_t VAR_1 ;



 struct v4l2_frequency_band* VAR_2 ;
 struct si476x_radio* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_frequency_band *VAR_5)
{
 int VAR_6;
 struct si476x_radio *VAR_7 = FUNC_1(VAR_3);

 if (VAR_5->tuner != 0)
  return -VAR_0;

 switch (VAR_7->core->chip_id) {

 case 130:
 case 129:
  if (VAR_5->index < FUNC_0(VAR_2)) {
   *VAR_5 = VAR_2[VAR_5->index];
   VAR_6 = 0;
  } else {
   VAR_6 = -VAR_0;
  }
  break;


 case 128:
  if (VAR_5->index == VAR_1) {
   *VAR_5 = VAR_2[VAR_5->index];
   VAR_6 = 0;
  } else {
   VAR_6 = -VAR_0;
  }
  break;
 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
