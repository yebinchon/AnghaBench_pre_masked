
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65217 {int dummy; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {int bypass_mask; int bypass_reg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct tps65217* FUNC_0 (struct regulator_dev*) ;
 unsigned int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps65217*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_4)
{
 struct tps65217 *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6 = FUNC_1(VAR_4);

 if (VAR_6 < VAR_1 || VAR_6 > VAR_2)
  return -VAR_0;

 return FUNC_2(VAR_5, VAR_4->desc->bypass_reg,
       VAR_4->desc->bypass_mask,
       VAR_3);
}
