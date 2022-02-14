
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_fsf_req {int status; int completion; int * data; } ;
struct zfcp_adapter {int status; int abort_lock; int req_list; } ;
struct scsi_cmnd {scalar_t__ host_scribble; TYPE_1__* device; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (char*,struct scsi_cmnd*,struct zfcp_fsf_req*) ;
 int FUNC_6 (struct zfcp_adapter*) ;
 struct zfcp_fsf_req* FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 struct zfcp_fsf_req* FUNC_9 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5->device->host;
 struct zfcp_adapter *VAR_7 =
  (struct zfcp_adapter *) VAR_6->hostdata[0];
 struct zfcp_fsf_req *VAR_8, *VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11 = (unsigned long) VAR_5->host_scribble;
 int VAR_12 = VAR_1, VAR_13;
 int VAR_14 = 3;
 char *VAR_15;


 FUNC_3(&VAR_7->abort_lock, VAR_10);

 VAR_8 = FUNC_9(VAR_7->req_list, VAR_11);
 if (!VAR_8) {
  FUNC_4(&VAR_7->abort_lock, VAR_10);
  FUNC_5("abrt_or", VAR_5, ((void*)0));
  return VAR_0;
 }
 VAR_8->data = ((void*)0);


 FUNC_4(&VAR_7->abort_lock, VAR_10);

 while (VAR_14--) {
  VAR_9 = FUNC_7(VAR_5);
  if (VAR_9)
   break;

  FUNC_5("abrt_wt", VAR_5, ((void*)0));
  FUNC_6(VAR_7);
  VAR_13 = FUNC_1(VAR_5);
  if (VAR_13) {
   FUNC_5("abrt_bl", VAR_5, ((void*)0));
   return VAR_13;
  }
  if (!(FUNC_0(&VAR_7->status) &
        VAR_2)) {
   FUNC_5("abrt_ru", VAR_5, ((void*)0));
   return VAR_1;
  }
 }
 if (!VAR_9) {
  FUNC_5("abrt_ar", VAR_5, ((void*)0));
  return VAR_0;
 }

 FUNC_2(&VAR_9->completion);

 if (VAR_9->status & VAR_4)
  VAR_15 = "abrt_ok";
 else if (VAR_9->status & VAR_3)
  VAR_15 = "abrt_nn";
 else {
  VAR_15 = "abrt_fa";
  VAR_12 = VAR_0;
 }
 FUNC_5(VAR_15, VAR_5, VAR_9);
 FUNC_8(VAR_9);
 return VAR_12;
}
