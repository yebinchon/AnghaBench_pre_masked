
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_scsi_vq {int vq; int vq_lock; } ;
struct virtio_scsi_cmd {int dummy; } ;


 int FUNC_0 (int ,struct virtio_scsi_cmd*,size_t,size_t) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct virtio_scsi_vq *VAR_0,
        struct virtio_scsi_cmd *VAR_1,
        size_t VAR_2, size_t VAR_3,
        bool VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
 bool VAR_7 = 0;

 FUNC_1(&VAR_0->vq_lock, VAR_5);
 VAR_6 = FUNC_0(VAR_0->vq, VAR_1, VAR_2, VAR_3);
 if (!VAR_6 && VAR_4)
  VAR_7 = FUNC_3(VAR_0->vq);

 FUNC_2(&VAR_0->vq_lock, VAR_5);

 if (VAR_7)
  FUNC_4(VAR_0->vq);
 return VAR_6;
}
