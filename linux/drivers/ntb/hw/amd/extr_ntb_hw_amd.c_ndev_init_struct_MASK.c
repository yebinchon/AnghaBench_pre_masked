
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int * ops; int topo; struct pci_dev* pdev; } ;
struct amd_ntb_dev {int db_mask_lock; int int_mask; TYPE_1__ ntb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct amd_ntb_dev *VAR_3,
        struct pci_dev *VAR_4)
{
 VAR_3->ntb.pdev = VAR_4;
 VAR_3->ntb.topo = VAR_1;
 VAR_3->ntb.ops = &VAR_2;
 VAR_3->int_mask = VAR_0;
 FUNC_0(&VAR_3->db_mask_lock);
}
