
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int device; int vendor; int num; } ;
struct ath6kl_sdio {struct ath6kl_sdio* dma_buffer; int ar; int wr_async_work; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ath6kl_sdio*) ;
 struct ath6kl_sdio* FUNC_6 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_7(struct sdio_func *VAR_1)
{
 struct ath6kl_sdio *VAR_2;

 FUNC_2(VAR_0,
     "sdio removed func %d vendor 0x%x device 0x%x\n",
     VAR_1->num, VAR_1->vendor, VAR_1->device);

 VAR_2 = FUNC_6(VAR_1);

 FUNC_3(VAR_2->ar);
 FUNC_4(&VAR_2->wr_async_work);

 FUNC_0(VAR_2->ar);
 FUNC_1(VAR_2->ar);

 FUNC_5(VAR_2->dma_buffer);
 FUNC_5(VAR_2);
}
