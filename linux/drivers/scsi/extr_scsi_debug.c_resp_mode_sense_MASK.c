
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sdebug_dev_info {int target; TYPE_3__* sdbg_host; } ;
struct scsi_cmnd {unsigned char* cmnd; TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__* shost; } ;
struct TYPE_5__ {int host_no; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned char*,int ) ;
 int FUNC_1 () ;
 unsigned char FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct scsi_cmnd*,int ,int ,int ) ;
 int FUNC_6 (struct scsi_cmnd*,int ,int,int) ;
 int FUNC_7 (int,unsigned char*) ;
 int FUNC_8 (int,unsigned char*) ;
 int FUNC_9 (int ,unsigned char*) ;
 int FUNC_10 (unsigned char*,int,int) ;
 int FUNC_11 (unsigned char*,int,int) ;
 int FUNC_12 (unsigned char*,int,int) ;
 int FUNC_13 (unsigned char*,int,int) ;
 int FUNC_14 (unsigned char*,int,int) ;
 int FUNC_15 (unsigned char*,int,int) ;
 int FUNC_16 (unsigned char*,int,int,int) ;
 int FUNC_17 (unsigned char*,int,int) ;
 int FUNC_18 (unsigned char*,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_19(struct scsi_cmnd *VAR_11,
      struct sdebug_dev_info *VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned char VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22 = VAR_11->device->id;
 unsigned char *VAR_23;
 unsigned char VAR_24[VAR_3];
 unsigned char *VAR_25 = VAR_11->cmnd;
 bool VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

 VAR_26 = !!(VAR_25[1] & 0x8);
 VAR_13 = (VAR_25[2] & 0xc0) >> 6;
 VAR_14 = VAR_25[2] & 0x3f;
 VAR_15 = VAR_25[3];
 VAR_28 = (VAR_1 == VAR_25[0]);
 VAR_27 = VAR_28 ? 0 : !!(VAR_25[1] & 0x10);
 VAR_29 = (VAR_8 == VAR_5);
 if (VAR_29 && !VAR_26)
  VAR_16 = VAR_27 ? 16 : 8;
 else
  VAR_16 = 0;
 VAR_18 = VAR_28 ? VAR_25[4] : FUNC_2(VAR_25 + 7);
 FUNC_3(VAR_24, 0, VAR_3);
 if (0x3 == VAR_13) {
  FUNC_5(VAR_11, VAR_0, VAR_2, 0);
  return VAR_6;
 }
 VAR_21 = ((VAR_12->sdbg_host->shost->host_no + 1) * 2000) +
   (VAR_12->target * 1000) - 3;

 if (VAR_29) {
  VAR_17 = 0x10;
  if (VAR_10)
   VAR_17 |= 0x80;
 } else
  VAR_17 = 0x0;
 if (VAR_28) {
  VAR_24[2] = VAR_17;
  VAR_24[3] = VAR_16;
  VAR_19 = 4;
 } else {
  VAR_24[3] = VAR_17;
  if (16 == VAR_16)
   VAR_24[4] = 0x1;
  VAR_24[7] = VAR_16;
  VAR_19 = 8;
 }
 VAR_23 = VAR_24 + VAR_19;
 if ((VAR_16 > 0) && (!VAR_7))
  VAR_7 = FUNC_1();

 if (8 == VAR_16) {
  if (VAR_7 > 0xfffffffe)
   FUNC_8(0xffffffff, VAR_23 + 0);
  else
   FUNC_8(VAR_7, VAR_23 + 0);
  FUNC_7(VAR_9, VAR_23 + 6);
  VAR_19 += VAR_16;
  VAR_23 = VAR_24 + VAR_19;
 } else if (16 == VAR_16) {
  FUNC_9((u64)VAR_7, VAR_23 + 0);
  FUNC_8(VAR_9, VAR_23 + 12);
  VAR_19 += VAR_16;
  VAR_23 = VAR_24 + VAR_19;
 }

 if ((VAR_15 > 0x0) && (VAR_15 < 0xff) && (0x19 != VAR_14)) {

  FUNC_6(VAR_11, VAR_4, 3, -1);
  return VAR_6;
 }
 VAR_30 = 0;

 switch (VAR_14) {
 case 0x1:
  VAR_20 = FUNC_13(VAR_23, VAR_13, VAR_22);
  VAR_19 += VAR_20;
  break;
 case 0x2:
  VAR_20 = FUNC_12(VAR_23, VAR_13, VAR_22);
  VAR_19 += VAR_20;
  break;
 case 0x3:
  if (VAR_29) {
   VAR_20 = FUNC_14(VAR_23, VAR_13, VAR_22);
   VAR_19 += VAR_20;
  } else
   VAR_30 = 1;
  break;
 case 0x8:
  if (VAR_29) {
   VAR_20 = FUNC_10(VAR_23, VAR_13, VAR_22);
   VAR_19 += VAR_20;
  } else
   VAR_30 = 1;
  break;
 case 0xa:
  VAR_20 = FUNC_11(VAR_23, VAR_13, VAR_22);
  VAR_19 += VAR_20;
  break;
 case 0x19:
  if ((VAR_15 > 0x2) && (VAR_15 < 0xff)) {
   FUNC_6(VAR_11, VAR_4, 3, -1);
   return VAR_6;
  }
  VAR_20 = 0;
  if ((0x0 == VAR_15) || (0xff == VAR_15))
   VAR_20 += FUNC_17(VAR_23 + VAR_20, VAR_13, VAR_22);
  if ((0x1 == VAR_15) || (0xff == VAR_15))
   VAR_20 += FUNC_16(VAR_23 + VAR_20, VAR_13, VAR_22,
        VAR_21);
  if ((0x2 == VAR_15) || (0xff == VAR_15))
   VAR_20 += FUNC_18(VAR_23 + VAR_20, VAR_13);
  VAR_19 += VAR_20;
  break;
 case 0x1c:
  VAR_20 = FUNC_15(VAR_23, VAR_13, VAR_22);
  VAR_19 += VAR_20;
  break;
 case 0x3f:
  if ((0 == VAR_15) || (0xff == VAR_15)) {
   VAR_20 = FUNC_13(VAR_23, VAR_13, VAR_22);
   VAR_20 += FUNC_12(VAR_23 + VAR_20, VAR_13, VAR_22);
   if (VAR_29) {
    VAR_20 += FUNC_14(VAR_23 + VAR_20, VAR_13,
            VAR_22);
    VAR_20 += FUNC_10(VAR_23 + VAR_20, VAR_13,
             VAR_22);
   }
   VAR_20 += FUNC_11(VAR_23 + VAR_20, VAR_13, VAR_22);
   VAR_20 += FUNC_17(VAR_23 + VAR_20, VAR_13, VAR_22);
   if (0xff == VAR_15) {
    VAR_20 += FUNC_16(VAR_23 + VAR_20, VAR_13,
        VAR_22, VAR_21);
    VAR_20 += FUNC_18(VAR_23 + VAR_20, VAR_13);
   }
   VAR_20 += FUNC_15(VAR_23 + VAR_20, VAR_13, VAR_22);
   VAR_19 += VAR_20;
  } else {
   FUNC_6(VAR_11, VAR_4, 3, -1);
   return VAR_6;
  }
  break;
 default:
  VAR_30 = 1;
  break;
 }
 if (VAR_30) {
  FUNC_6(VAR_11, VAR_4, 2, 5);
  return VAR_6;
 }
 if (VAR_28)
  VAR_24[0] = VAR_19 - 1;
 else
  FUNC_7((VAR_19 - 2), VAR_24 + 0);
 return FUNC_0(VAR_11, VAR_24, FUNC_4(VAR_18, VAR_19));
}
