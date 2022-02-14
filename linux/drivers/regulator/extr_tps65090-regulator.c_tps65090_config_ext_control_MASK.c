
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tps65090_regulator {TYPE_2__* dev; TYPE_1__* desc; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {unsigned int enable_reg; } ;


 int FUNC_0 (TYPE_2__*,char*,unsigned int) ;
 int FUNC_1 (struct device*,unsigned int,int) ;
 int FUNC_2 (struct device*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(
 struct tps65090_regulator *VAR_0, bool VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = VAR_0->dev->parent;
 unsigned int VAR_4 = VAR_0->desc->enable_reg;

 if (VAR_1)
  VAR_2 = FUNC_2(VAR_3, VAR_4, 1);
 else
  VAR_2 = FUNC_1(VAR_3, VAR_4, 1);
 if (VAR_2 < 0)
  FUNC_0(VAR_0->dev, "Error in updating reg 0x%x\n", VAR_4);
 return VAR_2;
}
