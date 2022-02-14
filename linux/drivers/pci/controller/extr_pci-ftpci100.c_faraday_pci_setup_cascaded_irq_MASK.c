
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct faraday_pci {int irqdomain; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct device_node*,int ,int *,struct faraday_pci*) ;
 int FUNC_3 (int,int ,struct faraday_pci*) ;
 struct device_node* FUNC_4 (int ,int *) ;
 int FUNC_5 (struct device_node*,int ) ;
 int FUNC_6 (struct device_node*) ;

__attribute__((used)) static int FUNC_7(struct faraday_pci *VAR_4)
{
 struct device_node *VAR_5 = FUNC_4(VAR_4->dev->of_node, ((void*)0));
 int VAR_6;
 int VAR_7;

 if (!VAR_5) {
  FUNC_0(VAR_4->dev, "missing child interrupt-controller node\n");
  return -VAR_0;
 }


 VAR_6 = FUNC_5(VAR_5, 0);
 if (VAR_6 <= 0) {
  FUNC_0(VAR_4->dev, "failed to get parent IRQ\n");
  FUNC_6(VAR_5);
  return VAR_6 ?: -VAR_0;
 }

 VAR_4->irqdomain = FUNC_2(VAR_5, VAR_1,
          &VAR_3, VAR_4);
 FUNC_6(VAR_5);
 if (!VAR_4->irqdomain) {
  FUNC_0(VAR_4->dev, "failed to create Gemini PCI IRQ domain\n");
  return -VAR_0;
 }

 FUNC_3(VAR_6, VAR_2, VAR_4);

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
  FUNC_1(VAR_4->irqdomain, VAR_7);

 return 0;
}
