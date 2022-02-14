
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {struct aer_stats* aer_stats; } ;
struct aer_stats {int rootport_total_nonfatal_errs; int rootport_total_fatal_errs; int rootport_total_cor_errs; } ;
struct aer_err_source {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_3,
     struct aer_err_source *VAR_4)
{
 struct aer_stats *VAR_5 = VAR_3->aer_stats;

 if (!VAR_5)
  return;

 if (VAR_4->status & VAR_0)
  VAR_5->rootport_total_cor_errs++;

 if (VAR_4->status & VAR_2) {
  if (VAR_4->status & VAR_1)
   VAR_5->rootport_total_fatal_errs++;
  else
   VAR_5->rootport_total_nonfatal_errs++;
 }
}
