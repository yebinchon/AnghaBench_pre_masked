
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int * ops; int topo; struct pci_dev* pdev; } ;
struct intel_ntb_dev {int db_mask_lock; scalar_t__ db_mask; scalar_t__ db_link_mask; scalar_t__ db_valid_mask; scalar_t__ lnk_sta; scalar_t__ ntb_ctl; scalar_t__ db_vec_shift; scalar_t__ db_vec_count; scalar_t__ db_count; scalar_t__ spad_count; scalar_t__ mw_count; scalar_t__ bar4_split; int b2b_idx; scalar_t__ b2b_off; TYPE_1__ ntb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct intel_ntb_dev *VAR_3,
        struct pci_dev *VAR_4)
{
 VAR_3->ntb.pdev = VAR_4;
 VAR_3->ntb.topo = VAR_0;
 VAR_3->ntb.ops = &VAR_2;

 VAR_3->b2b_off = 0;
 VAR_3->b2b_idx = VAR_1;

 VAR_3->bar4_split = 0;

 VAR_3->mw_count = 0;
 VAR_3->spad_count = 0;
 VAR_3->db_count = 0;
 VAR_3->db_vec_count = 0;
 VAR_3->db_vec_shift = 0;

 VAR_3->ntb_ctl = 0;
 VAR_3->lnk_sta = 0;

 VAR_3->db_valid_mask = 0;
 VAR_3->db_link_mask = 0;
 VAR_3->db_mask = 0;

 FUNC_0(&VAR_3->db_mask_lock);
}
