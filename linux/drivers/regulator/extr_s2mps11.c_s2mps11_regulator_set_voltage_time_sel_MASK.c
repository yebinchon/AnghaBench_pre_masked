
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s2mps11_info {unsigned int ramp_delay2; unsigned int ramp_delay34; unsigned int ramp_delay5; unsigned int ramp_delay16; unsigned int ramp_delay7810; unsigned int ramp_delay9; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int ramp_delay; unsigned int min_uV; unsigned int uV_step; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int) ;
 struct s2mps11_info* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0,
       unsigned int VAR_1,
       unsigned int VAR_2)
{
 struct s2mps11_info *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = FUNC_3(VAR_0);
 unsigned int VAR_5 = 0;
 int VAR_6, VAR_7;

 switch (VAR_4) {
 case 135:
  VAR_5 = VAR_3->ramp_delay2;
  break;
 case 134:
 case 133:
  VAR_5 = VAR_3->ramp_delay34;
  break;
 case 132:
  VAR_5 = VAR_3->ramp_delay5;
  break;
 case 131:
 case 137:
  VAR_5 = VAR_3->ramp_delay16;
  break;
 case 130:
 case 129:
 case 136:
  VAR_5 = VAR_3->ramp_delay7810;
  break;
 case 128:
  VAR_5 = VAR_3->ramp_delay9;
 }

 if (VAR_5 == 0)
  VAR_5 = VAR_0->desc->ramp_delay;

 VAR_6 = VAR_0->desc->min_uV + (VAR_0->desc->uV_step * VAR_1);
 VAR_7 = VAR_0->desc->min_uV + (VAR_0->desc->uV_step * VAR_2);

 return FUNC_0(FUNC_1(VAR_7 - VAR_6), VAR_5);
}
