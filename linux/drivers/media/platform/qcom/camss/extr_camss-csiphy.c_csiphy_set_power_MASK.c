
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct device {int dummy; } ;
struct csiphy_device {int clock; int nclocks; int irq; TYPE_2__* ops; TYPE_1__* camss; } ;
struct TYPE_4__ {int (* hw_version_read ) (struct csiphy_device*,struct device*) ;int (* reset ) (struct csiphy_device*) ;} ;
struct TYPE_3__ {struct device* dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,struct device*) ;
 int FUNC_2 (struct csiphy_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct csiphy_device*) ;
 int FUNC_8 (struct csiphy_device*,struct device*) ;
 struct csiphy_device* FUNC_9 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct csiphy_device *VAR_2 = FUNC_9(VAR_0);
 struct device *VAR_3 = VAR_2->camss->dev;

 if (VAR_1) {
  int VAR_4;

  VAR_4 = FUNC_5(VAR_3);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 < 0) {
   FUNC_6(VAR_3);
   return VAR_4;
  }

  VAR_4 = FUNC_1(VAR_2->nclocks, VAR_2->clock, VAR_3);
  if (VAR_4 < 0) {
   FUNC_6(VAR_3);
   return VAR_4;
  }

  FUNC_4(VAR_2->irq);

  VAR_2->ops->reset(VAR_2);

  VAR_2->ops->hw_version_read(VAR_2, VAR_3);
 } else {
  FUNC_3(VAR_2->irq);

  FUNC_0(VAR_2->nclocks, VAR_2->clock);

  FUNC_6(VAR_3);
 }

 return 0;
}
