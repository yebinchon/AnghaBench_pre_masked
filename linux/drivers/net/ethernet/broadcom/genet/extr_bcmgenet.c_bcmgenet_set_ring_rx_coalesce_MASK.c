
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ethtool_coalesce {scalar_t__ use_adaptive_rx_coalesce; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;
struct dim_cq_moder {int pkts; int usec; } ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {scalar_t__ use_dim; TYPE_1__ dim; } ;
struct bcmgenet_rx_ring {TYPE_2__ dim; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;


 int FUNC_0 (struct bcmgenet_rx_ring*,int ,int ) ;
 struct dim_cq_moder FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bcmgenet_rx_ring *VAR_0,
       struct ethtool_coalesce *VAR_1)
{
 struct dim_cq_moder VAR_2;
 u32 VAR_3, VAR_4;

 VAR_0->rx_coalesce_usecs = VAR_1->rx_coalesce_usecs;
 VAR_0->rx_max_coalesced_frames = VAR_1->rx_max_coalesced_frames;
 VAR_3 = VAR_0->rx_coalesce_usecs;
 VAR_4 = VAR_0->rx_max_coalesced_frames;

 if (VAR_1->use_adaptive_rx_coalesce && !VAR_0->dim.use_dim) {
  VAR_2 = FUNC_1(VAR_0->dim.dim.mode);
  VAR_3 = VAR_2.usec;
  VAR_4 = VAR_2.pkts;
 }

 VAR_0->dim.use_dim = VAR_1->use_adaptive_rx_coalesce;
 FUNC_0(VAR_0, VAR_3, VAR_4);
}
