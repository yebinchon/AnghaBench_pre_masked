
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sky2_port {size_t port; TYPE_1__* hw; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct sky2_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int * VAR_8 ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_9, netdev_features_t VAR_10)
{
 struct sky2_port *VAR_11 = FUNC_1(VAR_9);
 netdev_features_t VAR_12 = VAR_9->features ^ VAR_10;

 if ((VAR_12 & VAR_4) &&
     !(VAR_11->hw->flags & VAR_7)) {
  FUNC_4(VAR_11->hw,
        FUNC_0(VAR_8[VAR_11->port], VAR_6),
        (VAR_10 & VAR_4)
        ? VAR_1 : VAR_0);
 }

 if (VAR_12 & VAR_5)
  FUNC_2(VAR_9, VAR_10);

 if (VAR_12 & (VAR_3|VAR_2))
  FUNC_3(VAR_9, VAR_10);

 return 0;
}
