
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s2mpa01_info {unsigned int ramp_delay24; unsigned int ramp_delay3; unsigned int ramp_delay5; unsigned int ramp_delay16; unsigned int ramp_delay7; unsigned int ramp_delay8910; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int ramp_delay; unsigned int min_uV; unsigned int uV_step; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int) ;
 struct s2mpa01_info* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0,
       unsigned int VAR_1,
       unsigned int VAR_2)
{
 struct s2mpa01_info *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4 = 0;
 int VAR_5, VAR_6;

 switch (FUNC_3(VAR_0)) {
 case 135:
 case 133:
  VAR_4 = VAR_3->ramp_delay24;
  break;
 case 134:
  VAR_4 = VAR_3->ramp_delay3;
  break;
 case 132:
  VAR_4 = VAR_3->ramp_delay5;
  break;
 case 137:
 case 131:
  VAR_4 = VAR_3->ramp_delay16;
  break;
 case 130:
  VAR_4 = VAR_3->ramp_delay7;
  break;
 case 129:
 case 128:
 case 136:
  VAR_4 = VAR_3->ramp_delay8910;
  break;
 }

 if (VAR_4 == 0)
  VAR_4 = VAR_0->desc->ramp_delay;

 VAR_5 = VAR_0->desc->min_uV + (VAR_0->desc->uV_step * VAR_1);
 VAR_6 = VAR_0->desc->min_uV + (VAR_0->desc->uV_step * VAR_2);

 return FUNC_0(FUNC_1(VAR_6 - VAR_5), VAR_4);
}
