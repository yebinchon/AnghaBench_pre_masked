
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {scalar_t__ ps_wake_refcount; int ps_lock; } ;
struct ath10k {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 struct ath10k_pci* FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct ath10k *VAR_1)
{
 struct ath10k_pci *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;

 FUNC_1(VAR_1, VAR_0, "boot hif stop\n");

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_8(&VAR_1->napi);
 FUNC_7(&VAR_1->napi);
 FUNC_6(VAR_1);

 FUNC_2(VAR_1);

 FUNC_9(&VAR_2->ps_lock, VAR_3);
 FUNC_0(VAR_2->ps_wake_refcount > 0);
 FUNC_10(&VAR_2->ps_lock, VAR_3);
}
