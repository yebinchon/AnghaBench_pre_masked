
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_driver {int (* shutdown ) (struct ssb_device*) ;} ;
struct ssb_device {int dummy; } ;
struct device {int driver; } ;


 struct ssb_device* FUNC_0 (struct device*) ;
 struct ssb_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct ssb_device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct ssb_device *VAR_1 = FUNC_0(VAR_0);
 struct ssb_driver *VAR_2;

 if (!VAR_0->driver)
  return;
 VAR_2 = FUNC_1(VAR_0->driver);
 if (VAR_2 && VAR_2->shutdown)
  VAR_2->shutdown(VAR_1);
}
