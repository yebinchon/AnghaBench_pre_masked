
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dim_cq_moder {int pkts; int usec; } ;
struct TYPE_2__ {int mode; } ;
struct bcmgenet_net_dim {TYPE_1__ dim; scalar_t__ use_dim; } ;
struct bcmgenet_rx_ring {int rx_max_coalesced_frames; int rx_coalesce_usecs; struct bcmgenet_net_dim dim; } ;


 int FUNC_0 (struct bcmgenet_rx_ring*,int ,int ) ;
 struct dim_cq_moder FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bcmgenet_rx_ring *VAR_0)
{
 struct bcmgenet_net_dim *VAR_1 = &VAR_0->dim;
 struct dim_cq_moder VAR_2;
 u32 VAR_3, VAR_4;

 VAR_3 = VAR_0->rx_coalesce_usecs;
 VAR_4 = VAR_0->rx_max_coalesced_frames;


 if (VAR_1->use_dim) {
  VAR_2 = FUNC_1(VAR_1->dim.mode);
  VAR_3 = VAR_2.usec;
  VAR_4 = VAR_2.pkts;
 }

 FUNC_0(VAR_0, VAR_3, VAR_4);
}
