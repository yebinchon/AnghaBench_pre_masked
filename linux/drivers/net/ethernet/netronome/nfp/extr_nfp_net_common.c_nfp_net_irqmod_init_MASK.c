
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int rx_coalesce_usecs; int rx_coalesce_max_frames; int tx_coalesce_usecs; int tx_coalesce_max_frames; } ;



__attribute__((used)) static void FUNC_0(struct nfp_net *VAR_0)
{
 VAR_0->rx_coalesce_usecs = 50;
 VAR_0->rx_coalesce_max_frames = 64;
 VAR_0->tx_coalesce_usecs = 50;
 VAR_0->tx_coalesce_max_frames = 64;
}
