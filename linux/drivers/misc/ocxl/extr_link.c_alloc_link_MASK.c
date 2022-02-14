
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_2__* bus; } ;
struct ocxl_link {int platform_data; TYPE_1__* spa; int irq_available; int dev; int bus; int domain; int ref; } ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {int spa_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,struct ocxl_link*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ocxl_link*) ;
 int FUNC_4 (struct ocxl_link*) ;
 int FUNC_5 (int *) ;
 struct ocxl_link* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct pci_dev*,int ,int,int *) ;
 int FUNC_9 (struct ocxl_link*) ;
 int FUNC_10 (struct pci_dev*,struct ocxl_link*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_3, int VAR_4, struct ocxl_link **VAR_5)
{
 struct ocxl_link *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(sizeof(struct ocxl_link), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_5(&VAR_6->ref);
 VAR_6->domain = FUNC_7(VAR_3->bus);
 VAR_6->bus = VAR_3->bus->number;
 VAR_6->dev = FUNC_0(VAR_3->devfn);
 FUNC_2(&VAR_6->irq_available, VAR_2);

 VAR_7 = FUNC_1(VAR_3, VAR_6);
 if (VAR_7)
  goto err_free;

 VAR_7 = FUNC_10(VAR_3, VAR_6);
 if (VAR_7)
  goto err_spa;


 VAR_7 = FUNC_8(VAR_3, VAR_6->spa->spa_mem, VAR_4,
    &VAR_6->platform_data);
 if (VAR_7)
  goto err_xsl_irq;

 *VAR_5 = VAR_6;
 return 0;

err_xsl_irq:
 FUNC_9(VAR_6);
err_spa:
 FUNC_3(VAR_6);
err_free:
 FUNC_4(VAR_6);
 return VAR_7;
}
