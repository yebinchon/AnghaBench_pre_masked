
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ath10k_pci {struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 struct ath10k_pci* VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 struct ath10k_pci* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_1 ;

void FUNC_2(struct timer_list *VAR_2)
{
 struct ath10k_pci *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);
 struct ath10k *VAR_4 = VAR_3->ar;

 FUNC_0(VAR_4);
}
