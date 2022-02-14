
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct pci_dev*,int **,scalar_t__*,int ) ;

u32 *
FUNC_2(struct pci_dev *VAR_7)
{
 if (VAR_7->device == VAR_0) {
  if (VAR_4 == 0)
   FUNC_1(VAR_7, &VAR_3,
    &VAR_4, VAR_2);
  return VAR_3;
 } else if (FUNC_0(VAR_7->device)) {
  if (VAR_6 == 0)
   FUNC_1(VAR_7, &VAR_5,
    &VAR_6, VAR_1);
  return VAR_5;
 }

 return ((void*)0);
}
