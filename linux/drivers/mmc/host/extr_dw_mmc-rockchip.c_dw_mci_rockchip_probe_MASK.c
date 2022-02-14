
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct dw_mci_drv_data* data; } ;
struct dw_mci_drv_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,struct dw_mci_drv_data const*) ;
 int VAR_1 ;
 struct of_device_id* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 const struct dw_mci_drv_data *VAR_3;
 const struct of_device_id *VAR_4;
 int VAR_5;

 if (!VAR_2->dev.of_node)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_2->dev.of_node);
 VAR_3 = VAR_4->data;

 FUNC_4(&VAR_2->dev);
 FUNC_7(&VAR_2->dev);
 FUNC_3(&VAR_2->dev);
 FUNC_8(&VAR_2->dev, 50);
 FUNC_10(&VAR_2->dev);

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_2(&VAR_2->dev);
  FUNC_9(&VAR_2->dev);
  FUNC_6(&VAR_2->dev);
  return VAR_5;
 }

 FUNC_5(&VAR_2->dev);

 return 0;
}
