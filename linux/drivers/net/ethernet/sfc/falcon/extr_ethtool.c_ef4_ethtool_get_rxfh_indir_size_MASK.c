
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ef4_nic {int n_rx_channels; int rx_indir_table; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct ef4_nic*) ;
 struct ef4_nic* FUNC_2 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_1)
{
 struct ef4_nic *VAR_2 = FUNC_2(VAR_1);

 return ((FUNC_1(VAR_2) < VAR_0 ||
   VAR_2->n_rx_channels == 1) ?
  0 : FUNC_0(VAR_2->rx_indir_table));
}
