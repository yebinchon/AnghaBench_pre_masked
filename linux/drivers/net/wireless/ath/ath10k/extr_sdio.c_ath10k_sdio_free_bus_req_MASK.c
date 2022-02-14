
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_sdio_bus_request {int list; } ;
struct ath10k_sdio {int lock; int bus_req_freeq; } ;
struct ath10k {int dummy; } ;


 struct ath10k_sdio* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ath10k_sdio_bus_request*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ath10k *VAR_0,
         struct ath10k_sdio_bus_request *VAR_1)
{
 struct ath10k_sdio *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 FUNC_3(&VAR_2->lock);
 FUNC_1(&VAR_1->list, &VAR_2->bus_req_freeq);
 FUNC_4(&VAR_2->lock);
}
