
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct dw_mci_drv_data* data; } ;
struct dw_mci_drv_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,struct dw_mci_drv_data const*) ;
 struct of_device_id* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 const struct dw_mci_drv_data *VAR_2;
 const struct of_device_id *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->dev.of_node);
 VAR_2 = VAR_3->data;

 return FUNC_0(VAR_1, VAR_2);
}
