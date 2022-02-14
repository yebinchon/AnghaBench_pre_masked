
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* constraints; TYPE_1__* desc; } ;
struct TYPE_4__ {int ramp_delay; int settling_time; int settling_time_up; int settling_time_down; } ;
struct TYPE_3__ {int ramp_delay; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct regulator_dev*,char*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0,
           int VAR_1, int VAR_2)
{
 unsigned int VAR_3 = 0;

 if (VAR_0->constraints->ramp_delay)
  VAR_3 = VAR_0->constraints->ramp_delay;
 else if (VAR_0->desc->ramp_delay)
  VAR_3 = VAR_0->desc->ramp_delay;
 else if (VAR_0->constraints->settling_time)
  return VAR_0->constraints->settling_time;
 else if (VAR_0->constraints->settling_time_up &&
   (VAR_2 > VAR_1))
  return VAR_0->constraints->settling_time_up;
 else if (VAR_0->constraints->settling_time_down &&
   (VAR_2 < VAR_1))
  return VAR_0->constraints->settling_time_down;

 if (VAR_3 == 0) {
  FUNC_2(VAR_0, "ramp_delay not set\n");
  return 0;
 }

 return FUNC_0(FUNC_1(VAR_2 - VAR_1), VAR_3);
}
