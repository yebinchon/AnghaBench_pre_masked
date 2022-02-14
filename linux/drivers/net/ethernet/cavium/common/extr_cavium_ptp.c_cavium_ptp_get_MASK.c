
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cavium_ptp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cavium_ptp* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct cavium_ptp*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int ,int *) ;
 struct cavium_ptp* FUNC_4 (struct pci_dev*) ;

struct cavium_ptp *FUNC_5(void)
{
 struct cavium_ptp *VAR_4;
 struct pci_dev *VAR_5;

 VAR_5 = FUNC_3(VAR_3,
         VAR_2, ((void*)0));
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_4(VAR_5);
 if (!VAR_4)
  VAR_4 = FUNC_0(-VAR_1);
 if (FUNC_1(VAR_4))
  FUNC_2(VAR_5);

 return VAR_4;
}
