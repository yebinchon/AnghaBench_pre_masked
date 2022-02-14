
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_csi {int mdev; int notifier; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sun4i_csi* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct sun4i_csi*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct sun4i_csi *VAR_1 = FUNC_2(VAR_0);

 FUNC_5(&VAR_1->notifier);
 FUNC_4(&VAR_1->notifier);
 FUNC_1(&VAR_1->mdev);
 FUNC_3(VAR_1);
 FUNC_0(&VAR_1->mdev);

 return 0;
}
