
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {unsigned int base_addr; } ;
struct TYPE_2__ {scalar_t__ speed; scalar_t__ duplex; scalar_t__ port; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_8,
          const struct ethtool_link_ksettings *VAR_9)
{
 u16 VAR_10;
 unsigned int VAR_11 = VAR_8->base_addr;

 if (VAR_9->base.speed != VAR_5)
  return -VAR_2;
 if (VAR_9->base.duplex != VAR_1 &&
     VAR_9->base.duplex != VAR_0)
  return -VAR_2;
 if (VAR_9->base.port != VAR_4 && VAR_9->base.port != VAR_3)
  return -VAR_2;

 if (VAR_9->base.port == VAR_3)
  FUNC_3(VAR_8, 1);
 else
  FUNC_3(VAR_8, 0);

 FUNC_0(0);
 VAR_10 = FUNC_1(VAR_11 + VAR_6);
 if (VAR_9->base.duplex == VAR_0)
  VAR_10 |= VAR_7;
 else
  VAR_10 &= ~VAR_7;
 FUNC_2(VAR_10, VAR_11 + VAR_6);

 return 0;
}
