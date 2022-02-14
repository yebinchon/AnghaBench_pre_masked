
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbat_info {int ssize; unsigned long sectors; unsigned char sense_key; unsigned char sense_asc; unsigned char sense_ascq; } ;
struct us_data {unsigned char* iobuf; scalar_t__ extra; } ;
struct scsi_cmnd {scalar_t__* cmnd; } ;
typedef int inquiry_response ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct us_data*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (struct us_data*,char*,...) ;
 int FUNC_5 (unsigned char*,int,struct scsi_cmnd*) ;
 int FUNC_6 (struct us_data*) ;
 int FUNC_7 (struct us_data*,struct usbat_info*) ;
 int FUNC_8 (struct us_data*,struct usbat_info*) ;
 int FUNC_9 (struct us_data*,struct usbat_info*,unsigned long,unsigned long) ;
 int FUNC_10 (struct us_data*,struct usbat_info*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd * VAR_13, struct us_data *VAR_14)
{
 int VAR_15;
 struct usbat_info *VAR_16 = (struct usbat_info *) (VAR_14->extra);
 unsigned long VAR_17, VAR_18;
 unsigned char *VAR_19 = VAR_14->iobuf;
 static unsigned char VAR_20[36] = {
  0x00, 0x80, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x00
 };

 if (VAR_13->cmnd[0] == VAR_1) {
  FUNC_4(VAR_14, "INQUIRY - Returning bogus response\n");
  FUNC_2(VAR_19, VAR_20, sizeof(VAR_20));
  FUNC_1(VAR_14, VAR_19, 36);
  return VAR_10;
 }

 if (VAR_13->cmnd[0] == VAR_5) {
  VAR_15 = FUNC_7(VAR_14, VAR_16);
  if (VAR_15 != VAR_10)
   return VAR_15;

  VAR_15 = FUNC_8(VAR_14, VAR_16);
  if (VAR_15 != VAR_10)
   return VAR_15;


  VAR_16->ssize = 0x200;
  FUNC_4(VAR_14, "READ_CAPACITY: %ld sectors, %ld bytes per sector\n",
        VAR_16->sectors, VAR_16->ssize);






  ((__be32 *) VAR_19)[0] = FUNC_0(VAR_16->sectors - 1);
  ((__be32 *) VAR_19)[1] = FUNC_0(VAR_16->ssize);
  FUNC_5(VAR_19, 8, VAR_13);

  return VAR_10;
 }

 if (VAR_13->cmnd[0] == VAR_2) {
  FUNC_4(VAR_14, "Gah! MODE_SELECT_10\n");
  return VAR_8;
 }

 if (VAR_13->cmnd[0] == VAR_3) {
  VAR_17 = ((u32)(VAR_13->cmnd[2]) << 24) | ((u32)(VAR_13->cmnd[3]) << 16) |
    ((u32)(VAR_13->cmnd[4]) << 8) | ((u32)(VAR_13->cmnd[5]));

  VAR_18 = ((u32)(VAR_13->cmnd[7]) << 8) | ((u32)(VAR_13->cmnd[8]));

  FUNC_4(VAR_14, "READ_10: read block 0x%04lx  count %ld\n",
        VAR_17, VAR_18);
  return FUNC_9(VAR_14, VAR_16, VAR_17, VAR_18);
 }

 if (VAR_13->cmnd[0] == VAR_4) {



  VAR_17 = ((u32)(VAR_13->cmnd[2]) << 24) | ((u32)(VAR_13->cmnd[3]) << 16) |
          ((u32)(VAR_13->cmnd[4]) << 8) | ((u32)(VAR_13->cmnd[5]));

  VAR_18 = ((u32)(VAR_13->cmnd[6]) << 24) | ((u32)(VAR_13->cmnd[7]) << 16) |
           ((u32)(VAR_13->cmnd[8]) << 8) | ((u32)(VAR_13->cmnd[9]));

  FUNC_4(VAR_14, "READ_12: read block 0x%04lx  count %ld\n",
        VAR_17, VAR_18);
  return FUNC_9(VAR_14, VAR_16, VAR_17, VAR_18);
 }

 if (VAR_13->cmnd[0] == VAR_11) {
  VAR_17 = ((u32)(VAR_13->cmnd[2]) << 24) | ((u32)(VAR_13->cmnd[3]) << 16) |
          ((u32)(VAR_13->cmnd[4]) << 8) | ((u32)(VAR_13->cmnd[5]));

  VAR_18 = ((u32)(VAR_13->cmnd[7]) << 8) | ((u32)(VAR_13->cmnd[8]));

  FUNC_4(VAR_14, "WRITE_10: write block 0x%04lx  count %ld\n",
        VAR_17, VAR_18);
  return FUNC_10(VAR_14, VAR_16, VAR_17, VAR_18);
 }

 if (VAR_13->cmnd[0] == VAR_12) {



  VAR_17 = ((u32)(VAR_13->cmnd[2]) << 24) | ((u32)(VAR_13->cmnd[3]) << 16) |
          ((u32)(VAR_13->cmnd[4]) << 8) | ((u32)(VAR_13->cmnd[5]));

  VAR_18 = ((u32)(VAR_13->cmnd[6]) << 24) | ((u32)(VAR_13->cmnd[7]) << 16) |
           ((u32)(VAR_13->cmnd[8]) << 8) | ((u32)(VAR_13->cmnd[9]));

  FUNC_4(VAR_14, "WRITE_12: write block 0x%04lx  count %ld\n",
        VAR_17, VAR_18);
  return FUNC_10(VAR_14, VAR_16, VAR_17, VAR_18);
 }


 if (VAR_13->cmnd[0] == VAR_7) {
  FUNC_4(VAR_14, "TEST_UNIT_READY\n");

  VAR_15 = FUNC_7(VAR_14, VAR_16);
  if (VAR_15 != VAR_10)
   return VAR_15;

  return FUNC_6(VAR_14);
 }

 if (VAR_13->cmnd[0] == VAR_6) {
  FUNC_4(VAR_14, "REQUEST_SENSE\n");

  FUNC_3(VAR_19, 0, 18);
  VAR_19[0] = 0xF0;
  VAR_19[2] = VAR_16->sense_key;
  VAR_19[7] = 11;
  VAR_19[12] = VAR_16->sense_asc;
  VAR_19[13] = VAR_16->sense_ascq;
  FUNC_5(VAR_19, 18, VAR_13);

  return VAR_10;
 }

 if (VAR_13->cmnd[0] == VAR_0) {




  return VAR_10;
 }

 FUNC_4(VAR_14, "Gah! Unknown command: %d (0x%x)\n",
       VAR_13->cmnd[0], VAR_13->cmnd[0]);
 VAR_16->sense_key = 0x05;
 VAR_16->sense_asc = 0x20;
 VAR_16->sense_ascq = 0x00;
 return VAR_9;
}
