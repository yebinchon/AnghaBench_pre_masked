
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int device; int vendor; int num; } ;
struct ath10k_sdio {int workqueue; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct ath10k_sdio* FUNC_5 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_6(struct sdio_func *VAR_1)
{
 struct ath10k_sdio *VAR_2 = FUNC_5(VAR_1);
 struct ath10k *VAR_3 = VAR_2->ar;

 FUNC_2(VAR_3, VAR_0,
     "sdio removed func %d vendor 0x%x device 0x%x\n",
     VAR_1->num, VAR_1->vendor, VAR_1->device);

 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 FUNC_4(VAR_2->workqueue);
 FUNC_3(VAR_2->workqueue);
}
