
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct zfcp_scsi_dev {int status; TYPE_4__* port; } ;
struct zfcp_fsf_req {int status; TYPE_3__* qtcb; struct scsi_device* data; } ;
struct scsi_device {int dummy; } ;
struct TYPE_10__ {int adapter; } ;
struct TYPE_7__ {int * word; } ;
struct TYPE_8__ {int fsf_status; TYPE_1__ fsf_status_qual; } ;
struct TYPE_9__ {TYPE_2__ header; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(struct zfcp_fsf_req *VAR_4)
{
 struct scsi_device *VAR_5 = VAR_4->data;
 struct zfcp_scsi_dev *VAR_6;

 if (VAR_4->status & VAR_3)
  return;

 VAR_6 = FUNC_1(VAR_5);

 switch (VAR_4->qtcb->header.fsf_status) {
 case 130:
  FUNC_2(VAR_6->port->adapter, 0, "fscuh_1");
  VAR_4->status |= VAR_3;
  break;
 case 132:
  FUNC_3(VAR_6->port, 0, "fscuh_2");
  VAR_4->status |= VAR_3;
  break;
 case 131:
  FUNC_4(VAR_6->port,
      VAR_0);
  FUNC_3(VAR_6->port,
         VAR_1, "fscuh_3");
  VAR_4->status |= VAR_3;
  break;
 case 134:
  switch (VAR_4->qtcb->header.fsf_status_qual.word[0]) {
  case 129:
   FUNC_5(VAR_6->port);

  case 128:
   VAR_4->status |= VAR_3;
   break;
  }
  break;
 case 133:
  FUNC_0(VAR_2, &VAR_6->status);
  break;
 }
}
