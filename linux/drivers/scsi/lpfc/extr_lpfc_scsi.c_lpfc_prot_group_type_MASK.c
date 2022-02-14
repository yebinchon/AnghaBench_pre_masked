
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,unsigned char) ;
 unsigned char FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_hba *VAR_5, struct scsi_cmnd *VAR_6)
{
 int VAR_7 = VAR_3;
 unsigned char VAR_8 = FUNC_1(VAR_6);

 switch (VAR_8) {
 case 131:
 case 130:
  VAR_7 = VAR_4;
  break;
 case 133:
 case 128:
 case 132:
 case 129:
  VAR_7 = VAR_2;
  break;
 default:
  if (VAR_5)
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "9021 Unsupported protection op:%d\n",
     VAR_8);
  break;
 }
 return VAR_7;
}
