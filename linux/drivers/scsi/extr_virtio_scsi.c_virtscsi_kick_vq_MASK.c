
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_scsi_vq {int vq; int vq_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct virtio_scsi_vq *VAR_0)
{
 bool VAR_1;
 unsigned long VAR_2;

 FUNC_0(&VAR_0->vq_lock, VAR_2);
 VAR_1 = FUNC_2(VAR_0->vq);
 FUNC_1(&VAR_0->vq_lock, VAR_2);

 if (VAR_1)
  FUNC_3(VAR_0->vq);
}
