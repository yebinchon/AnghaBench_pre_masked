
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {TYPE_1__* host; int probe_done; } ;
typedef int pci_ers_result_t ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 struct ipr_ioa_cfg* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static pci_ers_result_t FUNC_4(struct pci_dev *VAR_1)
{
 unsigned long VAR_2 = 0;
 struct ipr_ioa_cfg *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_3->host->host_lock, VAR_2);
 if (!VAR_3->probe_done)
  FUNC_1(VAR_1);
 FUNC_3(VAR_3->host->host_lock, VAR_2);
 return VAR_0;
}
