
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int rx_indir_table; } ;
struct efx_nic {int n_rx_channels; TYPE_1__ rss_context; } ;


 int FUNC_0 (int ) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_0)
{
 struct efx_nic *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->n_rx_channels == 1)
  return 0;
 return FUNC_0(VAR_1->rss_context.rx_indir_table);
}
