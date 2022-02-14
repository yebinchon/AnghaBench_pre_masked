
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int used; int avail; int desc; int num; scalar_t__ iotlb; int log_base; } ;


 int FUNC_0 (struct vhost_virtqueue*,int ,int ,int ,int ) ;
 int FUNC_1 (struct vhost_virtqueue*,int ) ;

bool FUNC_2(struct vhost_virtqueue *VAR_0)
{
 if (!FUNC_1(VAR_0, VAR_0->log_base))
  return 0;


 if (VAR_0->iotlb)
  return 1;

 return FUNC_0(VAR_0, VAR_0->num, VAR_0->desc, VAR_0->avail, VAR_0->used);
}
