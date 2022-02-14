
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ is_virtfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int ) ;

__attribute__((used)) static u8 FUNC_1(struct pci_dev *VAR_4)
{
 if (VAR_4->is_virtfn)
  return VAR_2;
 else if (FUNC_0(VAR_4, VAR_3) > 0)
  return VAR_1;
 else
  return VAR_0;
}
