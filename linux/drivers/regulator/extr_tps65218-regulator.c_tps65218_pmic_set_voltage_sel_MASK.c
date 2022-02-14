
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65218 {int dummy; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int vsel_mask; int vsel_reg; } ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct tps65218* FUNC_0 (struct regulator_dev*) ;
 unsigned int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps65218*,int ,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3,
      unsigned VAR_4)
{
 int VAR_5;
 struct tps65218 *VAR_6 = FUNC_0(VAR_3);
 unsigned int VAR_7 = FUNC_1(VAR_3);


 VAR_5 = FUNC_2(VAR_6, VAR_3->desc->vsel_reg, VAR_3->desc->vsel_mask,
    VAR_4, VAR_0);


 switch (VAR_7) {
 case 129:
 case 128:
  VAR_5 = FUNC_2(VAR_6, VAR_1,
     VAR_2,
     VAR_2,
     VAR_0);
  break;
 }

 return VAR_5;
}
