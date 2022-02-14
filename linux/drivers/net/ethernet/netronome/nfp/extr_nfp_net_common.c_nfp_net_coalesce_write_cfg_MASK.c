
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ num_rx_rings; scalar_t__ num_tx_rings; } ;
struct TYPE_4__ {int me_freq_mhz; } ;
struct nfp_net {int rx_coalesce_max_frames; int rx_coalesce_usecs; int tx_coalesce_max_frames; int tx_coalesce_usecs; TYPE_1__ dp; TYPE_2__ tlv_caps; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nfp_net*,int ,int) ;

void FUNC_3(struct nfp_net *VAR_0)
{
 u8 VAR_1;
 u32 VAR_2;
 u32 VAR_3;





 VAR_2 = VAR_0->tlv_caps.me_freq_mhz / 16;


 VAR_3 = (VAR_0->rx_coalesce_max_frames << 16) |
  (VAR_2 * VAR_0->rx_coalesce_usecs);
 for (VAR_1 = 0; VAR_1 < VAR_0->dp.num_rx_rings; VAR_1++)
  FUNC_2(VAR_0, FUNC_0(VAR_1), VAR_3);


 VAR_3 = (VAR_0->tx_coalesce_max_frames << 16) |
  (VAR_2 * VAR_0->tx_coalesce_usecs);
 for (VAR_1 = 0; VAR_1 < VAR_0->dp.num_tx_rings; VAR_1++)
  FUNC_2(VAR_0, FUNC_1(VAR_1), VAR_3);
}
