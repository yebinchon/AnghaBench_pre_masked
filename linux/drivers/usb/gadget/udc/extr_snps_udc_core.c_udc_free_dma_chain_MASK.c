
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udc_request {unsigned int chain_len; struct udc_data_dma* td_data; } ;
struct udc_data_dma {scalar_t__ next; } ;
struct udc {int data_requests; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct udc*,char*,struct udc_request*) ;
 int FUNC_1 (int ,struct udc_data_dma*,int) ;
 struct udc_data_dma* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct udc *VAR_0, struct udc_request *VAR_1)
{
 struct udc_data_dma *VAR_2 = VAR_1->td_data;
 unsigned int VAR_3;

 dma_addr_t VAR_4 = 0x00;
 dma_addr_t VAR_5 = (dma_addr_t)VAR_2->next;

 FUNC_0(VAR_0, "free chain req = %p\n", VAR_1);


 for (VAR_3 = 1; VAR_3 < VAR_1->chain_len; VAR_3++) {
  VAR_2 = FUNC_2(VAR_5);
  VAR_4 = (dma_addr_t)VAR_2->next;
  FUNC_1(VAR_0->data_requests, VAR_2, VAR_5);
  VAR_5 = VAR_4;
 }
}
