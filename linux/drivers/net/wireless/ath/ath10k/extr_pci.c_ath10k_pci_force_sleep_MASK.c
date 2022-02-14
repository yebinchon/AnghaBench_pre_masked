
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int ps_awake; int ps_lock; scalar_t__ mem; } ;
struct ath10k {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_3)
{
 struct ath10k_pci *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->ps_lock, VAR_5);

 FUNC_1(VAR_2,
    VAR_4->mem + VAR_0 +
    VAR_1);
 VAR_4->ps_awake = 0;

 FUNC_3(&VAR_4->ps_lock, VAR_5);
}
