
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umc_driver {int (* probe ) (struct umc_dev*) ;} ;
struct umc_dev {int dummy; } ;
struct device {int parent; int driver; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct umc_dev*) ;
 struct umc_dev* FUNC_3 (struct device*) ;
 struct umc_driver* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct umc_dev *VAR_1;
 struct umc_driver *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_0->driver);
 VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_0);
 VAR_3 = VAR_2->probe(VAR_1);
 if (VAR_3)
  FUNC_1(VAR_0);
 else
  FUNC_5(VAR_0->parent);

 return VAR_3;
}
