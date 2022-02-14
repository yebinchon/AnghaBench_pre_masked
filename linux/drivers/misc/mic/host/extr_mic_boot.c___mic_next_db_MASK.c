
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_device {int dev; } ;
struct mic_device {int dummy; } ;


 int FUNC_0 (struct mic_device*) ;
 struct mic_device* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vop_device *VAR_0)
{
 struct mic_device *VAR_1 = FUNC_1(&VAR_0->dev);

 return FUNC_0(VAR_1);
}
