
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int devfn; int aer_cap; int enable_cnt; TYPE_1__* bus; } ;
struct aer_err_info {int id; scalar_t__ severity; int multi_error_valid; } ;
struct TYPE_2__ {int bus_flags; int number; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static bool FUNC_4(struct pci_dev *VAR_8, struct aer_err_info *VAR_9)
{
 int VAR_10;
 u32 VAR_11, VAR_12;
 u16 VAR_13;





 if ((FUNC_0(VAR_9->id) != 0) &&
     !(VAR_8->bus->bus_flags & VAR_1)) {

  if (VAR_9->id == ((VAR_8->bus->number << 8) | VAR_8->devfn))
   return 1;


  if (!VAR_9->multi_error_valid)
   return 0;
 }
 if (FUNC_1(&VAR_8->enable_cnt) == 0)
  return 0;


 FUNC_3(VAR_8, VAR_7, &VAR_13);
 if (!(VAR_13 & VAR_6))
  return 0;

 VAR_10 = VAR_8->aer_cap;
 if (!VAR_10)
  return 0;


 if (VAR_9->severity == VAR_0) {
  FUNC_2(VAR_8, VAR_10 + VAR_3, &VAR_11);
  FUNC_2(VAR_8, VAR_10 + VAR_2, &VAR_12);
 } else {
  FUNC_2(VAR_8, VAR_10 + VAR_5, &VAR_11);
  FUNC_2(VAR_8, VAR_10 + VAR_4, &VAR_12);
 }
 if (VAR_11 & ~VAR_12)
  return 1;

 return 0;
}
