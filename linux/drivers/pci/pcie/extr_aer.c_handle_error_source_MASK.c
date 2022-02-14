
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int aer_cap; } ;
struct aer_err_info {scalar_t__ severity; int status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pci_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_7, struct aer_err_info *VAR_8)
{
 int VAR_9;

 if (VAR_8->severity == VAR_0) {




  VAR_9 = VAR_7->aer_cap;
  if (VAR_9)
   FUNC_2(VAR_7, VAR_9 + VAR_4,
     VAR_8->status);
  FUNC_0(VAR_7);
 } else if (VAR_8->severity == VAR_2)
  FUNC_3(VAR_7, VAR_6,
     VAR_3);
 else if (VAR_8->severity == VAR_1)
  FUNC_3(VAR_7, VAR_5,
     VAR_3);
 FUNC_1(VAR_7);
}
