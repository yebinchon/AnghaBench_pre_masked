
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * class; struct device* parent; } ;
struct scsi_disk {int index; int media_present; int first_scan; scalar_t__ opal_dev; scalar_t__ security; scalar_t__ capacity; int max_medium_access_timeouts; scalar_t__ ATO; scalar_t__ RCD; scalar_t__ WCE; scalar_t__ cache_override; scalar_t__ write_prot; struct scsi_device* device; int * driver; TYPE_1__ dev; int openers; struct gendisk* disk; } ;
struct scsi_device {scalar_t__ type; int sector_size; scalar_t__ removable; TYPE_4__* request_queue; int ioerr_cnt; } ;
struct gendisk {int first_minor; int event_flags; int events; int flags; TYPE_4__* queue; int ** private_data; int * fops; int major; int disk_name; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int rq_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 struct gendisk* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_4__*,struct device*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,struct scsi_disk*) ;
 int FUNC_7 (TYPE_1__*,char*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct device*,struct gendisk*,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (struct scsi_device*,int *) ;
 int FUNC_15 (struct scsi_disk*) ;
 struct scsi_disk* FUNC_16 (int,int ) ;
 int FUNC_17 (struct gendisk*) ;
 int FUNC_18 (struct scsi_device*) ;
 int FUNC_19 (struct scsi_device*) ;
 int FUNC_20 (struct scsi_disk*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_21 (char*,int,int ,int ) ;
 int VAR_22 ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ,struct scsi_disk*,char*,...) ;
 int FUNC_24 (struct gendisk*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_25 (int ,struct scsi_device*,char*) ;
 struct scsi_device* FUNC_26 (struct device*) ;

__attribute__((used)) static int FUNC_27(struct device *VAR_25)
{
 struct scsi_device *VAR_26 = FUNC_26(VAR_25);
 struct scsi_disk *VAR_27;
 struct gendisk *VAR_28;
 int VAR_29;
 int VAR_30;

 FUNC_18(VAR_26);
 VAR_30 = -VAR_4;
 if (VAR_26->type != VAR_16 &&
     VAR_26->type != VAR_19 &&
     VAR_26->type != VAR_17 &&
     VAR_26->type != VAR_18)
  goto out;


 if (VAR_26->type == VAR_19)
  goto out;

 FUNC_0(3, FUNC_25(VAR_9, VAR_26,
     "sd_probe\n"));

 VAR_30 = -VAR_5;
 VAR_27 = FUNC_16(sizeof(*VAR_27), VAR_8);
 if (!VAR_27)
  goto out;

 VAR_28 = FUNC_1(VAR_13);
 if (!VAR_28)
  goto out_free;

 VAR_29 = FUNC_12(&VAR_22, VAR_8);
 if (VAR_29 < 0) {
  FUNC_25(VAR_11, VAR_26, "sd_probe: memory exhausted.\n");
  goto out_put;
 }

 VAR_30 = FUNC_21("sd", VAR_29, VAR_28->disk_name, VAR_3);
 if (VAR_30) {
  FUNC_25(VAR_11, VAR_26, "SCSI disk (sd) name length exceeded.\n");
  goto out_free_index;
 }

 VAR_27->device = VAR_26;
 VAR_27->driver = &VAR_24;
 VAR_27->disk = VAR_28;
 VAR_27->index = VAR_29;
 FUNC_2(&VAR_27->openers, 0);
 FUNC_2(&VAR_27->device->ioerr_cnt, 0);

 if (!VAR_26->request_queue->rq_timeout) {
  if (VAR_26->type != VAR_17)
   FUNC_4(VAR_26->request_queue, VAR_15);
  else
   FUNC_4(VAR_26->request_queue,
          VAR_14);
 }

 FUNC_10(&VAR_27->dev);
 VAR_27->dev.parent = VAR_25;
 VAR_27->dev.class = &VAR_20;
 FUNC_7(&VAR_27->dev, "%s", FUNC_5(VAR_25));

 VAR_30 = FUNC_8(&VAR_27->dev);
 if (VAR_30)
  goto out_free_index;

 FUNC_11(VAR_25);
 FUNC_6(VAR_25, VAR_27);

 VAR_28->major = FUNC_22((VAR_29 & 0xf0) >> 4);
 VAR_28->first_minor = ((VAR_29 & 0xf) << 4) | (VAR_29 & 0xfff00);

 VAR_28->fops = &VAR_21;
 VAR_28->private_data = &VAR_27->driver;
 VAR_28->queue = VAR_27->device->request_queue;


 VAR_26->sector_size = 512;
 VAR_27->capacity = 0;
 VAR_27->media_present = 1;
 VAR_27->write_prot = 0;
 VAR_27->cache_override = 0;
 VAR_27->WCE = 0;
 VAR_27->RCD = 0;
 VAR_27->ATO = 0;
 VAR_27->first_scan = 1;
 VAR_27->max_medium_access_timeouts = VAR_12;

 FUNC_24(VAR_28);

 VAR_28->flags = VAR_6;
 if (VAR_26->removable) {
  VAR_28->flags |= VAR_7;
  VAR_28->events |= VAR_2;
  VAR_28->event_flags = VAR_0 | VAR_1;
 }

 FUNC_3(VAR_26->request_queue, VAR_25);
 FUNC_9(VAR_25, VAR_28, ((void*)0));
 if (VAR_27->capacity)
  FUNC_20(VAR_27);

 FUNC_24(VAR_28);

 if (VAR_27->security) {
  VAR_27->opal_dev = FUNC_14(VAR_26, &VAR_23);
  if (VAR_27->opal_dev)
   FUNC_23(VAR_10, VAR_27, "supports TCG Opal\n");
 }

 FUNC_23(VAR_10, VAR_27, "Attached SCSI %sdisk\n",
    VAR_26->removable ? "removable " : "");
 FUNC_19(VAR_26);

 return 0;

 out_free_index:
 FUNC_13(&VAR_22, VAR_29);
 out_put:
 FUNC_17(VAR_28);
 out_free:
 FUNC_15(VAR_27);
 out:
 FUNC_19(VAR_26);
 return VAR_30;
}
