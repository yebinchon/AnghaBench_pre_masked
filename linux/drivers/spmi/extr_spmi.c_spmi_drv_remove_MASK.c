
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_driver {int (* remove ) (int ) ;} ;
struct device {int driver; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;
 struct spmi_driver* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 const struct spmi_driver *VAR_1 = FUNC_6(VAR_0->driver);

 FUNC_1(VAR_0);
 VAR_1->remove(FUNC_5(VAR_0));
 FUNC_2(VAR_0);

 FUNC_0(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 return 0;
}
