
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int (* probe ) (struct ntb_client*,struct ntb_dev*) ;} ;
struct ntb_client {TYPE_1__ ops; } ;
struct device {int driver; } ;


 struct ntb_dev* FUNC_0 (struct device*) ;
 struct ntb_client* FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct ntb_client*,struct ntb_dev*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct ntb_dev *VAR_1;
 struct ntb_client *VAR_2;
 int VAR_3;

 FUNC_2(VAR_0);
 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = FUNC_1(VAR_0->driver);

 VAR_3 = VAR_2->ops.probe(VAR_2, VAR_1);
 if (VAR_3)
  FUNC_3(VAR_0);

 return VAR_3;
}
