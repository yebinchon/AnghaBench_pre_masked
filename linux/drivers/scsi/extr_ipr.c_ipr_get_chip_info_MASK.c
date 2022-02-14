
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ vendor; scalar_t__ device; } ;
struct ipr_chip_t {scalar_t__ vendor; scalar_t__ device; } ;


 int FUNC_0 (struct ipr_chip_t const*) ;
 struct ipr_chip_t const* VAR_0 ;

__attribute__((used)) static const struct ipr_chip_t *
FUNC_1(const struct pci_device_id *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].vendor == VAR_1->vendor &&
      VAR_0[VAR_2].device == VAR_1->device)
   return &VAR_0[VAR_2];
 return ((void*)0);
}
