
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int state; } ;
struct Scsi_Host {int dummy; } ;
typedef enum iscsi_host_param { ____Placeholder_iscsi_host_param } iscsi_host_param ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct beiscsi_hba*,char*,int) ;
 int FUNC_1 (char*,struct beiscsi_hba*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct beiscsi_hba*) ;
 int FUNC_5 (struct beiscsi_hba*,int ,int ,char*,...) ;
 char* FUNC_6 (struct Scsi_Host*) ;
 char* FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct Scsi_Host*,int,char*) ;
 struct beiscsi_hba* FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (char*,char*,char*) ;

int FUNC_11(struct Scsi_Host *VAR_3,
      enum iscsi_host_param VAR_4, char *VAR_5)
{
 struct beiscsi_hba *VAR_6 = FUNC_9(VAR_3);
 int VAR_7 = 0;

 if (!FUNC_4(VAR_6)) {
  FUNC_5(VAR_6, VAR_2, VAR_0,
       "BS_%d : HBA in error 0x%lx\n", VAR_6->state);
  return 0;
 }
 FUNC_5(VAR_6, VAR_2, VAR_0,
      "BS_%d : In beiscsi_get_host_param, param = %d\n", VAR_4);

 switch (VAR_4) {
 case 131:
  VAR_7 = FUNC_1(VAR_5, VAR_6);
  if (VAR_7 < 0) {
   FUNC_5(VAR_6, VAR_1, VAR_0,
        "BS_%d : beiscsi_get_macaddr Failed\n");
   return 0;
  }
  break;
 case 130:

  VAR_7 = FUNC_0(VAR_6, VAR_5, 1);
  if (VAR_7 < 0) {
   VAR_7 = FUNC_0(VAR_6, VAR_5, 0);
   if (VAR_7 < 0) {
    FUNC_5(VAR_6, VAR_1, VAR_0,
         "BS_%d : Retrieving Initiator Name Failed\n");
    VAR_7 = 0;
   }
  }
  break;
 case 128:
  FUNC_3(VAR_3);
  VAR_7 = FUNC_10(VAR_5, "%s\n", FUNC_7(VAR_3));
  break;
 case 129:
  FUNC_2(VAR_3);
  VAR_7 = FUNC_10(VAR_5, "%s\n", FUNC_6(VAR_3));
  break;
 default:
  return FUNC_8(VAR_3, VAR_4, VAR_5);
 }
 return VAR_7;
}
