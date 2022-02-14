
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fec_enet_private {int wol_flag; } ;
struct ethtool_wolinfo {void* wolopts; void* supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct fec_enet_private *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->wol_flag & VAR_1) {
  VAR_4->supported = VAR_2;
  VAR_4->wolopts = VAR_5->wol_flag & VAR_0 ? VAR_2 : 0;
 } else {
  VAR_4->supported = VAR_4->wolopts = 0;
 }
}
