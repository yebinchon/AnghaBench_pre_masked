
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int device; } ;
struct nvme_dev {TYPE_1__ ctrl; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct nvme_dev *VAR_2, u32 VAR_3)
{

 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(FUNC_2(VAR_2->dev), VAR_1,
          &VAR_4);
 if (VAR_5 == VAR_0)
  FUNC_0(VAR_2->ctrl.device,
    "controller is down; will reset: CSTS=0x%x, PCI_STATUS=0x%hx\n",
    VAR_3, VAR_4);
 else
  FUNC_0(VAR_2->ctrl.device,
    "controller is down; will reset: CSTS=0x%x, PCI_STATUS read failed (%d)\n",
    VAR_3, VAR_5);
}
