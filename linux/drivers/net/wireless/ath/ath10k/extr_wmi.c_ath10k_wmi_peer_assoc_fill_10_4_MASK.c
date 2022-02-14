
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_peer_assoc_complete_arg {int peer_bw_rxnss_override; } ;
struct wmi_10_4_peer_assoc_complete_cmd {scalar_t__ peer_bw_rxnss_override; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,void*,struct wmi_peer_assoc_complete_arg const*) ;

__attribute__((used)) static void
FUNC_3(struct ath10k *VAR_1, void *VAR_2,
    const struct wmi_peer_assoc_complete_arg *VAR_3)
{
 struct wmi_10_4_peer_assoc_complete_cmd *VAR_4 = VAR_2;

 FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_3->peer_bw_rxnss_override)
  VAR_4->peer_bw_rxnss_override =
   FUNC_1((VAR_3->peer_bw_rxnss_override - 1) |
          FUNC_0(VAR_0));
 else
  VAR_4->peer_bw_rxnss_override = 0;
}
