
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct resource {int dummy; } ;
struct pci_dev {struct resource* resource; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;

__attribute__((used)) static struct resource *FUNC_0(struct pci_dev *VAR_9, u8 VAR_10,
         u8 VAR_11)
{
 if (VAR_10 <= VAR_0 && VAR_11 <= VAR_4)
  return &VAR_9->resource[VAR_10];






 else if (VAR_10 == VAR_1)
  return &VAR_9->resource[VAR_8];
 else
  return ((void*)0);
}
