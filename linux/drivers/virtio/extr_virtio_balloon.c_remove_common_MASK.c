
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtio_balloon {TYPE_2__* vdev; scalar_t__ num_pages; } ;
struct TYPE_5__ {TYPE_1__* config; } ;
struct TYPE_4__ {int (* del_vqs ) (TYPE_2__*) ;int (* reset ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct virtio_balloon*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct virtio_balloon*) ;

__attribute__((used)) static void FUNC_4(struct virtio_balloon *VAR_0)
{

 while (VAR_0->num_pages)
  FUNC_0(VAR_0, VAR_0->num_pages);
 FUNC_3(VAR_0);


 VAR_0->vdev->config->reset(VAR_0->vdev);

 VAR_0->vdev->config->del_vqs(VAR_0->vdev);
}
