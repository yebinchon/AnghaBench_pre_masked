
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int aer_cap; } ;
struct aer_err_info {int severity; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_5,
       struct aer_err_info *VAR_6)
{
 int VAR_7 = VAR_5->aer_cap;
 u32 VAR_8, VAR_9, VAR_10;

 FUNC_0(VAR_5, VAR_7 + VAR_4, &VAR_8);
 FUNC_0(VAR_5, VAR_7 + VAR_2, &VAR_9);
 VAR_8 &= ~VAR_9;
 if (!VAR_8)
  return 0;

 FUNC_0(VAR_5, VAR_7 + VAR_3, &VAR_10);
 VAR_8 &= VAR_10;
 if (VAR_8)
  VAR_6->severity = VAR_0;
 else
  VAR_6->severity = VAR_1;

 return 1;
}
