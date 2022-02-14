
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_p2p_noa_info {int dummy; } ;
struct ath10k_vif {struct ath10k* ar; } ;
struct ath10k {int data_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k_vif*,void*,size_t) ;
 int FUNC_1 (void*,size_t,struct wmi_p2p_noa_info const*) ;
 size_t FUNC_2 (struct wmi_p2p_noa_info const*) ;
 void* FUNC_3 (size_t,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ath10k_vif *VAR_1,
        const struct wmi_p2p_noa_info *VAR_2)
{
 struct ath10k *VAR_3 = VAR_1->ar;
 void *VAR_4;
 size_t VAR_5;

 FUNC_4(&VAR_3->data_lock);

 FUNC_0(VAR_1, ((void*)0), 0);

 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5)
  return;

 VAR_4 = FUNC_3(VAR_5, VAR_0);
 if (!VAR_4)
  return;

 FUNC_1(VAR_4, VAR_5, VAR_2);
 FUNC_0(VAR_1, VAR_4, VAR_5);
}
