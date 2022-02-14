
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {struct vhost_scsi_tpg** private_data; } ;
struct vhost_scsi_tpg {int dummy; } ;
struct vhost_scsi_ctx {int* lunp; size_t* target; int out_iter; int req_size; int req; } ;


 int VAR_0 ;
 struct vhost_scsi_tpg* FUNC_0 (struct vhost_scsi_tpg*) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vhost_virtqueue*,char*,...) ;

__attribute__((used)) static int
FUNC_4(struct vhost_virtqueue *VAR_1, struct vhost_scsi_ctx *VAR_2,
     struct vhost_scsi_tpg **VAR_3)
{
 int VAR_4 = -VAR_0;

 if (FUNC_2(!FUNC_1(VAR_2->req, VAR_2->req_size,
       &VAR_2->out_iter))) {
  FUNC_3(VAR_1, "Faulted on copy_from_iter_full\n");
 } else if (FUNC_2(*VAR_2->lunp != 1)) {

  FUNC_3(VAR_1, "Illegal virtio-scsi lun: %u\n", *VAR_2->lunp);
 } else {
  struct vhost_scsi_tpg **VAR_5, *VAR_6;

  VAR_5 = VAR_1->private_data;

  VAR_6 = FUNC_0(VAR_5[*VAR_2->target]);
  if (FUNC_2(!VAR_6)) {
   FUNC_3(VAR_1, "Target 0x%x does not exist\n", *VAR_2->target);
  } else {
   if (VAR_3)
    *VAR_3 = VAR_6;
   VAR_4 = 0;
  }
 }

 return VAR_4;
}
