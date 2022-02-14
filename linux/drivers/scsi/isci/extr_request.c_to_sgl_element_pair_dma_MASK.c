
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isci_request {int * sg_table; TYPE_1__* tc; } ;
struct isci_host {scalar_t__ tc_dma; int * task_context_table; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int sgl_pair_cd; int sgl_pair_ab; } ;


 scalar_t__ FUNC_0 (struct isci_request*,int *) ;

__attribute__((used)) static dma_addr_t FUNC_1(struct isci_host *VAR_0,
       struct isci_request *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 if (VAR_2 == 0) {
  VAR_3 = (void *) &VAR_1->tc->sgl_pair_ab -
    (void *) &VAR_0->task_context_table[0];
  return VAR_0->tc_dma + VAR_3;
 } else if (VAR_2 == 1) {
  VAR_3 = (void *) &VAR_1->tc->sgl_pair_cd -
    (void *) &VAR_0->task_context_table[0];
  return VAR_0->tc_dma + VAR_3;
 }

 return FUNC_0(VAR_1, &VAR_1->sg_table[VAR_2 - 2]);
}
