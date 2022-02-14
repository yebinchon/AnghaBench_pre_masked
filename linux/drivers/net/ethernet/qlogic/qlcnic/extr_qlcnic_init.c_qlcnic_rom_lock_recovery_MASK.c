
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*,int,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_adapter *VAR_1)
{
 if (FUNC_1(VAR_1, 2, VAR_0))
  FUNC_0(&VAR_1->pdev->dev, "Resetting rom_lock\n");

 FUNC_2(VAR_1, 2);
}
