
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_driver {int (* remove ) (int ) ;} ;
struct device {scalar_t__ driver; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct nubus_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct nubus_driver *VAR_2 = FUNC_2(VAR_1->driver);
 int VAR_3 = -VAR_0;

 if (VAR_1->driver && VAR_2->remove)
  VAR_3 = VAR_2->remove(FUNC_1(VAR_1));
 return VAR_3;
}
