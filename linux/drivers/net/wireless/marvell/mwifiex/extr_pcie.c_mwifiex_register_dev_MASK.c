
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int can_ext_scan; int num_mem_types; int mem_type_mapping_tbl; int tx_buf_size; } ;
struct pcie_service_card {TYPE_1__ pcie; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int ext_scan; int num_mem_types; int mem_type_mapping_tbl; int tx_buf_size; struct pcie_service_card* card; } ;


 int FUNC_0 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_1 (struct mwifiex_adapter*) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_adapter *VAR_0)
{
 struct pcie_service_card *VAR_1 = VAR_0->card;


 VAR_1->adapter = VAR_0;

 if (FUNC_1(VAR_0))
  return -1;

 VAR_0->tx_buf_size = VAR_1->pcie.tx_buf_size;
 VAR_0->mem_type_mapping_tbl = VAR_1->pcie.mem_type_mapping_tbl;
 VAR_0->num_mem_types = VAR_1->pcie.num_mem_types;
 VAR_0->ext_scan = VAR_1->pcie.can_ext_scan;
 FUNC_0(VAR_0);

 return 0;
}
