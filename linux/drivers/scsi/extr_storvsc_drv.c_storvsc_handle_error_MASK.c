
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vmscsi_request {int srb_status; int target_id; int lun; } ;
struct storvsc_scan_work {int work; int tgt_id; int lun; struct Scsi_Host* host; } ;
struct scsi_cmnd {int * cmnd; } ;
struct hv_host_device {int handle_error_wq; } ;
struct Scsi_Host {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 int FUNC_1 (int) ;

 int VAR_6 ;



 struct storvsc_scan_work* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct scsi_cmnd*,int ) ;
 struct hv_host_device* FUNC_5 (struct Scsi_Host*) ;
 void FUNC_6 (struct work_struct*) ;
 void FUNC_7 (struct work_struct*) ;

__attribute__((used)) static void FUNC_8(struct vmscsi_request *VAR_7,
    struct scsi_cmnd *VAR_8,
    struct Scsi_Host *VAR_9,
    u8 VAR_10, u8 VAR_11)
{
 struct storvsc_scan_work *VAR_12;
 void (*VAR_13)(struct work_struct *VAR_14);
 struct hv_host_device *VAR_15 = FUNC_5(VAR_9);
 bool VAR_16 = 0;

 switch (FUNC_1(VAR_7->srb_status)) {
 case 130:





  if (VAR_7->srb_status & VAR_6)
   break;






  switch (VAR_8->cmnd[0]) {
  case 132:
  case 133:
   FUNC_4(VAR_8, VAR_2);
   break;





  case 128:
   break;
  default:
   FUNC_4(VAR_8, VAR_0);
  }
  break;
 case 129:
  FUNC_4(VAR_8, VAR_1);
  VAR_16 = 1;
  VAR_13 = FUNC_7;
  break;
 case 131:
  if (VAR_7->srb_status & VAR_6 &&
      (VAR_10 == 0x2a) && (VAR_11 == 0x9)) {
   VAR_16 = 1;
   VAR_13 = FUNC_6;



   FUNC_4(VAR_8, VAR_3);
  }
  break;
 }

 if (!VAR_16)
  return;




 VAR_12 = FUNC_2(sizeof(struct storvsc_scan_work), VAR_5);
 if (!VAR_12) {
  FUNC_4(VAR_8, VAR_4);
  return;
 }

 VAR_12->host = VAR_9;
 VAR_12->lun = VAR_7->lun;
 VAR_12->tgt_id = VAR_7->target_id;
 FUNC_0(&VAR_12->work, VAR_13);
 FUNC_3(VAR_15->handle_error_wq, &VAR_12->work);
}
