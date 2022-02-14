
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8350 {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct platform_device {size_t id; } ;
struct TYPE_2__ {int irq; } ;


 struct regulator_dev* FUNC_0 (struct platform_device*) ;
 struct wm8350* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct wm8350*,int ,struct regulator_dev*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct regulator_dev *VAR_2 = FUNC_0(VAR_1);
 struct wm8350 *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_3, VAR_0[VAR_1->id].irq, VAR_2);

 return 0;
}
