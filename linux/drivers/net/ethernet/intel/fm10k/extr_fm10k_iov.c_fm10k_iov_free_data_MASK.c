
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct fm10k_intfc {int * iov_data; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *,int ) ;
 struct fm10k_intfc* FUNC_2 (struct pci_dev*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 struct fm10k_intfc *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->iov_data)
  return;


 FUNC_0(VAR_1);


 FUNC_1(VAR_2->iov_data, VAR_0);
 VAR_2->iov_data = ((void*)0);
}
