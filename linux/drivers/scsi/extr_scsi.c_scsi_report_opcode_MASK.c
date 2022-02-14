
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_device {scalar_t__ scsi_level; scalar_t__ no_report_opcodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (unsigned char*,int ,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned char*) ;
 int FUNC_2 (struct scsi_device*,unsigned char*,int ,unsigned char*,unsigned int,struct scsi_sense_hdr*,int,int,int *) ;
 scalar_t__ FUNC_3 (struct scsi_sense_hdr*) ;

int FUNC_4(struct scsi_device *VAR_7, unsigned char *VAR_8,
         unsigned int VAR_9, unsigned char VAR_10)
{
 unsigned char VAR_11[16];
 struct scsi_sense_hdr VAR_12;
 int VAR_13;

 if (VAR_7->no_report_opcodes || VAR_7->scsi_level < VAR_6)
  return -VAR_1;

 FUNC_0(VAR_11, 0, 16);
 VAR_11[0] = VAR_4;
 VAR_11[1] = VAR_5;
 VAR_11[2] = 1;
 VAR_11[3] = VAR_10;
 FUNC_1(VAR_9, &VAR_11[6]);
 FUNC_0(VAR_8, 0, VAR_9);

 VAR_13 = FUNC_2(VAR_7, VAR_11, VAR_0, VAR_8, VAR_9,
      &VAR_12, 30 * VAR_2, 3, ((void*)0));

 if (VAR_13 && FUNC_3(&VAR_12) &&
     VAR_12.sense_key == VAR_3 &&
     (VAR_12.asc == 0x20 || VAR_12.asc == 0x24) && VAR_12.ascq == 0x00)
  return -VAR_1;

 if ((VAR_8[1] & 3) == 3)
  return 1;

 return 0;
}
