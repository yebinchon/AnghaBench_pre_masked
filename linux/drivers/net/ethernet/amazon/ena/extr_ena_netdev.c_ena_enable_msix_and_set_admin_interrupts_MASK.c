
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_com_dev {int dummy; } ;
struct ena_adapter {TYPE_1__* pdev; struct ena_com_dev* ena_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (struct ena_com_dev*,int) ;
 int FUNC_3 (struct ena_adapter*) ;
 int FUNC_4 (struct ena_adapter*,int) ;
 int FUNC_5 (struct ena_adapter*) ;
 int FUNC_6 (struct ena_adapter*) ;

__attribute__((used)) static int FUNC_7(struct ena_adapter *VAR_0,
          int VAR_1)
{
 struct ena_com_dev *VAR_2 = VAR_0->ena_dev;
 struct device *VAR_3 = &VAR_0->pdev->dev;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_3, "Can not reserve msix vectors\n");
  return VAR_4;
 }

 FUNC_6(VAR_0);

 VAR_4 = FUNC_5(VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_3, "Can not setup management interrupts\n");
  goto err_disable_msix;
 }

 FUNC_2(VAR_2, 0);

 FUNC_1(VAR_2);

 return 0;

err_disable_msix:
 FUNC_3(VAR_0);

 return VAR_4;
}
