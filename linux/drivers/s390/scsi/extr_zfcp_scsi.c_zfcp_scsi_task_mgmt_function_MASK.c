
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct zfcp_scsi_dev {TYPE_1__* port; } ;
struct zfcp_fsf_req {int status; int completion; } ;
struct zfcp_adapter {int status; } ;
struct scsi_device {int dummy; } ;
struct fc_rport {int dummy; } ;
struct TYPE_2__ {struct zfcp_adapter* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_rport*) ;
 int FUNC_2 (struct scsi_device*) ;
 struct zfcp_scsi_dev* FUNC_3 (struct scsi_device*) ;
 struct fc_rport* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,struct scsi_device*,int ,struct zfcp_fsf_req*) ;
 int FUNC_7 (struct zfcp_adapter*) ;
 struct zfcp_fsf_req* FUNC_8 (struct scsi_device*,int ) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;
 int FUNC_10 (struct zfcp_scsi_dev*,int ) ;

__attribute__((used)) static int FUNC_11(struct scsi_device *VAR_4, u8 VAR_5)
{
 struct zfcp_scsi_dev *VAR_6 = FUNC_3(VAR_4);
 struct zfcp_adapter *VAR_7 = VAR_6->port->adapter;
 struct fc_rport *VAR_8 = FUNC_4(FUNC_2(VAR_4));
 struct zfcp_fsf_req *VAR_9 = ((void*)0);
 int VAR_10 = VAR_1, VAR_11;
 int VAR_12 = 3;

 while (VAR_12--) {
  VAR_9 = FUNC_8(VAR_4, VAR_5);
  if (VAR_9)
   break;

  FUNC_6("wait", VAR_4, VAR_5, ((void*)0));
  FUNC_7(VAR_7);
  VAR_11 = FUNC_1(VAR_8);
  if (VAR_11) {
   FUNC_6("fiof", VAR_4, VAR_5, ((void*)0));
   return VAR_11;
  }

  if (!(FUNC_0(&VAR_7->status) &
        VAR_2)) {
   FUNC_6("nres", VAR_4, VAR_5, ((void*)0));
   return VAR_1;
  }
 }
 if (!VAR_9) {
  FUNC_6("reqf", VAR_4, VAR_5, ((void*)0));
  return VAR_0;
 }

 FUNC_5(&VAR_9->completion);

 if (VAR_9->status & VAR_3) {
  FUNC_6("fail", VAR_4, VAR_5, VAR_9);
  VAR_10 = VAR_0;
 } else {
  FUNC_6("okay", VAR_4, VAR_5, VAR_9);
  FUNC_10(VAR_6, VAR_5);
 }

 FUNC_9(VAR_9);
 return VAR_10;
}
