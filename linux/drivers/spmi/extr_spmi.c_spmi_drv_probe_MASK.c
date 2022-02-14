
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_driver {int (* probe ) (struct spmi_device*) ;} ;
struct spmi_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct spmi_device*) ;
 struct spmi_device* FUNC_7 (struct device*) ;
 struct spmi_driver* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_0)
{
 const struct spmi_driver *VAR_1 = FUNC_8(VAR_0->driver);
 struct spmi_device *VAR_2 = FUNC_7(VAR_0);
 int VAR_3;

 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
 FUNC_1(VAR_0);

 VAR_3 = VAR_1->probe(VAR_2);
 if (VAR_3)
  goto fail_probe;

 return 0;

fail_probe:
 FUNC_0(VAR_0);
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);
 return VAR_3;
}
