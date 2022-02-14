
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_hardware_context {int dummy; } ;
struct TYPE_4__ {int* arg; int num; } ;
struct TYPE_3__ {int num; scalar_t__* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;





 scalar_t__ VAR_4 ;

 int VAR_5 ;
 void* FUNC_2 (struct qlcnic_adapter*,int ,int*) ;
 int FUNC_3 (struct qlcnic_adapter*,int ,scalar_t__) ;
 int FUNC_4 (int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_8 (struct qlcnic_hardware_context*) ;
 scalar_t__ FUNC_9 (struct qlcnic_adapter*) ;

int FUNC_10(struct qlcnic_adapter *VAR_6,
     struct qlcnic_cmd_args *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 u32 VAR_10;
 u32 VAR_11;
 struct pci_dev *VAR_12 = VAR_6->pdev;
 struct qlcnic_hardware_context *VAR_13 = VAR_6->ahw;
 const char *VAR_14;

 VAR_11 = FUNC_8(VAR_13);


 if (FUNC_5(VAR_6)) {
  VAR_7->rsp.arg[0] = 128;
  return VAR_7->rsp.arg[0];
 }

 FUNC_3(VAR_6, VAR_5, VAR_11);
 for (VAR_8 = 1; VAR_8 < VAR_7->req.num; VAR_8++)
  FUNC_3(VAR_6, FUNC_0(VAR_8), VAR_7->req.arg[VAR_8]);
 FUNC_3(VAR_6, VAR_0,
  FUNC_1(VAR_7->req.arg[0]));
 VAR_10 = FUNC_9(VAR_6);

 if (VAR_10 == VAR_3) {
  FUNC_4(&VAR_12->dev, "command timeout, response = 0x%x\n", VAR_10);
  VAR_7->rsp.arg[0] = 128;
 } else if (VAR_10 == VAR_1) {
  VAR_7->rsp.arg[0] = FUNC_2(VAR_6, FUNC_0(1), &VAR_9);
  switch (VAR_7->rsp.arg[0]) {
  case 132:
   VAR_14 = "CDRP invalid args: [%d]\n";
   break;
  case 129:
  case 131:
   VAR_14 = "CDRP command not supported: [%d]\n";
   break;
  case 130:
   VAR_14 = "CDRP requested action not permitted: [%d]\n";
   break;
  case 133:
   VAR_14 = "CDRP invalid or unknown cmd received: [%d]\n";
   break;
  case 128:
   VAR_14 = "CDRP command timeout: [%d]\n";
   break;
  default:
   VAR_14 = "CDRP command failed: [%d]\n";
   break;
  }
  FUNC_4(&VAR_12->dev, VAR_14, VAR_7->rsp.arg[0]);
  FUNC_7(VAR_6, VAR_7);
 } else if (VAR_10 == VAR_2)
  VAR_7->rsp.arg[0] = VAR_4;

 for (VAR_8 = 1; VAR_8 < VAR_7->rsp.num; VAR_8++)
  VAR_7->rsp.arg[VAR_8] = FUNC_2(VAR_6, FUNC_0(VAR_8), &VAR_9);


 FUNC_6(VAR_6);
 return VAR_7->rsp.arg[0];
}
