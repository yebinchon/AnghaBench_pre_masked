
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_balloon {int cmd_id_active; int vdev; struct virtqueue* free_page_vq; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*,int *,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct virtio_balloon*) ;
 int FUNC_3 (struct virtqueue*,struct scatterlist*,int,int *,int ) ;
 scalar_t__ FUNC_4 (struct virtqueue*,int*) ;
 int FUNC_5 (struct virtqueue*) ;

__attribute__((used)) static int FUNC_6(struct virtio_balloon *VAR_1)
{
 struct scatterlist VAR_2;
 struct virtqueue *VAR_3 = VAR_1->free_page_vq;
 int VAR_4, VAR_5;


 while (FUNC_4(VAR_3, &VAR_5))
  ;

 VAR_1->cmd_id_active = FUNC_1(VAR_1->vdev,
     FUNC_2(VAR_1));
 FUNC_0(&VAR_2, &VAR_1->cmd_id_active, sizeof(VAR_1->cmd_id_active));
 VAR_4 = FUNC_3(VAR_3, &VAR_2, 1, &VAR_1->cmd_id_active, VAR_0);
 if (!VAR_4)
  FUNC_5(VAR_3);
 return VAR_4;
}
