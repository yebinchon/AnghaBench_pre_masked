
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_3__* ahw; TYPE_1__* pdev; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_6__ {TYPE_2__ idc; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_adapter *VAR_1,
         u32 VAR_2[])
{
 FUNC_2(&VAR_1->pdev->dev, "Completion AEN:0x%x.\n",
  FUNC_0(VAR_2[0]));
 FUNC_1(VAR_0, &VAR_1->ahw->idc.status);
 return;
}
