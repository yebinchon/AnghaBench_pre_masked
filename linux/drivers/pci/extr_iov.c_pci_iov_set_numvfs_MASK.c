
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_sriov {int stride; scalar_t__ pos; int offset; } ;
struct pci_dev {struct pci_sriov* sriov; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_2(struct pci_dev *VAR_3, int VAR_4)
{
 struct pci_sriov *VAR_5 = VAR_3->sriov;

 FUNC_1(VAR_3, VAR_5->pos + VAR_0, VAR_4);
 FUNC_0(VAR_3, VAR_5->pos + VAR_1, &VAR_5->offset);
 FUNC_0(VAR_3, VAR_5->pos + VAR_2, &VAR_5->stride);
}
