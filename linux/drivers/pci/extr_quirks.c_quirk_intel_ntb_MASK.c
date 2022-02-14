
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct pci_dev {TYPE_1__* resource; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0)
{
 int VAR_1;
 u8 VAR_2;

 VAR_1 = FUNC_0(VAR_0, 0x00D0, &VAR_2);
 if (VAR_1)
  return;

 VAR_0->resource[2].end = VAR_0->resource[2].start + ((u64) 1 << VAR_2) - 1;

 VAR_1 = FUNC_0(VAR_0, 0x00D1, &VAR_2);
 if (VAR_1)
  return;

 VAR_0->resource[4].end = VAR_0->resource[4].start + ((u64) 1 << VAR_2) - 1;
}
