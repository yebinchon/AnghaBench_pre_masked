
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vfio_pci_device {struct pci_dev* pdev; } ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_4__ {unsigned char number; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned char FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct pci_dev* FUNC_3 (int,struct pci_dev*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;

__attribute__((used)) static unsigned int FUNC_6(void *VAR_5, bool VAR_6)
{
 struct vfio_pci_device *VAR_7 = VAR_5;
 struct pci_dev *VAR_8 = ((void*)0), *VAR_9 = VAR_7->pdev;
 unsigned char VAR_10;
 unsigned int VAR_11;

 if (VAR_6 || !FUNC_5() || FUNC_4(VAR_9->bus))
  return VAR_3 | VAR_4 |
         VAR_1 | VAR_2;

 VAR_10 = FUNC_0(VAR_9->bus);
 VAR_11 = VAR_3 | VAR_4;

 while ((VAR_8 = FUNC_3(VAR_0 << 8, VAR_8)) != ((void*)0)) {
  if (VAR_8 == VAR_9 ||
      FUNC_2(VAR_8->bus) != FUNC_2(VAR_9->bus) ||
      FUNC_4(VAR_8->bus))
   continue;

  if (VAR_8->bus->number >= VAR_9->bus->number &&
      VAR_8->bus->number <= VAR_10) {
   FUNC_1(VAR_8);
   VAR_11 |= VAR_1 | VAR_2;
   break;
  }
 }

 return VAR_11;
}
