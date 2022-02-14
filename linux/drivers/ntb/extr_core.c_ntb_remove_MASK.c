
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int (* remove ) (struct ntb_client*,struct ntb_dev*) ;} ;
struct ntb_client {TYPE_1__ ops; } ;
struct device {scalar_t__ driver; } ;


 struct ntb_dev* FUNC_0 (struct device*) ;
 struct ntb_client* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct ntb_client*,struct ntb_dev*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct ntb_dev *VAR_1;
 struct ntb_client *VAR_2;

 if (VAR_0->driver) {
  VAR_1 = FUNC_0(VAR_0);
  VAR_2 = FUNC_1(VAR_0->driver);

  VAR_2->ops.remove(VAR_2, VAR_1);
  FUNC_2(VAR_0);
 }

 return 0;
}
