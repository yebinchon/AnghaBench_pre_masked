
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ hdr_type; int bus; } ;
struct iproc_pcie {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct iproc_pcie* FUNC_0 (int ) ;
 int FUNC_1 (struct iproc_pcie*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1)
{
 struct iproc_pcie *VAR_2 = FUNC_0(VAR_1->bus);

 if (VAR_1->hdr_type == VAR_0)
  FUNC_1(VAR_2, 0, 0);
}
