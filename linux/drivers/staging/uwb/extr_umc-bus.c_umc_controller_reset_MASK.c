
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct umc_dev {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct device*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(struct umc_dev *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev.parent;
 int VAR_5 = 0;

 if (!FUNC_1(VAR_4))
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_4, VAR_4, VAR_2);
 if (VAR_5 >= 0)
  VAR_5 = FUNC_0(VAR_4, VAR_4, VAR_1);
 FUNC_2(VAR_4);

 return VAR_5;
}
