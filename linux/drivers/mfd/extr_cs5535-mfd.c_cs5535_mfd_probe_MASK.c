
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int end; int start; int flags; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_6__ {int id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct resource* VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int,TYPE_1__*,int,int *,int ,int *) ;
 int FUNC_5 (char*,TYPE_1__*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_4,
  const struct pci_device_id *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6)
  return VAR_6;


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  int VAR_8 = VAR_1[VAR_7].id;
  struct resource *VAR_9 = &VAR_2[VAR_8];

  VAR_9->flags = VAR_0;
  VAR_9->start = FUNC_9(VAR_4, VAR_8);
  VAR_9->end = FUNC_8(VAR_4, VAR_8);


  VAR_1[VAR_7].id = 0;
 }

 VAR_6 = FUNC_4(&VAR_4->dev, -1, VAR_1,
         FUNC_0(VAR_1), ((void*)0), 0, ((void*)0));
 if (VAR_6) {
  FUNC_1(&VAR_4->dev, "MFD add devices failed: %d\n", VAR_6);
  goto err_disable;
 }

 if (FUNC_3())
  FUNC_5("cs5535-acpi", VAR_3, FUNC_0(VAR_3));

 FUNC_2(&VAR_4->dev, "%zu devices registered.\n",
   FUNC_0(VAR_1));

 return 0;

err_disable:
 FUNC_6(VAR_4);
 return VAR_6;
}
