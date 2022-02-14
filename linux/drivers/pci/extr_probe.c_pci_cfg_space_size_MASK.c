
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int class; TYPE_1__* bus; scalar_t__ is_virtfn; } ;
struct TYPE_2__ {int bus_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;

int FUNC_4(struct pci_dev *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 u16 VAR_11;
 if (VAR_8->bus->bus_flags & VAR_0)
  return VAR_3;

 VAR_11 = VAR_8->class >> 8;
 if (VAR_11 == VAR_4)
  return FUNC_0(VAR_8);

 if (FUNC_2(VAR_8))
  return FUNC_0(VAR_8);

 VAR_9 = FUNC_1(VAR_8, VAR_1);
 if (!VAR_9)
  return VAR_3;

 FUNC_3(VAR_8, VAR_9 + VAR_5, &VAR_10);
 if (VAR_10 & (VAR_6 | VAR_7))
  return FUNC_0(VAR_8);

 return VAR_3;
}
