
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omapfb_device {int * fb_info; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct omapfb_device* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1, pm_message_t VAR_2)
{
 struct omapfb_device *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_0, VAR_3->fb_info[0]);
 return 0;
}
