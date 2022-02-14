
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_disk {int capacity; unsigned int physical_block_size; } ;
struct scsi_device {scalar_t__ no_read_capacity_16; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (struct scsi_disk*,struct scsi_sense_hdr*) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (struct scsi_disk*,struct scsi_device*,struct scsi_sense_hdr*,int,int) ;
 int FUNC_4 (struct scsi_device*,unsigned char*,int ,unsigned char*,int,struct scsi_sense_hdr*,int ,int ,int *) ;
 int FUNC_5 (struct scsi_sense_hdr*) ;
 int FUNC_6 (struct scsi_disk*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct scsi_disk *VAR_8, struct scsi_device *VAR_9,
      unsigned char *VAR_10)
{
 unsigned char VAR_11[16];
 struct scsi_sense_hdr VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 3, VAR_16 = VAR_4;
 sector_t VAR_17;
 unsigned VAR_18;

 do {
  VAR_11[0] = VAR_3;
  FUNC_2(&VAR_11[1], 0, 9);
  FUNC_2(VAR_10, 0, 8);

  VAR_14 = FUNC_4(VAR_9, VAR_11, VAR_0,
     VAR_10, 8, &VAR_12,
     VAR_6, VAR_5, ((void*)0));

  if (FUNC_1(VAR_8, &VAR_12))
   return -VAR_2;

  if (VAR_14) {
   VAR_13 = FUNC_5(&VAR_12);
   if (VAR_13 &&
       VAR_12.sense_key == VAR_7 &&
       VAR_12.asc == 0x29 && VAR_12.ascq == 0x00)


    if (--VAR_16 > 0)
     continue;
  }
  VAR_15--;

 } while (VAR_14 && VAR_15);

 if (VAR_14) {
  FUNC_6(VAR_8, "Read Capacity(10) failed", VAR_14);
  FUNC_3(VAR_8, VAR_9, &VAR_12, VAR_13, VAR_14);
  return -VAR_1;
 }

 VAR_18 = FUNC_0(&VAR_10[4]);
 VAR_17 = FUNC_0(&VAR_10[0]);

 if (VAR_9->no_read_capacity_16 && (VAR_17 == 0xffffffff)) {



  VAR_8->capacity = 0;
  VAR_8->physical_block_size = VAR_18;
  return VAR_18;
 }

 VAR_8->capacity = VAR_17 + 1;
 VAR_8->physical_block_size = VAR_18;
 return VAR_18;
}
