
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int *,int *,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

bool FUNC_4(struct pci_dev *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 u64 VAR_5, VAR_6;


 if (VAR_2)
  return 0;

 if (!FUNC_0(VAR_0))
  return 0;

 if (!FUNC_2())
  return 0;

 if (FUNC_3(VAR_1))
  return 0;


 VAR_3 = FUNC_1(VAR_1, &VAR_5, &VAR_4, &VAR_6);
 if (VAR_3)
  return 0;

 return 1;
}
