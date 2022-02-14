
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ath10k_sdio {int is_disabled; TYPE_2__* func; } ;
struct ath10k {int dummy; } ;
struct TYPE_6__ {TYPE_1__* card; } ;
struct TYPE_5__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 struct ath10k_sdio* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct ath10k *VAR_1)
{
 struct ath10k_sdio *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (VAR_2->is_disabled)
  return;

 FUNC_0(VAR_1, VAR_0, "sdio power off\n");


 FUNC_4(VAR_2->func);

 VAR_3 = FUNC_5(VAR_2->func);
 if (VAR_3) {
  FUNC_2(VAR_1, "unable to disable sdio function: %d\n", VAR_3);
  FUNC_6(VAR_2->func);
  return;
 }

 VAR_3 = FUNC_3(VAR_2->func->card->host);
 if (VAR_3)
  FUNC_2(VAR_1, "unable to reset sdio: %d\n", VAR_3);

 FUNC_6(VAR_2->func);

 VAR_2->is_disabled = 1;
}
