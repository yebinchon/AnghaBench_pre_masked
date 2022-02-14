
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {TYPE_1__* bus; } ;
struct urb {int sg; int num_sgs; int stream_id; } ;
struct uas_dev_info {unsigned int data_in_pipe; unsigned int data_out_pipe; scalar_t__ use_streams; struct usb_device* udev; } ;
struct uas_cmd_info {int uas_tag; } ;
struct TYPE_4__ {int sgl; int nents; } ;
struct scsi_data_buffer {TYPE_2__ table; int length; } ;
struct scsi_cmnd {struct scsi_data_buffer sdb; int SCp; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_3__ {scalar_t__ sg_tablesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct urb* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct urb*,struct usb_device*,unsigned int,int *,int ,int ,struct scsi_cmnd*) ;

__attribute__((used)) static struct urb *FUNC_2(struct uas_dev_info *VAR_2, gfp_t VAR_3,
          struct scsi_cmnd *VAR_4,
          enum dma_data_direction VAR_5)
{
 struct usb_device *VAR_6 = VAR_2->udev;
 struct uas_cmd_info *VAR_7 = (void *)&VAR_4->SCp;
 struct urb *VAR_8 = FUNC_0(0, VAR_3);
 struct scsi_data_buffer *VAR_9 = &VAR_4->sdb;
 unsigned int VAR_10 = (VAR_5 == VAR_0)
  ? VAR_2->data_in_pipe : VAR_2->data_out_pipe;

 if (!VAR_8)
  goto out;
 FUNC_1(VAR_8, VAR_6, VAR_10, ((void*)0), VAR_9->length,
     VAR_1, VAR_4);
 if (VAR_2->use_streams)
  VAR_8->stream_id = VAR_7->uas_tag;
 VAR_8->num_sgs = VAR_6->bus->sg_tablesize ? VAR_9->table.nents : 0;
 VAR_8->sg = VAR_9->table.sgl;
 out:
 return VAR_8;
}
