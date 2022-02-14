
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {scalar_t__ device; int dev; } ;
struct TYPE_9__ {int num_vectors; int * vector_list; int start_vector; } ;
struct be_dev_info {int intr_mode; TYPE_4__ msix; int dev_family; int mac_addr; TYPE_2__* netdev; int db_total_size; int db_page_size; int unmapped_db; int db; struct pci_dev* pdev; scalar_t__ dpp_unmapped_len; scalar_t__ dpp_unmapped_addr; } ;
struct TYPE_6__ {int total_size; int size; int io_addr; } ;
struct be_adapter {int num_msix_vec; int num_msix_roce_vec; int ocrdma_dev; TYPE_3__* msix_entries; int num_evt_qs; int sli_family; TYPE_2__* netdev; TYPE_1__ roce_db; int db; struct pci_dev* pdev; } ;
struct TYPE_10__ {scalar_t__ be_abi_version; int (* add ) (struct be_dev_info*) ;} ;
struct TYPE_8__ {int vector; } ;
struct TYPE_7__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct be_adapter*) ;
 TYPE_5__* VAR_6 ;
 scalar_t__ FUNC_4 (struct pci_dev*,int) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct be_dev_info*) ;

__attribute__((used)) static void FUNC_7(struct be_adapter *VAR_7)
{
 struct be_dev_info VAR_8;
 int VAR_9, VAR_10;
 struct pci_dev *VAR_11 = VAR_7->pdev;

 if (!VAR_6)
  return;

 if (VAR_6->be_abi_version != VAR_2) {
  FUNC_0(&VAR_11->dev, "Cannot initialize RoCE due to ocrdma ABI mismatch\n");
  return;
 }

 if (VAR_11->device == VAR_5) {

  if (!FUNC_3(VAR_7))
   return;

  VAR_8.dpp_unmapped_addr = FUNC_5(VAR_11, 2);
  VAR_8.dpp_unmapped_len = FUNC_4(VAR_11, 2);
 } else {
  VAR_8.dpp_unmapped_addr = 0;
  VAR_8.dpp_unmapped_len = 0;
 }
 VAR_8.pdev = VAR_7->pdev;
 VAR_8.db = VAR_7->db;
 VAR_8.unmapped_db = VAR_7->roce_db.io_addr;
 VAR_8.db_page_size = VAR_7->roce_db.size;
 VAR_8.db_total_size = VAR_7->roce_db.total_size;
 VAR_8.netdev = VAR_7->netdev;
 FUNC_1(VAR_8.mac_addr, VAR_7->netdev->dev_addr, VAR_3);
 VAR_8.dev_family = VAR_7->sli_family;
 if (FUNC_3(VAR_7)) {



  VAR_10 = VAR_7->num_msix_vec + VAR_7->num_msix_roce_vec;
  VAR_8.intr_mode = VAR_1;
  VAR_8.msix.num_vectors = FUNC_2(VAR_10, VAR_4);




  VAR_8.msix.start_vector = VAR_7->num_evt_qs;
  for (VAR_9 = 0; VAR_9 < VAR_8.msix.num_vectors; VAR_9++) {
   VAR_8.msix.vector_list[VAR_9] =
       VAR_7->msix_entries[VAR_9].vector;
  }
 } else {
  VAR_8.msix.num_vectors = 0;
  VAR_8.intr_mode = VAR_0;
 }
 VAR_7->ocrdma_dev = VAR_6->add(&VAR_8);
}
