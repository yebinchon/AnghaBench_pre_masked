
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_msi_devres {void* entry; struct ntb_dev* ntb; } ;
struct ntb_dev {int dummy; } ;
struct device {int dummy; } ;


 struct ntb_dev* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1, void *VAR_2)
{
 struct ntb_dev *VAR_3 = FUNC_0(VAR_0);
 struct ntb_msi_devres *VAR_4 = VAR_1;

 return VAR_4->ntb == VAR_3 && VAR_4->entry == VAR_2;
}
