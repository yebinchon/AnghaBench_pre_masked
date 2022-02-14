
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* callback ) (TYPE_1__*) ;} ;
struct vring_virtqueue {TYPE_1__ vq; int broken; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vring_virtqueue*) ;
 int FUNC_1 (char*,struct vring_virtqueue*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 struct vring_virtqueue* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ) ;

irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct vring_virtqueue *VAR_4 = FUNC_3(VAR_3);

 if (!FUNC_0(VAR_4)) {
  FUNC_1("virtqueue interrupt with no work for %p\n", VAR_4);
  return VAR_1;
 }

 if (FUNC_4(VAR_4->broken))
  return VAR_0;

 FUNC_1("virtqueue callback for %p (%p)\n", VAR_4, VAR_4->vq.callback);
 if (VAR_4->vq.callback)
  VAR_4->vq.callback(&VAR_4->vq);

 return VAR_0;
}
