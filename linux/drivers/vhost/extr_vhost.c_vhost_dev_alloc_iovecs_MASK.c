
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {void* heads; void* log; void* indirect; } ;
struct vhost_dev {int nvqs; struct vhost_virtqueue** vqs; int iov_limit; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct vhost_virtqueue*) ;

__attribute__((used)) static long FUNC_2(struct vhost_dev *VAR_3)
{
 struct vhost_virtqueue *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->nvqs; ++VAR_5) {
  VAR_4 = VAR_3->vqs[VAR_5];
  VAR_4->indirect = FUNC_0(VAR_2,
          sizeof(*VAR_4->indirect),
          VAR_1);
  VAR_4->log = FUNC_0(VAR_3->iov_limit, sizeof(*VAR_4->log),
     VAR_1);
  VAR_4->heads = FUNC_0(VAR_3->iov_limit, sizeof(*VAR_4->heads),
       VAR_1);
  if (!VAR_4->indirect || !VAR_4->log || !VAR_4->heads)
   goto err_nomem;
 }
 return 0;

err_nomem:
 for (; VAR_5 >= 0; --VAR_5)
  FUNC_1(VAR_3->vqs[VAR_5]);
 return -VAR_0;
}
