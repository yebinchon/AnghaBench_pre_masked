
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65218 {scalar_t__ rev; int* strobes; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {int bypass_mask; int bypass_reg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct tps65218* FUNC_0 (struct regulator_dev*) ;
 unsigned int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps65218*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_6)
{
 struct tps65218 *VAR_7 = FUNC_0(VAR_6);
 unsigned int VAR_8 = FUNC_1(VAR_6);

 if (VAR_8 < VAR_1 || VAR_8 > VAR_3)
  return -VAR_0;






 if (VAR_8 == VAR_2 && VAR_7->rev == VAR_5)
  return 0;

 if (!VAR_7->strobes[VAR_8]) {
  if (VAR_8 == VAR_2)
   VAR_7->strobes[VAR_8] = 3;
  else
   return -VAR_0;
 }

 return FUNC_2(VAR_7, VAR_6->desc->bypass_reg,
     VAR_6->desc->bypass_mask,
     VAR_7->strobes[VAR_8], VAR_4);
}
