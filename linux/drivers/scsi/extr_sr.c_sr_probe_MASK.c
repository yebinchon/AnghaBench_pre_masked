
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ type; int changed; int sector_size; int sdev_gendev; int request_queue; } ;
struct TYPE_2__ {int capacity; int name; struct gendisk* disk; scalar_t__ mask; struct scsi_cd* handle; int * ops; } ;
struct scsi_cd {int capacity; int media_present; int use; struct scsi_device* device; TYPE_1__ cdi; int * driver; scalar_t__ readcd_cdda; scalar_t__ readcd_known; struct gendisk* disk; int kref; } ;
struct gendisk {int first_minor; int flags; int events; int event_flags; int queue; int ** private_data; int * fops; int disk_name; int major; } ;
struct device {int dummy; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int,int ) ;
 struct gendisk* FUNC_1 (int) ;
 int FUNC_2 (int ,struct device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct device*,struct scsi_cd*) ;
 int FUNC_5 (int *,struct gendisk*,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct scsi_cd*) ;
 int FUNC_8 (struct scsi_cd*) ;
 int FUNC_9 (int *) ;
 struct scsi_cd* FUNC_10 (int,int ) ;
 int FUNC_11 (struct gendisk*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct scsi_device*) ;
 int FUNC_14 (struct scsi_device*) ;
 int FUNC_15 (int ,struct scsi_device*,char*,int ) ;
 int FUNC_16 (struct gendisk*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,char*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_20 (struct scsi_cd*) ;
 struct scsi_device* FUNC_21 (struct device*) ;

__attribute__((used)) static int FUNC_22(struct device *VAR_22)
{
 struct scsi_device *VAR_23 = FUNC_21(VAR_22);
 struct gendisk *VAR_24;
 struct scsi_cd *VAR_25;
 int VAR_26, VAR_27;

 FUNC_13(VAR_23);
 VAR_27 = -VAR_5;
 if (VAR_23->type != VAR_15 && VAR_23->type != VAR_16)
  goto fail;

 VAR_27 = -VAR_6;
 VAR_25 = FUNC_10(sizeof(*VAR_25), VAR_10);
 if (!VAR_25)
  goto fail;

 FUNC_9(&VAR_25->kref);

 VAR_24 = FUNC_1(1);
 if (!VAR_24)
  goto fail_free;

 FUNC_17(&VAR_20);
 VAR_26 = FUNC_6(VAR_19, VAR_13);
 if (VAR_26 == VAR_13) {
  FUNC_18(&VAR_20);
  VAR_27 = -VAR_4;
  goto fail_put;
 }
 FUNC_0(VAR_26, VAR_19);
 FUNC_18(&VAR_20);

 VAR_24->major = VAR_12;
 VAR_24->first_minor = VAR_26;
 FUNC_19(VAR_24->disk_name, "sr%d", VAR_26);
 VAR_24->fops = &VAR_17;
 VAR_24->flags = VAR_8 | VAR_7;
 VAR_24->events = VAR_3 | VAR_0;
 VAR_24->event_flags = VAR_1 | VAR_2;

 FUNC_3(VAR_23->request_queue, VAR_14);

 VAR_25->device = VAR_23;
 VAR_25->disk = VAR_24;
 VAR_25->driver = &VAR_21;
 VAR_25->disk = VAR_24;
 VAR_25->capacity = 0x1fffff;
 VAR_25->device->changed = 1;
 VAR_25->media_present = 1;
 VAR_25->use = 1;
 VAR_25->readcd_known = 0;
 VAR_25->readcd_cdda = 0;

 VAR_25->cdi.ops = &VAR_18;
 VAR_25->cdi.handle = VAR_25;
 VAR_25->cdi.mask = 0;
 VAR_25->cdi.capacity = 1;
 FUNC_19(VAR_25->cdi.name, "sr%d", VAR_26);

 VAR_23->sector_size = 2048;


 FUNC_7(VAR_25);
 FUNC_20(VAR_25);

 FUNC_16(VAR_24, VAR_25->capacity);
 VAR_24->private_data = &VAR_25->driver;
 VAR_24->queue = VAR_23->request_queue;
 VAR_25->cdi.disk = VAR_24;

 if (FUNC_12(&VAR_25->cdi))
  goto fail_put;





 FUNC_2(VAR_23->request_queue, VAR_22);

 FUNC_4(VAR_22, VAR_25);
 VAR_24->flags |= VAR_9;
 FUNC_5(&VAR_23->sdev_gendev, VAR_24, ((void*)0));

 FUNC_15(VAR_11, VAR_23,
      "Attached scsi CD-ROM %s\n", VAR_25->cdi.name);
 FUNC_14(VAR_25->device);

 return 0;

fail_put:
 FUNC_11(VAR_24);
fail_free:
 FUNC_8(VAR_25);
fail:
 FUNC_14(VAR_23);
 return VAR_27;
}
