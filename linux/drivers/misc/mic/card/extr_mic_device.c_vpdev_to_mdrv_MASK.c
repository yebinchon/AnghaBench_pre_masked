
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct vop_device {TYPE_1__ dev; } ;
struct mic_driver {int dummy; } ;


 struct mic_driver* FUNC_0 (int ) ;

__attribute__((used)) static inline struct mic_driver *FUNC_1(struct vop_device *VAR_0)
{
 return FUNC_0(VAR_0->dev.parent);
}
