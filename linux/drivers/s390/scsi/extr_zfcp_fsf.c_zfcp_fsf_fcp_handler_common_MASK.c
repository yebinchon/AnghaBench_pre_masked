
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct zfcp_scsi_dev {TYPE_6__* port; } ;
struct zfcp_fsf_req {int status; TYPE_9__* adapter; TYPE_4__* qtcb; } ;
struct scsi_device {int dummy; } ;
struct TYPE_15__ {int * word; } ;
struct fsf_qtcb_header {int fsf_status; TYPE_5__ fsf_status_qual; } ;
struct TYPE_17__ {TYPE_1__* ccw_device; } ;
struct TYPE_16__ {scalar_t__ wwpn; } ;
struct TYPE_12__ {int fcp_cmnd_length; int data_direction; } ;
struct TYPE_13__ {TYPE_2__ io; } ;
struct TYPE_14__ {TYPE_3__ bottom; struct fsf_qtcb_header header; } ;
struct TYPE_11__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,...) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_9__*,int ,char*) ;
 int FUNC_4 (TYPE_9__*,int ,char*) ;
 int FUNC_5 (struct scsi_device*,int ,char*) ;
 int FUNC_6 (TYPE_6__*,int ,char*) ;
 int FUNC_7 (struct scsi_device*,int ) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_11 (struct scsi_device*) ;

__attribute__((used)) static void FUNC_12(struct zfcp_fsf_req *VAR_4,
     struct scsi_device *VAR_5)
{
 struct zfcp_scsi_dev *VAR_6;
 struct fsf_qtcb_header *VAR_7 = &VAR_4->qtcb->header;

 if (FUNC_2(VAR_4->status & VAR_3))
  return;

 VAR_6 = FUNC_1(VAR_5);

 switch (VAR_7->fsf_status) {
 case 133:
 case 129:
  FUNC_3(VAR_4->adapter, 0, "fssfch1");
  VAR_4->status |= VAR_3;
  break;
 case 134:
 case 131:
  FUNC_6(VAR_6->port, 0, "fssfch2");
  VAR_4->status |= VAR_3;
  break;
 case 128:
  FUNC_10(VAR_4);
  break;
 case 135:
  FUNC_0(&VAR_4->adapter->ccw_device->dev,
   "Incorrect direction %d, LUN 0x%016Lx on port "
   "0x%016Lx closed\n",
   VAR_4->qtcb->bottom.io.data_direction,
   (unsigned long long)FUNC_11(VAR_5),
   (unsigned long long)VAR_6->port->wwpn);
  FUNC_4(VAR_4->adapter, 0, "fssfch3");
  VAR_4->status |= VAR_3;
  break;
 case 136:
  FUNC_0(&VAR_4->adapter->ccw_device->dev,
   "Incorrect FCP_CMND length %d, FCP device closed\n",
   VAR_4->qtcb->bottom.io.fcp_cmnd_length);
  FUNC_4(VAR_4->adapter, 0, "fssfch4");
  VAR_4->status |= VAR_3;
  break;
 case 130:
  FUNC_8(VAR_6->port,
      VAR_1);
  FUNC_6(VAR_6->port,
         VAR_2, "fssfch5");
  VAR_4->status |= VAR_3;
  break;
 case 132:
  FUNC_7(VAR_5, VAR_1);
  FUNC_5(VAR_5, VAR_2,
        "fssfch6");
  VAR_4->status |= VAR_3;
  break;
 case 137:
  if (VAR_7->fsf_status_qual.word[0] ==
      VAR_0)
   FUNC_9(VAR_6->port);
  VAR_4->status |= VAR_3;
  break;
 }
}
