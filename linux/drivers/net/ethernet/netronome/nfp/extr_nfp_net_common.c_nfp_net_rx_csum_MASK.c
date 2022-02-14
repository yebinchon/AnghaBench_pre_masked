
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int csum; scalar_t__ ip_summed; } ;
struct TYPE_4__ {int flags; } ;
struct nfp_net_rx_desc {TYPE_2__ rxd; } ;
struct nfp_net_r_vector {int rx_sync; int hw_csum_rx_inner_ok; int hw_csum_rx_ok; int hw_csum_rx_error; int hw_csum_rx_complete; } ;
struct nfp_net_dp {TYPE_1__* netdev; } ;
struct nfp_meta_parsed {int csum; scalar_t__ csum_type; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct nfp_net_dp *VAR_5,
       struct nfp_net_r_vector *VAR_6,
       struct nfp_net_rx_desc *VAR_7,
       struct nfp_meta_parsed *VAR_8, struct sk_buff *VAR_9)
{
 FUNC_3(VAR_9);

 if (!(VAR_5->netdev->features & VAR_0))
  return;

 if (VAR_8->csum_type) {
  VAR_9->ip_summed = VAR_8->csum_type;
  VAR_9->csum = VAR_8->csum;
  FUNC_4(&VAR_6->rx_sync);
  VAR_6->hw_csum_rx_complete++;
  FUNC_5(&VAR_6->rx_sync);
  return;
 }

 if (FUNC_2(FUNC_1(VAR_7->rxd.flags))) {
  FUNC_4(&VAR_6->rx_sync);
  VAR_6->hw_csum_rx_error++;
  FUNC_5(&VAR_6->rx_sync);
  return;
 }





 if (VAR_7->rxd.flags & VAR_3 ||
     VAR_7->rxd.flags & VAR_4) {
  FUNC_0(VAR_9);
  FUNC_4(&VAR_6->rx_sync);
  VAR_6->hw_csum_rx_ok++;
  FUNC_5(&VAR_6->rx_sync);
 }

 if (VAR_7->rxd.flags & VAR_1 ||
     VAR_7->rxd.flags & VAR_2) {
  FUNC_0(VAR_9);
  FUNC_4(&VAR_6->rx_sync);
  VAR_6->hw_csum_rx_inner_ok++;
  FUNC_5(&VAR_6->rx_sync);
 }
}
