
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int dev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int *,char*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_0,
        const unsigned int VAR_1[], int VAR_2,
        unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3 <= VAR_1[VAR_4])
   return VAR_4;
 }


 FUNC_0(&VAR_0->dev, "%s: ramp_delay: %d not supported, setting 100000\n",
   VAR_0->desc->name, VAR_3);
 return VAR_2 - 1;
}
