
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {struct aer_stats* aer_stats; } ;
struct aer_stats {int * dev_fatal_errs; int dev_total_fatal_errs; int * dev_nonfatal_errs; int dev_total_nonfatal_errs; int * dev_cor_errs; int dev_total_cor_errs; } ;
struct aer_err_info {int severity; int status; int mask; } ;




 int VAR_0 ;
 int VAR_1 ;


__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_2,
       struct aer_err_info *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = -1;
 u64 *VAR_7 = ((void*)0);
 struct aer_stats *VAR_8 = VAR_2->aer_stats;

 if (!VAR_8)
  return;

 switch (VAR_3->severity) {
 case 130:
  VAR_8->dev_total_cor_errs++;
  VAR_7 = &VAR_8->dev_cor_errs[0];
  VAR_6 = VAR_0;
  break;
 case 128:
  VAR_8->dev_total_nonfatal_errs++;
  VAR_7 = &VAR_8->dev_nonfatal_errs[0];
  VAR_6 = VAR_1;
  break;
 case 129:
  VAR_8->dev_total_fatal_errs++;
  VAR_7 = &VAR_8->dev_fatal_errs[0];
  VAR_6 = VAR_1;
  break;
 }

 VAR_4 = (VAR_3->status & ~VAR_3->mask);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  if (VAR_4 & (1 << VAR_5))
   VAR_7[VAR_5]++;
}
