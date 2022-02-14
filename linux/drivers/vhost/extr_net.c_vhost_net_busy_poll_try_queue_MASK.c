
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int poll; } ;
struct vhost_net {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,struct vhost_virtqueue*) ;
 int FUNC_2 (int *,struct vhost_virtqueue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct vhost_virtqueue*) ;

__attribute__((used)) static void FUNC_5(struct vhost_net *VAR_0,
       struct vhost_virtqueue *VAR_1)
{
 if (!FUNC_4(&VAR_0->dev, VAR_1)) {
  FUNC_3(&VAR_1->poll);
 } else if (FUNC_0(FUNC_2(&VAR_0->dev, VAR_1))) {
  FUNC_1(&VAR_0->dev, VAR_1);
  FUNC_3(&VAR_1->poll);
 }
}
