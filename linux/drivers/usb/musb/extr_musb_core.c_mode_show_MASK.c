
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct musb {int lock; TYPE_1__* xceiv; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {TYPE_2__* otg; } ;


 struct musb* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,char*,char*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct musb *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_3(VAR_2, "%s\n", FUNC_4(VAR_3->xceiv->otg->state));
 FUNC_2(&VAR_3->lock, VAR_4);

 return VAR_5;
}
