
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct scsi_cmnd {int dummy; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_3(struct lpfc_hba *VAR_9, struct scsi_cmnd *VAR_10,
  uint8_t *VAR_11, uint8_t *VAR_12)
{
 uint8_t VAR_13 = 0;

 if (FUNC_0(VAR_10)) {
  switch (FUNC_2(VAR_10)) {
  case 133:
  case 128:
   *VAR_12 = VAR_6;
   *VAR_11 = VAR_4;
   break;

  case 131:
  case 130:
   *VAR_12 = VAR_2;
   *VAR_11 = VAR_5;
   break;

  case 132:
  case 129:
   *VAR_12 = VAR_1;
   *VAR_11 = VAR_3;
   break;

  case 134:
  default:
   FUNC_1(VAR_9, VAR_7, VAR_8,
    "9063 BLKGRD: Bad op/guard:%d/IP combination\n",
     FUNC_2(VAR_10));
   VAR_13 = 1;
   break;

  }
 } else {
  switch (FUNC_2(VAR_10)) {
  case 131:
  case 130:
   *VAR_12 = VAR_2;
   *VAR_11 = VAR_5;
   break;

  case 132:
  case 129:
   *VAR_12 = VAR_0;
   *VAR_11 = VAR_0;
   break;

  case 133:
  case 128:
   *VAR_12 = VAR_5;
   *VAR_11 = VAR_2;
   break;

  case 134:
  default:
   FUNC_1(VAR_9, VAR_7, VAR_8,
    "9075 BLKGRD: Bad op/guard:%d/CRC combination\n",
     FUNC_2(VAR_10));
   VAR_13 = 1;
   break;
  }
 }

 return VAR_13;
}
