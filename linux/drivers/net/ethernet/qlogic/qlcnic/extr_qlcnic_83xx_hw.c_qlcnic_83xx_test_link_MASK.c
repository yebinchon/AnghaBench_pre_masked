
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_hardware_context {void* port_type; void* supported_type; int link_speed; scalar_t__ pci_base0; int pci_func; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; } ;
struct qlcnic_adapter {TYPE_1__* pdev; int portnum; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_3__ {int dev; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;




 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_6 (struct qlcnic_cmd_args*) ;
 int FUNC_7 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (scalar_t__) ;

int FUNC_10(struct qlcnic_adapter *VAR_11)
{
 u8 VAR_12;
 int VAR_13;
 u32 VAR_14 = 0, VAR_15;
 struct qlcnic_cmd_args VAR_16;
 struct qlcnic_hardware_context *VAR_17 = VAR_11->ahw;

 if (FUNC_8(VAR_11))
  VAR_12 = VAR_11->portnum;
 else
  VAR_12 = VAR_17->pci_func;

 VAR_15 = FUNC_9(VAR_17->pci_base0 + FUNC_1(VAR_12));
 if (!FUNC_3(VAR_15, VAR_12)) {
  FUNC_4(&VAR_11->pdev->dev, "link state down\n");
  return VAR_14;
 }

 VAR_13 = FUNC_5(&VAR_16, VAR_11, VAR_4);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_7(VAR_11, &VAR_16);
 if (VAR_13) {
  FUNC_4(&VAR_11->pdev->dev,
    "Get Link Status Command failed: 0x%x\n", VAR_13);
  goto out;
 } else {
  VAR_14 = VAR_16.rsp.arg[1];
  switch (FUNC_0(VAR_14)) {
  case 140:
   VAR_17->link_speed = VAR_7;
   break;
  case 142:
   VAR_17->link_speed = VAR_8;
   break;
  case 139:
   VAR_17->link_speed = VAR_9;
   break;
  case 141:
   VAR_17->link_speed = VAR_10;
   break;
  default:
   VAR_17->link_speed = 0;
   break;
  }
  VAR_14 = VAR_16.rsp.arg[3];
  switch (FUNC_2(VAR_14)) {
  case 130:
  case 131:
  case 129:
   VAR_17->supported_type = VAR_1;
   VAR_17->port_type = VAR_6;
   break;
  case 132:
  case 133:
  case 134:
   VAR_17->supported_type = VAR_1;
   VAR_17->port_type = VAR_5;
   break;
  case 128:
   VAR_17->supported_type = VAR_3;
   VAR_17->port_type = VAR_5;
   break;
  case 136:
  case 138:
  case 137:
  case 135:
   VAR_17->supported_type = VAR_0;
   VAR_17->port_type = VAR_6;
   break;
  default:
   VAR_17->supported_type = VAR_2;
   VAR_17->port_type = VAR_6;
  }
  if (VAR_14 & 1)
   VAR_13 = 1;
 }
out:
 FUNC_6(&VAR_16);
 return VAR_14;
}
