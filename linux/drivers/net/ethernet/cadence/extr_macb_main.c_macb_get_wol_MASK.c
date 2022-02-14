
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macb {int wol; } ;
struct ethtool_wolinfo {scalar_t__ wolopts; scalar_t__ supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct macb* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct macb *VAR_5 = FUNC_0(VAR_3);

 VAR_4->supported = 0;
 VAR_4->wolopts = 0;

 if (VAR_5->wol & VAR_1) {
  VAR_4->supported = VAR_2;

  if (VAR_5->wol & VAR_0)
   VAR_4->wolopts |= VAR_2;
 }
}
