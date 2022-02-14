
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devres {int region_mask; } ;
struct pci_dev {int * resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,char const*,int) ;
 struct pci_devres* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*,char*,int,int *) ;
 int FUNC_6 (int ,scalar_t__,char const*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_3, int VAR_4,
    const char *VAR_5, int VAR_6)
{
 struct pci_devres *VAR_7;

 if (FUNC_3(VAR_3, VAR_4) == 0)
  return 0;

 if (FUNC_2(VAR_3, VAR_4) & VAR_1) {
  if (!FUNC_6(FUNC_4(VAR_3, VAR_4),
       FUNC_3(VAR_3, VAR_4), VAR_5))
   goto err_out;
 } else if (FUNC_2(VAR_3, VAR_4) & VAR_2) {
  if (!FUNC_0(FUNC_4(VAR_3, VAR_4),
     FUNC_3(VAR_3, VAR_4), VAR_5,
     VAR_6))
   goto err_out;
 }

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7)
  VAR_7->region_mask |= 1 << VAR_4;

 return 0;

err_out:
 FUNC_5(VAR_3, "BAR %d: can't reserve %pR\n", VAR_4,
   &VAR_3->resource[VAR_4]);
 return -VAR_0;
}
