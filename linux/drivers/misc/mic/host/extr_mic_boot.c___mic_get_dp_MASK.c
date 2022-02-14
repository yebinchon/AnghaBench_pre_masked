
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_device {int dev; } ;
struct mic_device {void* dp; } ;


 struct mic_device* FUNC_0 (int *) ;

__attribute__((used)) static void *FUNC_1(struct vop_device *VAR_0)
{
 struct mic_device *VAR_1 = FUNC_0(&VAR_0->dev);

 return VAR_1->dp;
}
