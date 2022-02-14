
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtnet_info {int dev; TYPE_2__* sq; } ;
struct napi_struct {scalar_t__ weight; } ;
struct TYPE_4__ {struct napi_struct napi; } ;
struct TYPE_3__ {struct virtnet_info* priv; } ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct napi_struct*,struct virtqueue*) ;
 size_t FUNC_3 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_4(struct virtqueue *VAR_0)
{
 struct virtnet_info *VAR_1 = VAR_0->vdev->priv;
 struct napi_struct *VAR_2 = &VAR_1->sq[FUNC_3(VAR_0)].napi;


 FUNC_1(VAR_0);

 if (VAR_2->weight)
  FUNC_2(VAR_2, VAR_0);
 else

  FUNC_0(VAR_1->dev, FUNC_3(VAR_0));
}
