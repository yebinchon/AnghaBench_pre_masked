
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct firmware {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; int netdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,struct firmware const*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct be_adapter*,struct firmware const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,int *,int *) ;

int FUNC_9(struct be_adapter *VAR_1, u8 *VAR_2)
{
 const struct firmware *VAR_3;
 int VAR_4;

 if (!FUNC_6(VAR_1->netdev)) {
  FUNC_2(&VAR_1->pdev->dev,
   "Firmware load not allowed (interface is down)\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_8(&VAR_3, VAR_2, &VAR_1->pdev->dev);
 if (VAR_4)
  goto fw_exit;

 FUNC_3(&VAR_1->pdev->dev, "Flashing firmware file %s\n", VAR_2);

 if (FUNC_4(VAR_1))
  VAR_4 = FUNC_5(VAR_1, VAR_3);
 else
  VAR_4 = FUNC_1(VAR_1, VAR_3);

 if (!VAR_4)
  FUNC_0(VAR_1);

fw_exit:
 FUNC_7(VAR_3);
 return VAR_4;
}
