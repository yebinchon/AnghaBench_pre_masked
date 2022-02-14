
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct t10_pi_tuple {int dummy; } ;
struct scsi_disk {scalar_t__ protection_type; int ATO; struct scsi_device* device; struct gendisk* disk; } ;
struct scsi_device {int host; } ;
struct gendisk {int dummy; } ;
struct blk_integrity {int tuple_size; int tag_size; int flags; TYPE_1__* profile; } ;
typedef int bi ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct gendisk*,struct blk_integrity*) ;
 int FUNC_1 (struct blk_integrity*,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct scsi_disk*,char*,int) ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;

void FUNC_6(struct scsi_disk *VAR_9)
{
 struct scsi_device *VAR_10 = VAR_9->device;
 struct gendisk *VAR_11 = VAR_9->disk;
 u8 VAR_12 = VAR_9->protection_type;
 struct blk_integrity VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_2(VAR_10->host, VAR_12);
 VAR_15 = FUNC_3(VAR_10->host, VAR_12);

 if (!VAR_15 && FUNC_3(VAR_10->host, 0)) {
  VAR_14 = 0; VAR_15 = 1;
 }

 if (!VAR_15)
  return;

 FUNC_1(&VAR_13, 0, sizeof(VAR_13));


 if (FUNC_4(VAR_9->device->host) & VAR_3) {
  if (VAR_12 == VAR_4)
   VAR_13.profile = &VAR_8;
  else
   VAR_13.profile = &VAR_6;

  VAR_13.flags |= VAR_1;
 } else
  if (VAR_12 == VAR_4)
   VAR_13.profile = &VAR_7;
  else
   VAR_13.profile = &VAR_5;

 VAR_13.tuple_size = sizeof(struct t10_pi_tuple);
 FUNC_5(VAR_2, VAR_9,
    "Enabling DIX %s protection\n", VAR_13.profile->name);

 if (VAR_14 && VAR_12) {
  VAR_13.flags |= VAR_0;

  if (!VAR_9->ATO)
   goto out;

  if (VAR_12 == VAR_4)
   VAR_13.tag_size = sizeof(u16) + sizeof(u32);
  else
   VAR_13.tag_size = sizeof(u16);

  FUNC_5(VAR_2, VAR_9, "DIF application tag size %u\n",
     VAR_13.tag_size);
 }

out:
 FUNC_0(VAR_11, &VAR_13);
}
