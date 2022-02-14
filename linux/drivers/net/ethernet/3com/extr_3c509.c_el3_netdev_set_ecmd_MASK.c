
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int base_addr; int if_port; } ;
struct TYPE_2__ {scalar_t__ speed; scalar_t__ duplex; int port; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;



 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_10,
      const struct ethtool_link_ksettings *VAR_11)
{
 u16 VAR_12;
 int VAR_13 = VAR_10->base_addr;

 if (VAR_11->base.speed != VAR_6)
  return -VAR_2;
 if ((VAR_11->base.duplex != VAR_1) &&
     (VAR_11->base.duplex != VAR_0))
  return -VAR_2;


 FUNC_0(0);
 VAR_12 = FUNC_1(VAR_13 + VAR_8);
 switch (VAR_11->base.port) {
 case 128:
  VAR_12 &= ~(3<<14);
  VAR_10->if_port = 0;
  break;
 case 130:
  VAR_12 |= (1<<14);
  VAR_10->if_port = 1;
  break;
 case 129:
  VAR_12 |= (3<<14);
  VAR_10->if_port = 3;
  break;
 default:
  return -VAR_2;
 }

 FUNC_2(VAR_12, VAR_13 + VAR_8);
 if (VAR_10->if_port == 3) {

  VAR_12 = FUNC_1(VAR_13 + VAR_8);
  if (VAR_12 & (3 << 14)) {
   FUNC_2(VAR_7, VAR_13 + VAR_4);
   FUNC_3(800);
  } else
   return -VAR_3;
 }

 FUNC_0(4);
 VAR_12 = FUNC_1(VAR_13 + VAR_9);
 if (VAR_11->base.duplex == VAR_0)
  VAR_12 |= VAR_5;
 else
  VAR_12 &= ~VAR_5;
 FUNC_2(VAR_12, VAR_13 + VAR_9);
 FUNC_0(1);

 return 0;
}
