
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5m8767_info {int ramp_delay; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int uV_step; } ;


 int FUNC_0 (unsigned int,int) ;
 struct s5m8767_info* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2)
{
 struct s5m8767_info *VAR_3 = FUNC_1(VAR_0);

 if ((VAR_1 < VAR_2) && VAR_3->ramp_delay)
  return FUNC_0(VAR_0->desc->uV_step * (VAR_2 - VAR_1),
     VAR_3->ramp_delay * 1000);
 return 0;
}
