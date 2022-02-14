
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int dummy; } ;
struct vhost_net_ubuf_ref {struct vhost_virtqueue* vq; int wait; int refcount; } ;


 int VAR_0 ;
 struct vhost_net_ubuf_ref* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct vhost_net_ubuf_ref* FUNC_3 (int,int ) ;

__attribute__((used)) static struct vhost_net_ubuf_ref *
FUNC_4(struct vhost_virtqueue *VAR_2, bool VAR_3)
{
 struct vhost_net_ubuf_ref *VAR_4;

 if (!VAR_3)
  return ((void*)0);
 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 FUNC_1(&VAR_4->refcount, 1);
 FUNC_2(&VAR_4->wait);
 VAR_4->vq = VAR_2;
 return VAR_4;
}
