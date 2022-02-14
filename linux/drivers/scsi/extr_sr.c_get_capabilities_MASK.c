
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {int dummy; } ;
struct scsi_mode_data {unsigned int length; int header_length; int block_descriptor_length; } ;
struct TYPE_2__ {int speed; int mask; int capacity; } ;
struct scsi_cd {int readcd_known; unsigned char readcd_cdda; int writeable; TYPE_1__ cdi; int device; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int) ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 int FUNC_3 (int ,int ,int,unsigned char*,unsigned int,int ,int,struct scsi_mode_data*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_6 (int ,struct scsi_cd*,char*,...) ;

__attribute__((used)) static void FUNC_7(struct scsi_cd *VAR_20)
{
 unsigned char *VAR_21;
 struct scsi_mode_data VAR_22;
 struct scsi_sense_hdr VAR_23;
 unsigned int VAR_24 = 128;
 int VAR_25, VAR_26;

 static const char *VAR_27[] =
 {
  "caddy",
  "tray",
  "pop-up",
  "",
  "changer",
  "cartridge changer",
  "",
  ""
 };



 VAR_21 = FUNC_2(512, VAR_13 | VAR_12);
 if (!VAR_21) {
  FUNC_6(VAR_14, VAR_20, "out of memory.\n");
  return;
 }


 FUNC_5(VAR_20->device, VAR_17, VAR_16, &VAR_23);


 VAR_25 = FUNC_3(VAR_20->device, 0, 0x2a, VAR_21, VAR_24,
        VAR_17, 3, &VAR_22, ((void*)0));

 if (!FUNC_4(VAR_25) || VAR_22.length > VAR_24 ||
     VAR_22.header_length + VAR_22.block_descriptor_length > VAR_22.length) {

  VAR_20->cdi.speed = 1;
  VAR_20->cdi.mask |= (VAR_0 | VAR_1 | VAR_4 |
     VAR_3 | VAR_5 |
     VAR_10 | VAR_11 |
     VAR_6 | VAR_7 | VAR_9);
  FUNC_1(VAR_21);
  FUNC_6(VAR_15, VAR_20, "scsi-1 drive");
  return;
 }

 VAR_26 = VAR_22.header_length + VAR_22.block_descriptor_length;
 VAR_20->cdi.speed = ((VAR_21[VAR_26 + 8] << 8) + VAR_21[VAR_26 + 9]) / 176;
 VAR_20->readcd_known = 1;
 VAR_20->readcd_cdda = VAR_21[VAR_26 + 5] & 0x01;

 FUNC_6(VAR_15, VAR_20,
    "scsi3-mmc drive: %dx/%dx %s%s%s%s%s%s\n",
    ((VAR_21[VAR_26 + 14] << 8) + VAR_21[VAR_26 + 15]) / 176,
    VAR_20->cdi.speed,
    VAR_21[VAR_26 + 3] & 0x01 ? "writer " : "",
    VAR_21[VAR_26 + 3] & 0x20 ? "dvd-ram " : "",
    VAR_21[VAR_26 + 2] & 0x02 ? "cd/rw " : "",
    VAR_21[VAR_26 + 4] & 0x20 ? "xa/form2 " : "",
    VAR_21[VAR_26 + 5] & 0x01 ? "cdda " : "",
    VAR_27[VAR_21[VAR_26 + 6] >> 5]);
 if ((VAR_21[VAR_26 + 6] >> 5) == 0)

  VAR_20->cdi.mask |= VAR_2;
 if ((VAR_21[VAR_26 + 2] & 0x8) == 0)

  VAR_20->cdi.mask |= VAR_3;
 if ((VAR_21[VAR_26 + 3] & 0x20) == 0)

  VAR_20->cdi.mask |= VAR_5;
 if ((VAR_21[VAR_26 + 3] & 0x10) == 0)

  VAR_20->cdi.mask |= VAR_4;
 if ((VAR_21[VAR_26 + 3] & 0x2) == 0)

  VAR_20->cdi.mask |= VAR_1;
 if ((VAR_21[VAR_26 + 3] & 0x1) == 0)

  VAR_20->cdi.mask |= VAR_0;
 if ((VAR_21[VAR_26 + 6] & 0x8) == 0)

  VAR_20->cdi.mask |= VAR_8;

 if ((VAR_21[VAR_26 + 6] >> 5) == VAR_19 ||
     (VAR_21[VAR_26 + 6] >> 5) == VAR_18)
  VAR_20->cdi.capacity =
      FUNC_0(&VAR_20->cdi);
 if (VAR_20->cdi.capacity <= 1)

  VAR_20->cdi.mask |= VAR_10;






 if ((VAR_20->cdi.mask & (VAR_5 | VAR_7 | VAR_9 | VAR_1)) !=
   (VAR_5 | VAR_7 | VAR_9 | VAR_1)) {
  VAR_20->writeable = 1;
 }

 FUNC_1(VAR_21);
}
