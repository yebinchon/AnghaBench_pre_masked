
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba_variant_ops {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct of_device_id* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct platform_device*,struct ufs_hba_variant_ops*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 int VAR_2;
 const struct of_device_id *VAR_3;
 struct ufs_hba_variant_ops *VAR_4;
 struct device *VAR_5 = &VAR_1->dev;

 VAR_3 = FUNC_1(VAR_0, VAR_5->of_node);
 VAR_4 = (struct ufs_hba_variant_ops *)VAR_3->data;


 VAR_2 = FUNC_2(VAR_1, VAR_4);
 if (VAR_2)
  FUNC_0(VAR_5, "ufshcd_pltfrm_init() failed %d\n", VAR_2);

 return VAR_2;
}
