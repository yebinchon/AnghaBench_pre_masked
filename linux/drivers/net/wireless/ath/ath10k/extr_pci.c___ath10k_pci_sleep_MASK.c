
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int ps_awake; scalar_t__ mem; int ps_wake_refcount; int ps_lock; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int) ;
 struct ath10k_pci* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_4)
{
 struct ath10k_pci *VAR_5 = FUNC_1(VAR_4);

 FUNC_3(&VAR_5->ps_lock);

 FUNC_0(VAR_4, VAR_0, "pci ps sleep reg refcount %lu awake %d\n",
     VAR_5->ps_wake_refcount, VAR_5->ps_awake);

 FUNC_2(VAR_3,
    VAR_5->mem + VAR_1 +
    VAR_2);
 VAR_5->ps_awake = 0;
}
