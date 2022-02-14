
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dim2_hdm {int (* disable_platform ) (struct platform_device*) ;int netinfo_task; int most_iface; int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct dim2_hdm* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct dim2_hdm *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;

 FUNC_0(&VAR_2->dev);
 FUNC_3(&VAR_2->most_iface);
 FUNC_2(VAR_2->netinfo_task);

 FUNC_5(&VAR_0, VAR_3);
 FUNC_1();
 FUNC_6(&VAR_0, VAR_3);

 if (VAR_2->disable_platform)
  VAR_2->disable_platform(VAR_1);

 return 0;
}
