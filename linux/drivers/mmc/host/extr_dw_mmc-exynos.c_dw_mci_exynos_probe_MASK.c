
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct dw_mci_drv_data* data; } ;
struct dw_mci_drv_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,struct dw_mci_drv_data const*) ;
 struct of_device_id* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 const struct dw_mci_drv_data *VAR_2;
 const struct of_device_id *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1->dev.of_node);
 VAR_2 = VAR_3->data;

 FUNC_4(&VAR_1->dev);
 FUNC_6(&VAR_1->dev);
 FUNC_3(&VAR_1->dev);

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_2(&VAR_1->dev);
  FUNC_7(&VAR_1->dev);
  FUNC_5(&VAR_1->dev);

  return VAR_4;
 }

 return 0;
}
