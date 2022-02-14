
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {TYPE_1__* host; int eeh_wait_q; scalar_t__ needs_warm_reset; scalar_t__ probe_done; } ;
typedef int pci_ers_result_t ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipr_ioa_cfg*,int ,int ) ;
 int FUNC_1 (struct ipr_ioa_cfg*,int ) ;
 int VAR_2 ;
 struct ipr_ioa_cfg* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static pci_ers_result_t FUNC_6(struct pci_dev *VAR_3)
{
 unsigned long VAR_4 = 0;
 struct ipr_ioa_cfg *VAR_5 = FUNC_2(VAR_3);

 FUNC_3(VAR_5->host->host_lock, VAR_4);
 if (VAR_5->probe_done) {
  if (VAR_5->needs_warm_reset)
   FUNC_1(VAR_5, VAR_0);
  else
   FUNC_0(VAR_5, VAR_2,
      VAR_0);
 } else
  FUNC_5(&VAR_5->eeh_wait_q);
 FUNC_4(VAR_5->host->host_lock, VAR_4);
 return VAR_1;
}
