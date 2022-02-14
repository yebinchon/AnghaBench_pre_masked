
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int rx_cpu_rmap; } ;
struct bnxt {int flags; int rx_nr_rings; scalar_t__ tx_nr_rings_xdp; scalar_t__ tx_nr_rings; struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_1)
{
 int VAR_2;
 struct net_device *VAR_3 = VAR_1->dev;

 VAR_2 = FUNC_2(VAR_3, VAR_1->tx_nr_rings -
       VAR_1->tx_nr_rings_xdp);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_3, VAR_1->rx_nr_rings);
 if (VAR_2)
  return VAR_2;






 return VAR_2;
}
