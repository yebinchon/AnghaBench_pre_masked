
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xenvif {TYPE_2__* dev; } ;
struct xenbus_device {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 struct xenbus_device* FUNC_0 (int ) ;

__attribute__((used)) static inline struct xenbus_device *FUNC_1(struct xenvif *VAR_0)
{
 return FUNC_0(VAR_0->dev->dev.parent);
}
