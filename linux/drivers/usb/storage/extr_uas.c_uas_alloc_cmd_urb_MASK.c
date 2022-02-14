
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct urb {int transfer_flags; } ;
struct uas_dev_info {int cmd_pipe; struct usb_device* udev; } ;
struct uas_cmd_info {int uas_tag; } ;
struct scsi_device {int lun; } ;
struct scsi_cmnd {int cmd_len; int cmnd; int SCp; struct scsi_device* device; } ;
struct command_iu {int len; int cdb; int lun; int prio_attr; int tag; int iu_id; } ;
typedef int gfp_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 struct command_iu* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_3 ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,struct usb_device*,int ,struct command_iu*,int,int ,int *) ;
 int FUNC_7 (struct urb*) ;

__attribute__((used)) static struct urb *FUNC_8(struct uas_dev_info *VAR_4, gfp_t VAR_5,
     struct scsi_cmnd *VAR_6)
{
 struct usb_device *VAR_7 = VAR_4->udev;
 struct scsi_device *VAR_8 = VAR_6->device;
 struct uas_cmd_info *VAR_9 = (void *)&VAR_6->SCp;
 struct urb *VAR_10 = FUNC_5(0, VAR_5);
 struct command_iu *VAR_11;
 int VAR_12;

 if (!VAR_10)
  goto out;

 VAR_12 = VAR_6->cmd_len - 16;
 if (VAR_12 < 0)
  VAR_12 = 0;
 VAR_12 = FUNC_0(VAR_12, 4);
 VAR_11 = FUNC_3(sizeof(*VAR_11) + VAR_12, VAR_5);
 if (!VAR_11)
  goto free;

 VAR_11->iu_id = VAR_0;
 VAR_11->tag = FUNC_1(VAR_9->uas_tag);
 VAR_11->prio_attr = VAR_1;
 VAR_11->len = VAR_12;
 FUNC_2(VAR_8->lun, &VAR_11->lun);
 FUNC_4(VAR_11->cdb, VAR_6->cmnd, VAR_6->cmd_len);

 FUNC_6(VAR_10, VAR_7, VAR_4->cmd_pipe, VAR_11, sizeof(*VAR_11) + VAR_12,
       VAR_3, ((void*)0));
 VAR_10->transfer_flags |= VAR_2;
 out:
 return VAR_10;
 free:
 FUNC_7(VAR_10);
 return ((void*)0);
}
