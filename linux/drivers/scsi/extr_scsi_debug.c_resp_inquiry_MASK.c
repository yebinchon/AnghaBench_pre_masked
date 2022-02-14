
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdebug_dev_info {scalar_t__ lun; int channel; int target; int lu_name; TYPE_3__* sdbg_host; } ;
struct scsi_cmnd {unsigned char* cmnd; TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__* shost; } ;
struct TYPE_5__ {int host_no; } ;
struct TYPE_4__ {int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ VAR_11 ;
 unsigned char FUNC_2 (unsigned char*,int,int,int,char*,int,int *) ;
 unsigned char FUNC_3 (unsigned char*) ;
 unsigned char FUNC_4 (unsigned char*) ;
 unsigned char FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char FUNC_7 (unsigned char*) ;
 unsigned char FUNC_8 (unsigned char*) ;
 unsigned char FUNC_9 (unsigned char*) ;
 int FUNC_10 (unsigned char*) ;
 unsigned char* FUNC_11 (int,int ) ;
 int FUNC_12 (unsigned char*,char*,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (struct scsi_cmnd*,int ,int,int) ;
 int FUNC_15 (int,unsigned char*) ;
 int FUNC_16 (char*,int,char*,int) ;
 int FUNC_17 (int ) ;
 scalar_t__ VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 unsigned char VAR_19 ;
 char* VAR_20 ;
 scalar_t__ VAR_21 ;

__attribute__((used)) static int FUNC_18(struct scsi_cmnd *VAR_22, struct sdebug_dev_info *VAR_23)
{
 unsigned char VAR_24;
 unsigned char *VAR_25;
 unsigned char *VAR_26 = VAR_22->cmnd;
 int VAR_27, VAR_28, VAR_29;
 bool VAR_30, VAR_31;

 VAR_27 = FUNC_1(VAR_26 + 3);
 VAR_25 = FUNC_11(VAR_4, VAR_1);
 if (! VAR_25)
  return VAR_0 << 16;
 VAR_31 = (VAR_17 == VAR_7);
 VAR_30 = FUNC_17(VAR_22->device->lun);
 if (VAR_30)
  VAR_24 = VAR_9;
 else if (VAR_16 && (VAR_23->lun == VAR_3))
  VAR_24 = 0x7f;
 else
  VAR_24 = (VAR_17 & 0x1f);
 VAR_25[0] = VAR_24;
 if (0x2 & VAR_26[1]) {
  FUNC_14(VAR_22, VAR_5, 1, 1);
  FUNC_10(VAR_25);
  return VAR_10;
 } else if (0x1 & VAR_26[1]) {
  int VAR_32, VAR_33, VAR_34, VAR_35;
  char VAR_36[6];
  int VAR_37 = VAR_23->sdbg_host->shost->host_no;

  VAR_33 = (((VAR_37 + 1) & 0x7f) << 8) +
      (VAR_23->channel & 0x7f);
  if (VAR_21 == 0)
   VAR_37 = 0;
  VAR_32 = VAR_30 ? -1 : (((VAR_37 + 1) * 2000) +
       (VAR_23->target * 1000) + VAR_23->lun);
  VAR_34 = ((VAR_37 + 1) * 2000) +
     (VAR_23->target * 1000) - 3;
  VAR_35 = FUNC_16(VAR_36, 6, "%d", VAR_32);
  if (0 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_28 = 4;
   VAR_25[VAR_28++] = 0x0;
   VAR_25[VAR_28++] = 0x80;
   VAR_25[VAR_28++] = 0x83;
   VAR_25[VAR_28++] = 0x84;
   VAR_25[VAR_28++] = 0x85;
   VAR_25[VAR_28++] = 0x86;
   VAR_25[VAR_28++] = 0x87;
   VAR_25[VAR_28++] = 0x88;
   if (VAR_31) {
    VAR_25[VAR_28++] = 0x89;
    VAR_25[VAR_28++] = 0xb0;
    VAR_25[VAR_28++] = 0xb1;
    VAR_25[VAR_28++] = 0xb2;
   }
   VAR_25[3] = VAR_28 - 4;
  } else if (0x80 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_25[3] = VAR_35;
   FUNC_12(&VAR_25[4], VAR_36, VAR_35);
  } else if (0x83 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_25[3] = FUNC_2(&VAR_25[4], VAR_33,
      VAR_34, VAR_32,
      VAR_36, VAR_35,
      &VAR_23->lu_name);
  } else if (0x84 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_25[3] = FUNC_3(&VAR_25[4]);
  } else if (0x85 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_25[3] = FUNC_4(&VAR_25[4]);
  } else if (0x86 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_25[3] = 0x3c;
   if (VAR_12 == VAR_6)
    VAR_25[4] = 0x4;
   else if (VAR_11)
    VAR_25[4] = 0x5;
   else
    VAR_25[4] = 0x0;
   VAR_25[5] = 0x7;
  } else if (0x87 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_25[3] = 0x8;
   VAR_25[4] = 0x2;
   VAR_25[6] = 0x80;
   VAR_25[8] = 0x18;
   VAR_25[10] = 0x82;
  } else if (0x88 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_25[3] = FUNC_5(&VAR_25[4], VAR_34);
  } else if (VAR_31 && 0x89 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_28 = FUNC_6(&VAR_25[4]);
   FUNC_15(VAR_28, VAR_25 + 2);
  } else if (VAR_31 && 0xb0 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_25[3] = FUNC_7(&VAR_25[4]);
  } else if (VAR_31 && 0xb1 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_25[3] = FUNC_8(&VAR_25[4]);
  } else if (VAR_31 && 0xb2 == VAR_26[2]) {
   VAR_25[1] = VAR_26[2];
   VAR_25[3] = FUNC_9(&VAR_25[4]);
  } else {
   FUNC_14(VAR_22, VAR_5, 2, -1);
   FUNC_10(VAR_25);
   return VAR_10;
  }
  VAR_35 = FUNC_13(FUNC_1(VAR_25 + 2) + 4, VAR_27);
  VAR_29 = FUNC_0(VAR_22, VAR_25,
       FUNC_13(VAR_35, VAR_4));
  FUNC_10(VAR_25);
  return VAR_29;
 }

 VAR_25[1] = VAR_18 ? 0x80 : 0;
 VAR_25[2] = VAR_19;
 VAR_25[3] = 2;
 VAR_25[4] = VAR_2 - 5;
 VAR_25[5] = (int)VAR_11;
 if (VAR_21 == 0)
  VAR_25[5] |= 0x10;
 VAR_25[6] = 0x10;

 VAR_25[7] = 0xa;
 FUNC_12(&VAR_25[8], VAR_15, 8);
 FUNC_12(&VAR_25[16], VAR_13, 16);
 FUNC_12(&VAR_25[32], VAR_14, 4);

 FUNC_12(&VAR_25[36], VAR_20, 8);

 FUNC_15(0xc0, VAR_25 + 58);
 FUNC_15(0x5c0, VAR_25 + 60);
 VAR_28 = 62;
 if (VAR_31) {
  FUNC_15(0x600, VAR_25 + VAR_28);
  VAR_28 += 2;
 } else if (VAR_17 == VAR_8) {
  FUNC_15(0x525, VAR_25 + VAR_28);
  VAR_28 += 2;
 }
 FUNC_15(0x2100, VAR_25 + VAR_28);
 VAR_29 = FUNC_0(VAR_22, VAR_25,
       FUNC_13(VAR_27, VAR_2));
 FUNC_10(VAR_25);
 return VAR_29;
}
