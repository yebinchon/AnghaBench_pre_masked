
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_disk {scalar_t__ zone_blocks; unsigned int nr_zones; scalar_t__ capacity; scalar_t__ first_scan; TYPE_1__* device; struct gendisk* disk; } ;
struct gendisk {TYPE_2__* queue; } ;
struct TYPE_6__ {unsigned int nr_zones; } ;
struct TYPE_5__ {int use_16_for_rw; scalar_t__ use_10_for_rw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct gendisk*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 unsigned int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (struct scsi_disk*) ;
 int FUNC_8 (struct scsi_disk*,unsigned char*) ;
 int FUNC_9 (struct scsi_disk*,scalar_t__*) ;

int FUNC_10(struct scsi_disk *VAR_2, unsigned char *VAR_3)
{
 struct gendisk *VAR_4 = VAR_2->disk;
 unsigned int VAR_5;
 u32 VAR_6 = 0;
 int VAR_7;

 if (!FUNC_7(VAR_2))




  return 0;


 VAR_7 = FUNC_8(VAR_2, VAR_3);
 if (VAR_7)
  goto err;





 VAR_7 = FUNC_9(VAR_2, &VAR_6);
 if (VAR_7 != 0)
  goto err;


 FUNC_0(VAR_2->disk->queue,
   FUNC_5(VAR_2->device, VAR_6));
 FUNC_1(VAR_1, VAR_2->disk->queue);
 FUNC_2(VAR_2->disk->queue,
          VAR_0);
 VAR_5 = FUNC_6(VAR_2->capacity, VAR_6) >> FUNC_4(VAR_6);


 VAR_2->device->use_16_for_rw = 1;
 VAR_2->device->use_10_for_rw = 0;






 if (VAR_2->first_scan) {
  VAR_2->zone_blocks = VAR_6;
  VAR_2->nr_zones = VAR_5;
  return 0;
 }

 if (VAR_2->zone_blocks != VAR_6 ||
     VAR_2->nr_zones != VAR_5 ||
     VAR_4->queue->nr_zones != VAR_5) {
  VAR_7 = FUNC_3(VAR_4);
  if (VAR_7 != 0)
   goto err;
  VAR_2->zone_blocks = VAR_6;
  VAR_2->nr_zones = VAR_5;
 }

 return 0;

err:
 VAR_2->capacity = 0;

 return VAR_7;
}
