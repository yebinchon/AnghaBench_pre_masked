
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct kirin_pcie {scalar_t__ gpio_id_reset; struct dw_pcie* pci; } ;
struct dw_pcie {int * ops; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct dw_pcie*,struct platform_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct kirin_pcie*,struct platform_device*) ;
 int FUNC_4 (struct kirin_pcie*,struct platform_device*) ;
 int FUNC_5 (struct kirin_pcie*) ;
 scalar_t__ FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (struct platform_device*,struct kirin_pcie*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct kirin_pcie *VAR_7;
 struct dw_pcie *VAR_8;
 int VAR_9;

 if (!VAR_6->of_node) {
  FUNC_0(VAR_6, "NULL node\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_6, sizeof(struct kirin_pcie), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_6, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->dev = VAR_6;
 VAR_8->ops = &VAR_4;
 VAR_7->pci = VAR_8;

 VAR_9 = FUNC_3(VAR_7, VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_7, VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_7->gpio_id_reset = FUNC_6(VAR_6->of_node,
            "reset-gpios", 0);
 if (VAR_7->gpio_id_reset < 0)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_7(VAR_5, VAR_7);

 return FUNC_2(VAR_8, VAR_5);
}
