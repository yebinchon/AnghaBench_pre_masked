
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_peer_assoc_complete_arg {int dummy; } ;
struct wmi_main_peer_assoc_complete_cmd {int peer_ht_info; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,void*,struct wmi_peer_assoc_complete_arg const*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ath10k *VAR_0, void *VAR_1,
    const struct wmi_peer_assoc_complete_arg *VAR_2)
{
 struct wmi_main_peer_assoc_complete_cmd *VAR_3 = VAR_1;

 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_3->peer_ht_info, 0, sizeof(VAR_3->peer_ht_info));
}
