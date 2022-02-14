
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct enetc_ndev_priv {TYPE_2__* si; } ;
struct TYPE_3__ {scalar_t__ port; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 struct enetc_ndev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_1)
{
 struct enetc_ndev_priv *VAR_2 = FUNC_0(VAR_1);


 return (VAR_2->si->hw.port) ? VAR_0 : 0;
}
