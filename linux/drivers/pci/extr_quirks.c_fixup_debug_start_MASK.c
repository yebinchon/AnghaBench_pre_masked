
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pci_dev*,char*,void (*) (struct pci_dev*),int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ktime_t FUNC_3(struct pci_dev *VAR_2,
     void (*VAR_3)(struct pci_dev *VAR_4))
{
 if (VAR_1)
  FUNC_1(VAR_2, "calling  %pS @ %i\n", VAR_3, FUNC_2(VAR_0));

 return FUNC_0();
}
