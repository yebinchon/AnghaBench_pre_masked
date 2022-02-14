
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_dev {scalar_t__ handle_pci_error; int pdev; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct aac_dev *VAR_0)
{
 return FUNC_0(VAR_0->pdev) || VAR_0->handle_pci_error;
}
