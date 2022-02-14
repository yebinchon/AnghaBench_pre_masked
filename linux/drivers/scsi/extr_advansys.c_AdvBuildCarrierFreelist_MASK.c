
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv_dvc_var {int carrier_addr; TYPE_1__* carrier; TYPE_1__* carr_freelist; } ;
typedef int off_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* next_vpa; scalar_t__ areq_vpa; void* carr_va; void* carr_pa; } ;
typedef int ADV_CARR_T ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct adv_dvc_var *VAR_1)
{
 off_t VAR_2 = 0, VAR_3;
 dma_addr_t VAR_4;
 int VAR_5 = VAR_0 / sizeof(ADV_CARR_T), VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_2 = VAR_6 * sizeof(ADV_CARR_T);

  VAR_4 = VAR_1->carrier_addr + VAR_2;

  VAR_1->carrier[VAR_6].carr_pa = FUNC_0(VAR_4);
  VAR_1->carrier[VAR_6].carr_va = FUNC_0(VAR_2);
  VAR_1->carrier[VAR_6].areq_vpa = 0;
  VAR_3 = VAR_2 + sizeof(ADV_CARR_T);
  if (VAR_6 == VAR_5)
   VAR_3 = ~0;
  VAR_1->carrier[VAR_6].next_vpa = FUNC_0(VAR_3);
 }






 VAR_1->carr_freelist = &VAR_1->carrier[1];
}
