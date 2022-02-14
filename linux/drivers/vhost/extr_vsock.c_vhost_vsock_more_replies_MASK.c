
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_vsock {int queued_replies; struct vhost_virtqueue* vqs; } ;
struct vhost_virtqueue {int num; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct vhost_vsock *VAR_1)
{
 struct vhost_virtqueue *VAR_2 = &VAR_1->vqs[VAR_0];
 int VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(&VAR_1->queued_replies);

 return VAR_3 < VAR_2->num;
}
