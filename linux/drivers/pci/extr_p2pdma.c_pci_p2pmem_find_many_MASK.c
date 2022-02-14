
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev**) ;
 struct pci_dev** FUNC_1 (int,int ) ;
 struct pci_dev* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ,int ,struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,struct device**,int,int) ;
 size_t FUNC_7 (int) ;

struct pci_dev *FUNC_8(struct device **VAR_4, int VAR_5)
{
 struct pci_dev *VAR_6 = ((void*)0);
 int VAR_7;
 int VAR_8 = VAR_1;
 struct pci_dev **VAR_9;
 int VAR_10 = 0;
 const int VAR_11 = VAR_2 / sizeof(*VAR_9);
 int VAR_12;

 VAR_9 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_9)
  return ((void*)0);

 while ((VAR_6 = FUNC_4(VAR_3, VAR_3, VAR_6))) {
  if (!FUNC_5(VAR_6))
   continue;

  VAR_7 = FUNC_6(VAR_6, VAR_4,
          VAR_5, 0);
  if (VAR_7 < 0 || VAR_7 > VAR_8)
   continue;

  if (VAR_7 == VAR_8 && VAR_10 >= VAR_11)
   continue;

  if (VAR_7 < VAR_8) {
   for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
    FUNC_3(VAR_9[VAR_12]);

   VAR_10 = 0;
   VAR_8 = VAR_7;
  }

  VAR_9[VAR_10++] = FUNC_2(VAR_6);
 }

 if (VAR_10)
  VAR_6 = FUNC_2(VAR_9[FUNC_7(VAR_10)]);

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
  FUNC_3(VAR_9[VAR_12]);

 FUNC_0(VAR_9);
 return VAR_6;
}
