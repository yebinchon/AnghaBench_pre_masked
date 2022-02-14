
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct portdrv_service_data {struct device* dev; int service; } ;
struct pci_dev {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,struct portdrv_service_data*,int ) ;
 int VAR_0 ;

struct device *FUNC_1(struct pci_dev *VAR_1,
          u32 VAR_2)
{
 struct device *VAR_3;
 struct portdrv_service_data VAR_4;

 VAR_4.dev = ((void*)0);
 VAR_4.service = VAR_2;
 FUNC_0(&VAR_1->dev, &VAR_4, VAR_0);

 VAR_3 = VAR_4.dev;
 return VAR_3;
}
