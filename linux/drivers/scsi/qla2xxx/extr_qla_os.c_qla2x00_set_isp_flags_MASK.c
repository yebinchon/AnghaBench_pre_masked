
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qla_hw_data {int port_no; int portnum; void* fw_srisc_address; int device_type; TYPE_1__* pdev; int isp_type; } ;
struct TYPE_3__ {int device; int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 int FUNC_5 (TYPE_1__*,int ,int*) ;
 int VAR_34 ;
 int FUNC_6 (int ,TYPE_1__*,int,char*,int ,int,void*) ;
 int FUNC_7 (struct qla_hw_data*) ;

__attribute__((used)) static inline void
FUNC_8(struct qla_hw_data *VAR_35)
{
 VAR_35->device_type = VAR_0;
 switch (VAR_35->pdev->device) {
 case 149:
  VAR_35->isp_type |= VAR_6;
  VAR_35->device_type &= ~VAR_0;
  VAR_35->fw_srisc_address = VAR_31;
  break;
 case 148:
  VAR_35->isp_type |= VAR_7;
  VAR_35->device_type &= ~VAR_0;
  VAR_35->fw_srisc_address = VAR_31;
  break;
 case 143:
  VAR_35->isp_type |= VAR_11;
  VAR_35->device_type |= VAR_29;
  VAR_35->fw_srisc_address = VAR_32;
  break;
 case 142:
  VAR_35->isp_type |= VAR_12;
  VAR_35->device_type |= VAR_29;
  VAR_35->fw_srisc_address = VAR_32;
  break;
 case 141:
  VAR_35->isp_type |= VAR_13;
  VAR_35->device_type |= VAR_29;
  if (VAR_35->pdev->subsystem_vendor == 0x1028 &&
      VAR_35->pdev->subsystem_device == 0x0170)
   VAR_35->device_type |= VAR_27;
  VAR_35->fw_srisc_address = VAR_32;
  break;
 case 135:
  VAR_35->isp_type |= VAR_19;
  VAR_35->fw_srisc_address = VAR_32;
  break;
 case 134:
  VAR_35->isp_type |= VAR_20;
  VAR_35->fw_srisc_address = VAR_32;
  break;
 case 140:
  VAR_35->isp_type |= VAR_14;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 139:
  VAR_35->isp_type |= VAR_15;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 129:
  VAR_35->isp_type |= VAR_25;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 137:
  VAR_35->isp_type |= VAR_17;
  VAR_35->device_type |= VAR_1;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 136:
  VAR_35->isp_type |= VAR_18;
  VAR_35->device_type |= VAR_1;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 138:
  VAR_35->isp_type |= VAR_16;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 133:
  VAR_35->isp_type |= VAR_21;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 132:
  VAR_35->isp_type |= VAR_22;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->fw_srisc_address = VAR_33;

  FUNC_7(VAR_35);
  break;
  case 130:
  VAR_35->isp_type |= VAR_24;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->fw_srisc_address = VAR_33;

  FUNC_7(VAR_35);
  break;
 case 153:
  VAR_35->isp_type |= VAR_3;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->device_type |= VAR_28;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 131:
  VAR_35->isp_type |= VAR_23;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->device_type |= VAR_28;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 128:
  VAR_35->isp_type |= VAR_26;
  break;
 case 152:
  VAR_35->isp_type |= VAR_4;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->device_type |= VAR_28;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 146:
  VAR_35->isp_type |= VAR_9;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->device_type |= VAR_28;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 147:
  VAR_35->isp_type |= VAR_8;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->device_type |= VAR_28;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 151:
 case 150:
  VAR_35->isp_type |= VAR_5;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->device_type |= VAR_28;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 case 145:
 case 144:
  VAR_35->isp_type |= VAR_10;
  VAR_35->device_type |= VAR_29;
  VAR_35->device_type |= VAR_1;
  VAR_35->device_type |= VAR_2;
  VAR_35->device_type |= VAR_28;
  VAR_35->fw_srisc_address = VAR_33;
  break;
 }

 if (FUNC_4(VAR_35))
  VAR_35->port_no = VAR_35->portnum & 1;
 else {

  FUNC_5(VAR_35->pdev, VAR_30, &VAR_35->port_no);
  if (FUNC_1(VAR_35) || FUNC_0(VAR_35) ||
      FUNC_2(VAR_35) || FUNC_3(VAR_35))
   VAR_35->port_no--;
  else
   VAR_35->port_no = !(VAR_35->port_no & 1);
 }

 FUNC_6(VAR_34, VAR_35->pdev, 0x000b,
     "device_type=0x%x port=%d fw_srisc_address=0x%x.\n",
     VAR_35->device_type, VAR_35->port_no, VAR_35->fw_srisc_address);
}
