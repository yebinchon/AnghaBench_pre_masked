
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device_id {int dummy; } ;
struct xenbus_device {int dev; } ;
struct vscsifrnt_info {int host_active; struct Scsi_Host* host; int shadow_lock; int wq_pause; int wq_sync; int shadow_free_bitmap; struct xenbus_device* dev; } ;
struct Scsi_Host {int host_no; int max_sectors; int sg_tablesize; int max_cmd_len; int max_lun; scalar_t__ max_channel; int max_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct vscsifrnt_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_5 (int *,int) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct vscsifrnt_info*) ;
 int FUNC_8 (struct vscsifrnt_info*) ;
 int VAR_8 ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct xenbus_device*,int,char*) ;
 int FUNC_12 (struct xenbus_device*,int ) ;

__attribute__((used)) static int FUNC_13(struct xenbus_device *VAR_9,
      const struct xenbus_device_id *VAR_10)
{
 struct vscsifrnt_info *VAR_11;
 struct Scsi_Host *VAR_12;
 int VAR_13 = -VAR_0;
 char VAR_14[VAR_2];

 VAR_12 = FUNC_5(&VAR_8, sizeof(*VAR_11));
 if (!VAR_12) {
  FUNC_11(VAR_9, VAR_13, "fail to allocate scsi host");
  return VAR_13;
 }
 VAR_11 = (struct vscsifrnt_info *)VAR_12->hostdata;

 FUNC_2(&VAR_9->dev, VAR_11);
 VAR_11->dev = VAR_9;

 FUNC_0(VAR_11->shadow_free_bitmap, VAR_5);

 VAR_13 = FUNC_8(VAR_11);
 if (VAR_13) {
  FUNC_6(VAR_12);
  return VAR_13;
 }

 FUNC_3(&VAR_11->wq_sync);
 FUNC_3(&VAR_11->wq_pause);
 FUNC_10(&VAR_11->shadow_lock);

 FUNC_9(VAR_14, VAR_2, "vscsiif.%d", VAR_12->host_no);

 VAR_12->max_id = VAR_6;
 VAR_12->max_channel = 0;
 VAR_12->max_lun = VAR_4;
 VAR_12->max_sectors = (VAR_12->sg_tablesize - 1) * VAR_1 / 512;
 VAR_12->max_cmd_len = VAR_3;

 VAR_13 = FUNC_4(VAR_12, &VAR_9->dev);
 if (VAR_13) {
  FUNC_1(&VAR_9->dev, "fail to add scsi host %d\n", VAR_13);
  goto free_sring;
 }
 VAR_11->host = VAR_12;
 VAR_11->host_active = 1;

 FUNC_12(VAR_9, VAR_7);

 return 0;

free_sring:
 FUNC_7(VAR_11);
 FUNC_6(VAR_12);
 return VAR_13;
}
