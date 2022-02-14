
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union fsf_status_qual {int * word; } ;
struct zfcp_scsi_dev {TYPE_3__* port; } ;
struct zfcp_fsf_req {int status; TYPE_2__* qtcb; struct scsi_device* data; } ;
struct scsi_device {int dummy; } ;
struct TYPE_8__ {int adapter; } ;
struct TYPE_6__ {int fsf_status; union fsf_status_qual fsf_status_qual; } ;
struct TYPE_7__ {TYPE_1__ header; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct zfcp_scsi_dev* FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct scsi_device*,int ,char*) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (struct scsi_device*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(struct zfcp_fsf_req *VAR_5)
{
 struct scsi_device *VAR_6 = VAR_5->data;
 struct zfcp_scsi_dev *VAR_7;
 union fsf_status_qual *VAR_8 = &VAR_5->qtcb->header.fsf_status_qual;

 if (VAR_5->status & VAR_4)
  return;

 VAR_7 = FUNC_0(VAR_6);

 switch (VAR_5->qtcb->header.fsf_status) {
 case 130:
  if (VAR_8->word[0] == VAR_8->word[1]) {
   FUNC_1(VAR_7->port->adapter, 0,
      "fsafch1");
   VAR_5->status |= VAR_4;
  }
  break;
 case 132:
  if (VAR_8->word[0] == VAR_8->word[1]) {
   FUNC_3(VAR_7->port, 0, "fsafch2");
   VAR_5->status |= VAR_4;
  }
  break;
 case 135:
  VAR_5->status |= VAR_2;
  break;
 case 131:
  FUNC_5(VAR_7->port,
      VAR_0);
  FUNC_3(VAR_7->port,
         VAR_1, "fsafch3");
  VAR_5->status |= VAR_4;
  break;
 case 133:
  FUNC_4(VAR_6, VAR_0);
  FUNC_2(VAR_6, VAR_1,
        "fsafch4");
  VAR_5->status |= VAR_4;
                break;
 case 136:
  switch (VAR_8->word[0]) {
  case 129:
   FUNC_6(VAR_7->port);

  case 128:
   VAR_5->status |= VAR_4;
   break;
  }
  break;
 case 134:
  VAR_5->status |= VAR_3;
  break;
 }
}
