
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qed_filter_accept_flags {int rx_accept_filter; int tx_accept_filter; scalar_t__ update_tx_mode_config; scalar_t__ update_rx_mode_config; } ;
struct qed_sp_vport_update_params {struct qed_filter_accept_flags accept_flags; } ;
struct qed_public_vf_info {int rx_accept_mode; int tx_accept_mode; int is_trusted_configured; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qed_public_vf_info* FUNC_1 (struct qed_hwfn*,int,int) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_3,
        u8 VAR_4,
        struct qed_sp_vport_update_params *VAR_5,
        u16 *VAR_6)
{
 u8 VAR_7 = VAR_1 | VAR_0;
 struct qed_filter_accept_flags *VAR_8 = &VAR_5->accept_flags;
 struct qed_public_vf_info *VAR_9;





 if (!(*VAR_6 & FUNC_0(VAR_2)))
  return 0;

 VAR_9 = FUNC_1(VAR_3, VAR_4, 1);

 if (VAR_8->update_rx_mode_config) {
  VAR_9->rx_accept_mode = VAR_8->rx_accept_filter;
  if (!VAR_9->is_trusted_configured)
   VAR_8->rx_accept_filter &= ~VAR_7;
 }

 if (VAR_8->update_tx_mode_config) {
  VAR_9->tx_accept_mode = VAR_8->tx_accept_filter;
  if (!VAR_9->is_trusted_configured)
   VAR_8->tx_accept_filter &= ~VAR_7;
 }

 return 0;
}
