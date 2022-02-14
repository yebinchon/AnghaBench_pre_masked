
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_scsi_dev {int status; TYPE_3__* port; int erp_counter; } ;
struct scsi_device {int dummy; } ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;
struct TYPE_6__ {scalar_t__ wwpn; TYPE_2__* adapter; } ;
struct TYPE_5__ {TYPE_1__* ccw_device; } ;
struct TYPE_4__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,unsigned long long,unsigned long long) ;
 struct zfcp_scsi_dev* FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (struct scsi_device*,int ) ;
 int FUNC_6 (struct scsi_device*) ;
 int FUNC_7 (struct scsi_device*,int) ;
 scalar_t__ FUNC_8 (struct scsi_device*) ;

__attribute__((used)) static enum zfcp_erp_act_result FUNC_9(
 struct scsi_device *VAR_2, enum zfcp_erp_act_result VAR_3)
{
 struct zfcp_scsi_dev *VAR_4 = FUNC_4(VAR_2);

 switch (VAR_3) {
 case 128 :
  FUNC_2(&VAR_4->erp_counter, 0);
  FUNC_6(VAR_2);
  break;
 case 130 :
  FUNC_0(&VAR_4->erp_counter);
  if (FUNC_1(&VAR_4->erp_counter) > VAR_0) {
   FUNC_3(&VAR_4->port->adapter->ccw_device->dev,
    "ERP failed for LUN 0x%016Lx on "
    "port 0x%016Lx\n",
    (unsigned long long)FUNC_8(VAR_2),
    (unsigned long long)VAR_4->port->wwpn);
   FUNC_7(VAR_2,
      VAR_1);
  }
  break;
 case 133:
 case 131:
 case 132:
 case 129:

  break;
 }

 if (FUNC_1(&VAR_4->status) & VAR_1) {
  FUNC_5(VAR_2, 0);
  VAR_3 = 131;
 }
 return VAR_3;
}
