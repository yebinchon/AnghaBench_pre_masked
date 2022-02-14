
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vc ;
typedef int v_req_pi ;
typedef int v_req ;
typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct virtio_scsi_cmd_resp {int dummy; } ;
struct virtio_scsi_cmd_req_pi {int* lun; int * cdb; int task_attr; int tag; scalar_t__ pi_bytesin; scalar_t__ pi_bytesout; } ;
struct virtio_scsi_cmd_req {int* lun; int * cdb; int task_attr; int tag; scalar_t__ pi_bytesin; scalar_t__ pi_bytesout; } ;
struct vhost_virtqueue {int mutex; int * iov; struct vhost_scsi_tpg** private_data; } ;
struct vhost_scsi_tpg {int dummy; } ;
struct iov_iter {int dummy; } ;
struct vhost_scsi_ctx {int rsp_size; int req_size; int* lunp; int* target; scalar_t__ out_size; scalar_t__ in_size; size_t out; int head; int in; struct iov_iter out_iter; struct virtio_scsi_cmd_req_pi* req; } ;
struct vhost_scsi_cmd {int work; int tvc_vq_desc; int tvc_se_cmd; int tvc_lun; int * tvc_cdb; int tvc_in_iovs; int tvc_resp_iov; struct vhost_virtqueue* tvc_vq; struct vhost_scsi* tvc_vhost; } ;
struct vhost_scsi {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct vhost_scsi_cmd*) ;
 int FUNC_2 (struct vhost_scsi_cmd*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct iov_iter*,int) ;
 int FUNC_4 (struct iov_iter*,int ,int *,int ,scalar_t__) ;
 int FUNC_5 (struct iov_iter*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct vhost_scsi_ctx*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,struct vhost_scsi_cmd*,scalar_t__,...) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct vhost_virtqueue*,scalar_t__) ;
 int FUNC_15 (struct vhost_virtqueue*,int ) ;
 int FUNC_16 (int *,struct vhost_virtqueue*) ;
 int FUNC_17 (struct vhost_virtqueue*,int,int ) ;
 int FUNC_18 (struct vhost_virtqueue*,int ) ;
 int FUNC_19 (struct vhost_virtqueue*,struct vhost_scsi_ctx*) ;
 int FUNC_20 (struct vhost_scsi*,struct vhost_virtqueue*,struct vhost_scsi_ctx*) ;
 int FUNC_21 (struct vhost_virtqueue*,struct vhost_scsi_ctx*,struct vhost_scsi_tpg**) ;
 struct vhost_scsi_cmd* FUNC_22 (struct vhost_virtqueue*,struct vhost_scsi_tpg*,void*,int ,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_23 (struct vhost_scsi_cmd*,int,struct iov_iter*,scalar_t__,struct iov_iter*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct vhost_scsi*,struct vhost_virtqueue*,int ,size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_26 (struct vhost_virtqueue*,char*,...) ;

__attribute__((used)) static void
FUNC_27(struct vhost_scsi *VAR_10, struct vhost_virtqueue *VAR_11)
{
 struct vhost_scsi_tpg **VAR_12, *VAR_13;
 struct virtio_scsi_cmd_req VAR_14;
 struct virtio_scsi_cmd_req_pi VAR_15;
 struct vhost_scsi_ctx VAR_16;
 struct vhost_scsi_cmd *VAR_17;
 struct iov_iter VAR_18, VAR_19, VAR_20;
 u64 VAR_21;
 u32 VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26 = 0;
 u16 VAR_27;
 u8 VAR_28;
 bool VAR_29 = FUNC_18(VAR_11, VAR_7);
 void *VAR_30;

 FUNC_8(&VAR_11->mutex);




 VAR_12 = VAR_11->private_data;
 if (!VAR_12)
  goto out;

 FUNC_7(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.rsp_size = sizeof(struct virtio_scsi_cmd_resp);

 FUNC_16(&VAR_10->dev, VAR_11);

 do {
  VAR_24 = FUNC_20(VAR_10, VAR_11, &VAR_16);
  if (VAR_24)
   goto err;





  if (VAR_29) {
   VAR_16.req = &VAR_15;
   VAR_16.req_size = sizeof(VAR_15);
   VAR_16.lunp = &VAR_15.lun[0];
   VAR_16.target = &VAR_15.lun[1];
  } else {
   VAR_16.req = &VAR_14;
   VAR_16.req_size = sizeof(VAR_14);
   VAR_16.lunp = &VAR_14.lun[0];
   VAR_16.target = &VAR_14.lun[1];
  }






  VAR_24 = FUNC_19(VAR_11, &VAR_16);
  if (VAR_24)
   goto err;

  VAR_24 = FUNC_21(VAR_11, &VAR_16, &VAR_13);
  if (VAR_24)
   goto err;

  VAR_24 = -VAR_3;
  VAR_25 = 0;

  if (VAR_16.out_size > VAR_16.req_size) {
   VAR_23 = VAR_2;
   VAR_22 = VAR_16.out_size - VAR_16.req_size;
   VAR_20 = VAR_16.out_iter;
  } else if (VAR_16.in_size > VAR_16.rsp_size) {
   VAR_23 = VAR_0;
   VAR_22 = VAR_16.in_size - VAR_16.rsp_size;

   FUNC_4(&VAR_18, VAR_5, &VAR_11->iov[VAR_16.out], VAR_16.in,
          VAR_16.rsp_size + VAR_22);
   FUNC_3(&VAR_18, VAR_16.rsp_size);
   VAR_20 = VAR_18;
  } else {
   VAR_23 = VAR_1;
   VAR_22 = 0;
  }





  if (VAR_29) {
   if (VAR_15.pi_bytesout) {
    if (VAR_23 != VAR_2) {
     FUNC_26(VAR_11, "Received non zero pi_bytesout,"
      " but wrong data_direction\n");
     goto err;
    }
    VAR_25 = FUNC_14(VAR_11, VAR_15.pi_bytesout);
   } else if (VAR_15.pi_bytesin) {
    if (VAR_23 != VAR_0) {
     FUNC_26(VAR_11, "Received non zero pi_bytesin,"
      " but wrong data_direction\n");
     goto err;
    }
    VAR_25 = FUNC_14(VAR_11, VAR_15.pi_bytesin);
   }
   if (VAR_25) {
    VAR_22 -= VAR_25;
    VAR_19 = VAR_20;
    FUNC_5(&VAR_19, VAR_25);
    FUNC_3(&VAR_20, VAR_25);
   }
   VAR_21 = FUNC_15(VAR_11, VAR_15.tag);
   VAR_28 = VAR_15.task_attr;
   VAR_30 = &VAR_15.cdb[0];
   VAR_27 = ((VAR_15.lun[2] << 8) | VAR_15.lun[3]) & 0x3FFF;
  } else {
   VAR_21 = FUNC_15(VAR_11, VAR_14.tag);
   VAR_28 = VAR_14.task_attr;
   VAR_30 = &VAR_14.cdb[0];
   VAR_27 = ((VAR_14.lun[2] << 8) | VAR_14.lun[3]) & 0x3FFF;
  }







  if (FUNC_13(FUNC_12(VAR_30) > VAR_6)) {
   FUNC_26(VAR_11, "Received SCSI CDB with command_size: %d that"
    " exceeds SCSI_MAX_VARLEN_CDB_SIZE: %d\n",
    FUNC_12(VAR_30), VAR_6);
    goto err;
  }
  VAR_17 = FUNC_22(VAR_11, VAR_13, VAR_30, VAR_21, VAR_27, VAR_28,
      VAR_22 + VAR_25,
      VAR_23);
  if (FUNC_1(VAR_17)) {
   FUNC_26(VAR_11, "vhost_scsi_get_tag failed %ld\n",
          FUNC_2(VAR_17));
   goto err;
  }
  VAR_17->tvc_vhost = VAR_10;
  VAR_17->tvc_vq = VAR_11;
  VAR_17->tvc_resp_iov = VAR_11->iov[VAR_16.out];
  VAR_17->tvc_in_iovs = VAR_16.in;

  FUNC_10("vhost_scsi got command opcode: %#02x, lun: %d\n",
    VAR_17->tvc_cdb[0], VAR_17->tvc_lun);
  FUNC_10("cmd: %p exp_data_len: %d, prot_bytes: %d data_direction:"
    " %d\n", VAR_17, VAR_22, VAR_25, VAR_23);

  if (VAR_23 != VAR_1) {
   if (FUNC_13(FUNC_23(VAR_17, VAR_25,
            &VAR_19, VAR_22,
            &VAR_20))) {
    FUNC_26(VAR_11, "Failed to map iov to sgl\n");
    FUNC_24(&VAR_17->tvc_se_cmd);
    goto err;
   }
  }





  VAR_17->tvc_vq_desc = VAR_16.head;






  FUNC_0(&VAR_17->work, VAR_8);
  FUNC_11(VAR_9, &VAR_17->work);
  VAR_24 = 0;
err:






  if (VAR_24 == -VAR_4)
   break;
  else if (VAR_24 == -VAR_3)
   FUNC_25(VAR_10, VAR_11, VAR_16.head, VAR_16.out);
 } while (FUNC_6(!FUNC_17(VAR_11, ++VAR_26, 0)));
out:
 FUNC_9(&VAR_11->mutex);
}
