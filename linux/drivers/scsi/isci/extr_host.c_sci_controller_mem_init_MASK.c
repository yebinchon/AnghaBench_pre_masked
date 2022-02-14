
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int physical_address; } ;
struct TYPE_8__ {int physical_address; } ;
struct TYPE_10__ {TYPE_3__ address_table; TYPE_2__ headers; } ;
struct isci_host {TYPE_6__* scu_registers; TYPE_4__ uf_control; TYPE_1__* smu_registers; int tc_dma; int rnc_dma; int cq_dma; } ;
struct TYPE_11__ {int uf_address_table_upper; int uf_address_table_lower; int uf_header_base_address_upper; int uf_header_base_address_lower; } ;
struct TYPE_12__ {TYPE_5__ sdma; } ;
struct TYPE_7__ {int host_task_table_upper; int host_task_table_lower; int remote_node_context_upper; int remote_node_context_lower; int completion_queue_upper; int completion_queue_lower; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct isci_host*) ;
 int FUNC_2 (struct isci_host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct isci_host *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);

 if (VAR_1)
  return VAR_1;

 FUNC_4(FUNC_0(VAR_0->cq_dma), &VAR_0->smu_registers->completion_queue_lower);
 FUNC_4(FUNC_3(VAR_0->cq_dma), &VAR_0->smu_registers->completion_queue_upper);

 FUNC_4(FUNC_0(VAR_0->rnc_dma), &VAR_0->smu_registers->remote_node_context_lower);
 FUNC_4(FUNC_3(VAR_0->rnc_dma), &VAR_0->smu_registers->remote_node_context_upper);

 FUNC_4(FUNC_0(VAR_0->tc_dma), &VAR_0->smu_registers->host_task_table_lower);
 FUNC_4(FUNC_3(VAR_0->tc_dma), &VAR_0->smu_registers->host_task_table_upper);

 FUNC_2(VAR_0);





 FUNC_4(FUNC_0(VAR_0->uf_control.headers.physical_address),
  &VAR_0->scu_registers->sdma.uf_header_base_address_lower);
 FUNC_4(FUNC_3(VAR_0->uf_control.headers.physical_address),
  &VAR_0->scu_registers->sdma.uf_header_base_address_upper);

 FUNC_4(FUNC_0(VAR_0->uf_control.address_table.physical_address),
  &VAR_0->scu_registers->sdma.uf_address_table_lower);
 FUNC_4(FUNC_3(VAR_0->uf_control.address_table.physical_address),
  &VAR_0->scu_registers->sdma.uf_address_table_upper);

 return 0;
}
