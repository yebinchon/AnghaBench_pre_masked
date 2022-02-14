
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hif_scatter_req {int list; } ;
struct ath6kl_sdio {int scat_lock; int scat_req; } ;
struct ath6kl {int dummy; } ;


 struct ath6kl_sdio* FUNC_0 (struct ath6kl*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ath6kl *VAR_0,
     struct hif_scatter_req *VAR_1)
{
 struct ath6kl_sdio *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->scat_lock);

 FUNC_1(&VAR_1->list, &VAR_2->scat_req);

 FUNC_3(&VAR_2->scat_lock);
}
