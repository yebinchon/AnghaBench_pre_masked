
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int capabilities; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int *) ;

void FUNC_1(struct qlcnic_adapter *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;

 if (VAR_2->ahw->capabilities & VAR_0)
  FUNC_0(VAR_3, &VAR_1);
}
