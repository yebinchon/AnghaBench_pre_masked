
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int mutex; } ;
struct vhost_net {TYPE_1__ dev; TYPE_3__* vqs; } ;
struct TYPE_5__ {int mutex; int acked_backend_features; } ;
struct TYPE_6__ {TYPE_2__ vq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vhost_net *VAR_1, u64 VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->dev.mutex);
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_0(&VAR_1->vqs[VAR_3].vq.mutex);
  VAR_1->vqs[VAR_3].vq.acked_backend_features = VAR_2;
  FUNC_1(&VAR_1->vqs[VAR_3].vq.mutex);
 }
 FUNC_1(&VAR_1->dev.mutex);

 return 0;
}
