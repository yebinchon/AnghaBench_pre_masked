
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shark_device {int v4l2_dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct shark_device *VAR_0, struct device *VAR_1)
{
 FUNC_0(&VAR_0->v4l2_dev,
    "CONFIG_LEDS_CLASS not enabled, LED support disabled\n");
 return 0;
}
