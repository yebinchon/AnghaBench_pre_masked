
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8350 {int dev; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (char const*,int) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,struct wm8350*) ;

__attribute__((used)) static void FUNC_5(struct wm8350 *VAR_0,
           const char *VAR_1,
           struct platform_device **VAR_2)
{
 int VAR_3;

 *VAR_2 = FUNC_2(VAR_1, -1);
 if (*VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0->dev, "Failed to allocate %s\n", VAR_1);
  return;
 }

 (*VAR_2)->dev.parent = VAR_0->dev;
 FUNC_4(*VAR_2, VAR_0);
 VAR_3 = FUNC_1(*VAR_2);
 if (VAR_3 != 0) {
  FUNC_0(VAR_0->dev, "Failed to register %s: %d\n", VAR_1, VAR_3);
  FUNC_3(*VAR_2);
  *VAR_2 = ((void*)0);
 }
}
