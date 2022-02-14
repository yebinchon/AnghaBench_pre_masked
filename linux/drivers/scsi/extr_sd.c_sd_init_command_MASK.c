
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {struct request* request; } ;
struct request {int rq_disk; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int provisioning_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*,int) ;
 int FUNC_7 (struct scsi_cmnd*,int) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (struct scsi_cmnd*,int) ;

__attribute__((used)) static blk_status_t FUNC_11(struct scsi_cmnd *VAR_2)
{
 struct request *VAR_3 = VAR_2->request;

 switch (FUNC_1(VAR_3)) {
 case 139:
  switch (FUNC_2(VAR_3->rq_disk)->provisioning_mode) {
  case 131:
   return FUNC_5(VAR_2);
  case 129:
   return FUNC_7(VAR_2, 1);
  case 130:
   return FUNC_6(VAR_2, 1);
  case 128:
   return FUNC_6(VAR_2, 0);
  default:
   return VAR_1;
  }
 case 134:
  return FUNC_9(VAR_2);
 case 135:
  return FUNC_8(VAR_2);
 case 138:
  return FUNC_3(VAR_2);
 case 137:
 case 136:
  return FUNC_4(VAR_2);
 case 133:
  return FUNC_10(VAR_2, 0);
 case 132:
  return FUNC_10(VAR_2, 1);
 default:
  FUNC_0(1);
  return VAR_0;
 }
}
