
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gve_rx_ring {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct gve_notify_block {TYPE_2__ napi; struct gve_rx_ring* rx; } ;
typedef int netdev_features_t ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (struct gve_rx_ring*,int,int ) ;
 int FUNC_1 (struct gve_rx_ring*) ;

bool FUNC_2(struct gve_notify_block *VAR_1, int VAR_2)
{
 struct gve_rx_ring *VAR_3 = VAR_1->rx;
 netdev_features_t VAR_4;
 bool VAR_5 = 0;

 VAR_4 = VAR_1->napi.dev->features;


 if (VAR_2 == 0)
  VAR_2 = VAR_0;

 if (VAR_2 > 0)
  VAR_5 |= FUNC_0(VAR_3, VAR_2, VAR_4);
 else
  VAR_5 |= FUNC_1(VAR_3);
 return VAR_5;
}
