
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_device {int fcp; } ;
struct platform_device {int dev; } ;


 struct vsp1_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vsp1_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct vsp1_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1->fcp);

 FUNC_1(&VAR_0->dev);

 return 0;
}
