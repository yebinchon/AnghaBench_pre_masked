
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_device {int dev; } ;
struct mic_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* intr_workarounds ) (struct mic_device*) ;} ;


 int FUNC_0 (struct mic_device*) ;
 struct mic_device* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vop_device *VAR_0, int VAR_1)
{
 struct mic_device *VAR_2 = FUNC_1(&VAR_0->dev);

 VAR_2->ops->intr_workarounds(VAR_2);
}
