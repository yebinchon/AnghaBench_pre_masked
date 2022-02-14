
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sense_hdr {scalar_t__ sense_key; int asc; scalar_t__ ascq; } ;
struct scsi_device {int inquiry_len; unsigned char scsi_level; int lun_in_cdb; TYPE_2__* host; TYPE_1__* sdev_target; } ;
typedef int blist_flags_t ;
struct TYPE_4__ {int short_inquiry; int no_scsi2_lun_in_cdb; } ;
struct TYPE_3__ {int scsi_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct scsi_device*,unsigned char*,int ,unsigned char*,int,struct scsi_sense_hdr*,int,int,int*) ;
 int FUNC_5 (struct scsi_device*,unsigned char*,unsigned char*) ;
 int VAR_11 ;
 int FUNC_6 (unsigned char*,int) ;
 scalar_t__ FUNC_7 (struct scsi_sense_hdr*) ;
 int FUNC_8 (int ,struct scsi_device*,char*,...) ;
 int FUNC_9 (int ,TYPE_2__*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct scsi_device *VAR_12, unsigned char *VAR_13,
     int VAR_14, blist_flags_t *VAR_15)
{
 unsigned char VAR_16[VAR_7];
 int VAR_17, VAR_18, VAR_19;
 int VAR_20 = 0;
 int VAR_21, VAR_22, VAR_23;
 struct scsi_sense_hdr VAR_24;

 *VAR_15 = 0;




 VAR_17 = VAR_12->inquiry_len ? VAR_12->inquiry_len : 36;
 VAR_18 = VAR_17;
 VAR_21 = 1;

 next_pass:
 FUNC_0(3, FUNC_8(VAR_6, VAR_12,
    "scsi scan: INQUIRY pass %d length %d\n",
    VAR_21, VAR_18));


 for (VAR_22 = 0; VAR_22 < 3; ++VAR_22) {
  int VAR_25;

  FUNC_2(VAR_16, 0, 6);
  VAR_16[0] = VAR_5;
  VAR_16[4] = (unsigned char) VAR_18;

  FUNC_2(VAR_13, 0, VAR_18);

  VAR_23 = FUNC_4(VAR_12, VAR_16, VAR_1,
       VAR_13, VAR_18, &VAR_24,
       VAR_4 / 2 + VAR_4 * VAR_11, 3,
       &VAR_25);

  FUNC_0(3, FUNC_8(VAR_6, VAR_12,
    "scsi scan: INQUIRY %s with code 0x%x\n",
    VAR_23 ? "failed" : "successful", VAR_23));

  if (VAR_23) {






   if (FUNC_1(VAR_23) == VAR_2 &&
       FUNC_7(&VAR_24)) {
    if ((VAR_24.sense_key == VAR_10) &&
        ((VAR_24.asc == 0x28) ||
         (VAR_24.asc == 0x29)) &&
        (VAR_24.ascq == 0))
     continue;
   }
  } else {





   if (VAR_25 == VAR_18)
    continue;
  }
  break;
 }

 if (VAR_23 == 0) {
  FUNC_6(&VAR_13[8], 8);
  FUNC_6(&VAR_13[16], 16);
  FUNC_6(&VAR_13[32], 4);

  VAR_20 = VAR_13[4] + 5;
  if (VAR_20 > 255)
   VAR_20 = VAR_17;
  *VAR_15 = FUNC_5(VAR_12, &VAR_13[8],
    &VAR_13[16]);



  if (VAR_21 == 1) {
   if (VAR_0 & *VAR_15)
    VAR_19 = 36;
   else if (VAR_12->inquiry_len)
    VAR_19 = VAR_12->inquiry_len;
   else
    VAR_19 = VAR_20;


   if (VAR_19 > VAR_18) {
    VAR_18 = VAR_19;
    VAR_21 = 2;
    goto next_pass;
   }
  }

 } else if (VAR_21 == 2) {
  FUNC_8(VAR_6, VAR_12,
       "scsi scan: %d byte inquiry failed.  "
       "Consider BLIST_INQUIRY_36 for this device\n",
       VAR_18);



  VAR_18 = VAR_17;
  VAR_21 = 3;
  goto next_pass;
 }



 if (VAR_23)
  return -VAR_3;


 VAR_12->inquiry_len = FUNC_3(VAR_18, VAR_20);
 if (VAR_12->inquiry_len < 36) {
  if (!VAR_12->host->short_inquiry) {
   FUNC_9(VAR_6, VAR_12->host,
        "scsi scan: INQUIRY result too short (%d),"
        " using 36\n", VAR_12->inquiry_len);
   VAR_12->host->short_inquiry = 1;
  }
  VAR_12->inquiry_len = 36;
 }
 VAR_12->scsi_level = VAR_13[2] & 0x07;
 if (VAR_12->scsi_level >= 2 ||
     (VAR_12->scsi_level == 1 && (VAR_13[3] & 0x0f) == 1))
  VAR_12->scsi_level++;
 VAR_12->sdev_target->scsi_level = VAR_12->scsi_level;





 VAR_12->lun_in_cdb = 0;
 if (VAR_12->scsi_level <= VAR_8 &&
     VAR_12->scsi_level != VAR_9 &&
     !VAR_12->host->no_scsi2_lun_in_cdb)
  VAR_12->lun_in_cdb = 1;

 return 0;
}
