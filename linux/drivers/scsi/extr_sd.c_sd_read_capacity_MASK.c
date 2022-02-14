
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int capacity; struct scsi_device* device; int physical_block_size; } ;
struct scsi_device {int sector_size; int use_16_for_rw; int request_queue; scalar_t__ guess_capacity; scalar_t__ fix_capacity; scalar_t__ try_rc_10_first; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scsi_disk*,struct scsi_device*,unsigned char*) ;
 int FUNC_3 (struct scsi_disk*,struct scsi_device*,unsigned char*) ;
 int FUNC_4 (int ,struct scsi_disk*,char*,...) ;
 scalar_t__ FUNC_5 (struct scsi_device*) ;

__attribute__((used)) static void
FUNC_6(struct scsi_disk *VAR_4, unsigned char *VAR_5)
{
 int VAR_6;
 struct scsi_device *VAR_7 = VAR_4->device;

 if (FUNC_5(VAR_7)) {
  VAR_6 = FUNC_3(VAR_4, VAR_7, VAR_5);
  if (VAR_6 == -VAR_1)
   goto got_data;
  if (VAR_6 == -VAR_0)
   return;
  if (VAR_6 < 0)
   VAR_6 = FUNC_2(VAR_4, VAR_7, VAR_5);
  if (VAR_6 < 0)
   return;
 } else {
  VAR_6 = FUNC_2(VAR_4, VAR_7, VAR_5);
  if (VAR_6 == -VAR_1)
   goto got_data;
  if (VAR_6 < 0)
   return;
  if ((sizeof(VAR_4->capacity) > 4) &&
      (VAR_4->capacity > 0xffffffffULL)) {
   int VAR_8 = VAR_6;
   FUNC_4(VAR_3, VAR_4, "Very big device. "
     "Trying to use READ CAPACITY(16).\n");
   VAR_6 = FUNC_3(VAR_4, VAR_7, VAR_5);
   if (VAR_6 < 0) {
    FUNC_4(VAR_3, VAR_4,
     "Using 0xffffffff as device size\n");
    VAR_4->capacity = 1 + (sector_t) 0xffffffff;
    VAR_6 = VAR_8;
    goto got_data;
   }

   VAR_7->try_rc_10_first = 0;
  }
 }
 if (VAR_7->fix_capacity ||
     (VAR_7->guess_capacity && (VAR_4->capacity & 0x01))) {
  FUNC_4(VAR_2, VAR_4, "Adjusting the sector count "
    "from its reported value: %llu\n",
    (unsigned long long) VAR_4->capacity);
  --VAR_4->capacity;
 }

got_data:
 if (VAR_6 == 0) {
  VAR_6 = 512;
  FUNC_4(VAR_3, VAR_4, "Sector size 0 reported, "
     "assuming 512.\n");
 }

 if (VAR_6 != 512 &&
     VAR_6 != 1024 &&
     VAR_6 != 2048 &&
     VAR_6 != 4096) {
  FUNC_4(VAR_3, VAR_4, "Unsupported sector size %d.\n",
     VAR_6);






  VAR_4->capacity = 0;






  VAR_6 = 512;
 }
 FUNC_0(VAR_7->request_queue, VAR_6);
 FUNC_1(VAR_7->request_queue,
          VAR_4->physical_block_size);
 VAR_4->device->sector_size = VAR_6;

 if (VAR_4->capacity > 0xffffffff)
  VAR_7->use_16_for_rw = 1;

}
