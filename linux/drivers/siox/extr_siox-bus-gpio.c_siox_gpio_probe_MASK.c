
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siox_master {scalar_t__ busno; int pushpull; } ;
struct siox_gpio_ddata {void* dld; void* dclk; void* dout; void* din; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct platform_device*,struct siox_master*) ;
 int VAR_3 ;
 struct siox_master* FUNC_5 (struct device*,int) ;
 struct siox_gpio_ddata* FUNC_6 (struct siox_master*) ;
 int FUNC_7 (struct siox_master*) ;
 int FUNC_8 (struct siox_master*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct siox_gpio_ddata *VAR_6;
 int VAR_7;
 struct siox_master *VAR_8;

 VAR_8 = FUNC_5(&VAR_4->dev, sizeof(*VAR_6));
 if (!VAR_8) {
  FUNC_2(VAR_5, "failed to allocate siox master\n");
  return -VAR_0;
 }

 FUNC_4(VAR_4, VAR_8);
 VAR_6 = FUNC_6(VAR_8);

 VAR_6->din = FUNC_3(VAR_5, "din", VAR_1);
 if (FUNC_0(VAR_6->din)) {
  VAR_7 = FUNC_1(VAR_6->din);
  FUNC_2(VAR_5, "Failed to get %s GPIO: %d\n", "din", VAR_7);
  goto err;
 }

 VAR_6->dout = FUNC_3(VAR_5, "dout", VAR_2);
 if (FUNC_0(VAR_6->dout)) {
  VAR_7 = FUNC_1(VAR_6->dout);
  FUNC_2(VAR_5, "Failed to get %s GPIO: %d\n", "dout", VAR_7);
  goto err;
 }

 VAR_6->dclk = FUNC_3(VAR_5, "dclk", VAR_2);
 if (FUNC_0(VAR_6->dclk)) {
  VAR_7 = FUNC_1(VAR_6->dclk);
  FUNC_2(VAR_5, "Failed to get %s GPIO: %d\n", "dclk", VAR_7);
  goto err;
 }

 VAR_6->dld = FUNC_3(VAR_5, "dld", VAR_2);
 if (FUNC_0(VAR_6->dld)) {
  VAR_7 = FUNC_1(VAR_6->dld);
  FUNC_2(VAR_5, "Failed to get %s GPIO: %d\n", "dld", VAR_7);
  goto err;
 }

 VAR_8->pushpull = VAR_3;

 VAR_8->busno = 0;

 VAR_7 = FUNC_8(VAR_8);
 if (VAR_7) {
  FUNC_2(VAR_5, "Failed to register siox master: %d\n", VAR_7);
err:
  FUNC_7(VAR_8);
 }

 return VAR_7;
}
