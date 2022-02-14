
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int hla; int cssid; } ;
union fsf_status_qual {int * word; TYPE_4__ fsf_queue_designator; } ;
struct zfcp_scsi_dev {int status; int lun_handle; TYPE_6__* port; } ;
struct zfcp_fsf_req {int status; TYPE_1__* qtcb; struct scsi_device* data; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {TYPE_5__* ccw_device; } ;
struct scsi_device {int dummy; } ;
struct fsf_qtcb_header {int fsf_status; int lun_handle; union fsf_status_qual fsf_status_qual; } ;
struct TYPE_14__ {scalar_t__ wwpn; TYPE_3__* adapter; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_11__ {TYPE_2__* ccw_device; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {struct fsf_qtcb_header header; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*,unsigned long long,unsigned long long,...) ;
 struct zfcp_scsi_dev* FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_5 (TYPE_6__*,int,char*) ;
 int FUNC_6 (struct scsi_device*,int) ;
 int FUNC_7 (TYPE_6__*,int) ;
 int FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (struct scsi_device*) ;

__attribute__((used)) static void FUNC_10(struct zfcp_fsf_req *VAR_5)
{
 struct zfcp_adapter *VAR_6 = VAR_5->adapter;
 struct scsi_device *VAR_7 = VAR_5->data;
 struct zfcp_scsi_dev *VAR_8;
 struct fsf_qtcb_header *VAR_9 = &VAR_5->qtcb->header;
 union fsf_status_qual *VAR_10 = &VAR_9->fsf_status_qual;

 if (VAR_5->status & VAR_4)
  return;

 VAR_8 = FUNC_3(VAR_7);

 FUNC_0(VAR_1 |
     VAR_0,
     &VAR_8->status);

 switch (VAR_9->fsf_status) {

 case 130:
  FUNC_4(VAR_6, 0, "fsouh_1");

 case 134:
  break;
 case 131:
  FUNC_7(VAR_8->port,
      VAR_0);
  FUNC_5(VAR_8->port,
         VAR_2, "fsouh_2");
  VAR_5->status |= VAR_4;
  break;
 case 133:
  if (VAR_10->word[0])
   FUNC_2(&VAR_8->port->adapter->ccw_device->dev,
     "LUN 0x%016Lx on port 0x%016Lx is already in "
     "use by CSS%d, MIF Image ID %x\n",
     FUNC_9(VAR_7),
     (unsigned long long)VAR_8->port->wwpn,
     VAR_10->fsf_queue_designator.cssid,
     VAR_10->fsf_queue_designator.hla);
  FUNC_6(VAR_7,
     VAR_2 |
     VAR_1);
  VAR_5->status |= VAR_4;
  break;
 case 132:
  FUNC_2(&VAR_6->ccw_device->dev,
    "No handle is available for LUN "
    "0x%016Lx on port 0x%016Lx\n",
    (unsigned long long)FUNC_9(VAR_7),
    (unsigned long long)VAR_8->port->wwpn);
  FUNC_6(VAR_7, VAR_2);

 case 135:
  VAR_5->status |= VAR_4;
  break;
 case 137:
  switch (VAR_9->fsf_status_qual.word[0]) {
  case 129:
   FUNC_8(VAR_8->port);

  case 128:
   VAR_5->status |= VAR_4;
   break;
  }
  break;

 case 136:
  VAR_8->lun_handle = VAR_9->lun_handle;
  FUNC_1(VAR_3, &VAR_8->status);
  break;
 }
}
