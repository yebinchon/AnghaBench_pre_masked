
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_disk {unsigned long long capacity; int physical_block_size; unsigned char rc_basis; int lbpme; int lbprz; scalar_t__ first_scan; } ;
struct scsi_device {int request_queue; scalar_t__ no_read_capacity_16; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (unsigned char*) ;
 unsigned long long FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (struct scsi_disk*,struct scsi_sense_hdr*) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (struct scsi_disk*,struct scsi_device*,struct scsi_sense_hdr*,int,int) ;
 int FUNC_6 (struct scsi_device*,unsigned char*,int ,unsigned char*,int,struct scsi_sense_hdr*,int ,int ,int *) ;
 int FUNC_7 (struct scsi_sense_hdr*) ;
 int FUNC_8 (struct scsi_disk*,int ) ;
 int FUNC_9 (struct scsi_disk*,char*,int) ;
 int FUNC_10 (int ,struct scsi_disk*,char*,unsigned int) ;
 scalar_t__ FUNC_11 (struct scsi_disk*,unsigned char*) ;

__attribute__((used)) static int FUNC_12(struct scsi_disk *VAR_13, struct scsi_device *VAR_14,
      unsigned char *VAR_15)
{
 unsigned char VAR_16[16];
 struct scsi_sense_hdr VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 int VAR_20 = 3, VAR_21 = VAR_6;
 unsigned int VAR_22;
 unsigned long long VAR_23;
 unsigned VAR_24;

 if (VAR_14->no_read_capacity_16)
  return -VAR_1;

 do {
  FUNC_4(VAR_16, 0, 16);
  VAR_16[0] = VAR_11;
  VAR_16[1] = VAR_7;
  VAR_16[13] = VAR_5;
  FUNC_4(VAR_15, 0, VAR_5);

  VAR_19 = FUNC_6(VAR_14, VAR_16, VAR_0,
     VAR_15, VAR_5, &VAR_17,
     VAR_10, VAR_9, ((void*)0));

  if (FUNC_3(VAR_13, &VAR_17))
   return -VAR_2;

  if (VAR_19) {
   VAR_18 = FUNC_7(&VAR_17);
   if (VAR_18 &&
       VAR_17.sense_key == VAR_3 &&
       (VAR_17.asc == 0x20 || VAR_17.asc == 0x24) &&
       VAR_17.ascq == 0x00)



    return -VAR_1;
   if (VAR_18 &&
       VAR_17.sense_key == VAR_12 &&
       VAR_17.asc == 0x29 && VAR_17.ascq == 0x00)


    if (--VAR_21 > 0)
     continue;
  }
  VAR_20--;

 } while (VAR_19 && VAR_20);

 if (VAR_19) {
  FUNC_9(VAR_13, "Read Capacity(16) failed", VAR_19);
  FUNC_5(VAR_13, VAR_14, &VAR_17, VAR_18, VAR_19);
  return -VAR_1;
 }

 VAR_24 = FUNC_1(&VAR_15[8]);
 VAR_23 = FUNC_2(&VAR_15[0]);

 if (FUNC_11(VAR_13, VAR_15) < 0) {
  VAR_13->capacity = 0;
  return -VAR_2;
 }


 VAR_13->physical_block_size = (1 << (VAR_15[13] & 0xf)) * VAR_24;


 VAR_13->rc_basis = (VAR_15[12] >> 4) & 0x3;


 VAR_22 = ((VAR_15[14] & 0x3f) << 8 | VAR_15[15]) * VAR_24;
 FUNC_0(VAR_14->request_queue, VAR_22);
 if (VAR_22 && VAR_13->first_scan)
  FUNC_10(VAR_4, VAR_13,
     "physical block alignment offset: %u\n", VAR_22);

 if (VAR_15[14] & 0x80) {
  VAR_13->lbpme = 1;

  if (VAR_15[14] & 0x40)
   VAR_13->lbprz = 1;

  FUNC_8(VAR_13, VAR_8);
 }

 VAR_13->capacity = VAR_23 + 1;
 return VAR_24;
}
