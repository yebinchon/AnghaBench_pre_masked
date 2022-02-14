
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_driver {int (* remove ) (struct zorro_dev*) ;} ;
struct zorro_dev {int * driver; } ;
struct device {int driver; } ;


 int FUNC_0 (struct zorro_dev*) ;
 struct zorro_dev* FUNC_1 (struct device*) ;
 struct zorro_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct zorro_dev *VAR_1 = FUNC_1(VAR_0);
 struct zorro_driver *VAR_2 = FUNC_2(VAR_0->driver);

 if (VAR_2) {
  if (VAR_2->remove)
   VAR_2->remove(VAR_1);
  VAR_1->driver = ((void*)0);
 }
 return 0;
}
