
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_scsi {int vdev; } ;
struct blk_mq_queue_map {int dummy; } ;
struct TYPE_2__ {struct blk_mq_queue_map* map; } ;
struct Scsi_Host {TYPE_1__ tag_set; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct blk_mq_queue_map*,int ,int) ;
 struct virtio_scsi* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_1)
{
 struct virtio_scsi *VAR_2 = FUNC_1(VAR_1);
 struct blk_mq_queue_map *VAR_3 = &VAR_1->tag_set.map[VAR_0];

 return FUNC_0(VAR_3, VAR_2->vdev, 2);
}
