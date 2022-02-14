
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int aer_cap; } ;
struct TYPE_2__ {int dw0; int dw1; int dw2; int dw3; } ;
struct aer_err_info {int status; int tlp_header_valid; scalar_t__ severity; int mask; TYPE_1__ tlp; int first_error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;

int FUNC_3(struct pci_dev *VAR_11, struct aer_err_info *VAR_12)
{
 int VAR_13, VAR_14;


 VAR_12->status = 0;
 VAR_12->tlp_header_valid = 0;

 VAR_13 = VAR_11->aer_cap;


 if (!VAR_13)
  return 0;

 if (VAR_12->severity == VAR_0) {
  FUNC_2(VAR_11, VAR_13 + VAR_5,
   &VAR_12->status);
  FUNC_2(VAR_11, VAR_13 + VAR_4,
   &VAR_12->mask);
  if (!(VAR_12->status & ~VAR_12->mask))
   return 0;
 } else if (FUNC_1(VAR_11) == VAR_10 ||
            FUNC_1(VAR_11) == VAR_9 ||
     VAR_12->severity == VAR_2) {


  FUNC_2(VAR_11, VAR_13 + VAR_8,
   &VAR_12->status);
  FUNC_2(VAR_11, VAR_13 + VAR_7,
   &VAR_12->mask);
  if (!(VAR_12->status & ~VAR_12->mask))
   return 0;


  FUNC_2(VAR_11, VAR_13 + VAR_3, &VAR_14);
  VAR_12->first_error = FUNC_0(VAR_14);

  if (VAR_12->status & VAR_1) {
   VAR_12->tlp_header_valid = 1;
   FUNC_2(VAR_11,
    VAR_13 + VAR_6, &VAR_12->tlp.dw0);
   FUNC_2(VAR_11,
    VAR_13 + VAR_6 + 4, &VAR_12->tlp.dw1);
   FUNC_2(VAR_11,
    VAR_13 + VAR_6 + 8, &VAR_12->tlp.dw2);
   FUNC_2(VAR_11,
    VAR_13 + VAR_6 + 12, &VAR_12->tlp.dw3);
  }
 }

 return 1;
}
