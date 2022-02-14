
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spa {int irq_name; int virq; } ;
struct pci_dev {int dev; } ;
struct ocxl_link {int dev; int bus; int domain; struct spa* spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pci_dev*,struct spa*) ;
 int FUNC_7 (struct pci_dev*,int*) ;
 int FUNC_8 (int ,int ,int ,int ,struct ocxl_link*) ;
 int FUNC_9 (struct spa*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_4, struct ocxl_link *VAR_5)
{
 struct spa *VAR_6 = VAR_5->spa;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(VAR_4, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_4, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6->irq_name = FUNC_4(VAR_2, "ocxl-xsl-%x-%x-%x",
    VAR_5->domain, VAR_5->bus, VAR_5->dev);
 if (!VAR_6->irq_name) {
  FUNC_1(&VAR_4->dev, "Can't allocate name for xsl interrupt\n");
  VAR_7 = -VAR_1;
  goto err_xsl;
 }




 VAR_6->virq = FUNC_2(((void*)0), VAR_8);
 if (!VAR_6->virq) {
  FUNC_1(&VAR_4->dev,
   "irq_create_mapping failed for translation interrupt\n");
  VAR_7 = -VAR_0;
  goto err_name;
 }

 FUNC_0(&VAR_4->dev, "hwirq %d mapped to virq %d\n", VAR_8, VAR_6->virq);

 VAR_7 = FUNC_8(VAR_6->virq, VAR_3, 0, VAR_6->irq_name,
   VAR_5);
 if (VAR_7) {
  FUNC_1(&VAR_4->dev,
   "request_irq failed for translation interrupt: %d\n",
   VAR_7);
  VAR_7 = -VAR_0;
  goto err_mapping;
 }
 return 0;

err_mapping:
 FUNC_3(VAR_6->virq);
err_name:
 FUNC_5(VAR_6->irq_name);
err_xsl:
 FUNC_9(VAR_6);
 return VAR_7;
}
