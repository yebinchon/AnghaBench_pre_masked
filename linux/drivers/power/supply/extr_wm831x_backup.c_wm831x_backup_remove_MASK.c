
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_backup {int backup; } ;
struct platform_device {int dummy; } ;


 struct wm831x_backup* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct wm831x_backup *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->backup);

 return 0;
}
