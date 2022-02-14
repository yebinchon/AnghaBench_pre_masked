
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ath10k_pci {scalar_t__ ps_wake_refcount; int ps_lock; int ps_awake; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 struct ath10k_pci* VAR_1 ;
 int FUNC_1 (struct ath10k*,int ,char*,scalar_t__,int ) ;
 struct ath10k_pci* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct ath10k_pci *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);
 struct ath10k *VAR_5 = VAR_4->ar;
 unsigned long VAR_6;

 FUNC_3(&VAR_4->ps_lock, VAR_6);

 FUNC_1(VAR_5, VAR_0, "pci ps timer refcount %lu awake %d\n",
     VAR_4->ps_wake_refcount, VAR_4->ps_awake);

 if (VAR_4->ps_wake_refcount > 0)
  goto skip;

 FUNC_0(VAR_5);

skip:
 FUNC_4(&VAR_4->ps_lock, VAR_6);
}
