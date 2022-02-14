
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pci_bar_kva; } ;
struct bfa_ioc {TYPE_1__ pcidev; } ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,char*,int ) ;

__attribute__((used)) static enum bfa_status
FUNC_1(struct bfa_ioc *VAR_2, u32 VAR_3,
         u32 *VAR_4)
{
 return FUNC_0(VAR_2->pcidev.pci_bar_kva,
   VAR_0 + (VAR_3 * sizeof(u32)),
   (char *)VAR_4, VAR_1);
}
