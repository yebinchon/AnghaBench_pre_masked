
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcistub_device {int lock; int kref; int dev; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pcistub_device*) ;
 int FUNC_2 (int *) ;
 struct pcistub_device* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct pcistub_device *FUNC_6(struct pci_dev *VAR_1)
{
 struct pcistub_device *VAR_2;

 FUNC_0(&VAR_1->dev, "pcistub_device_alloc\n");

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->dev = FUNC_4(VAR_1);
 if (!VAR_2->dev) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 FUNC_2(&VAR_2->kref);
 FUNC_5(&VAR_2->lock);

 return VAR_2;
}
