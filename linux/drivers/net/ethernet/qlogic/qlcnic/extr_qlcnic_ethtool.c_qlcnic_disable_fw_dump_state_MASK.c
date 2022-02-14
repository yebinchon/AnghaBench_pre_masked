
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_fw_dump {int enable; } ;
struct qlcnic_adapter {TYPE_1__* pdev; TYPE_2__* ahw; } ;
struct TYPE_5__ {struct qlcnic_fw_dump fw_dump; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_fw_dump *VAR_4 = &VAR_3->ahw->fw_dump;
 u32 VAR_5;

 if (FUNC_5(VAR_3)) {
  if (FUNC_3(VAR_3))
   return -VAR_0;

  VAR_5 = FUNC_0(VAR_3->ahw, VAR_1);
  VAR_5 |= VAR_2;
  FUNC_1(VAR_3->ahw, VAR_1, VAR_5);

  FUNC_4(VAR_3);
 } else {
  VAR_4->enable = 0;
 }

 FUNC_2(&VAR_3->pdev->dev, "FW dump disabled\n");

 return 0;
}
