
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;
struct b44 {int flags; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b44*,int) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*) ;
 struct b44* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4,
    struct ethtool_pauseparam *VAR_5)
{
 struct b44 *VAR_6 = FUNC_5(VAR_4);

 FUNC_6(&VAR_6->lock);
 if (VAR_5->autoneg)
  VAR_6->flags |= VAR_0;
 else
  VAR_6->flags &= ~VAR_0;
 if (VAR_5->rx_pause)
  VAR_6->flags |= VAR_1;
 else
  VAR_6->flags &= ~VAR_1;
 if (VAR_5->tx_pause)
  VAR_6->flags |= VAR_2;
 else
  VAR_6->flags &= ~VAR_2;
 if (VAR_6->flags & VAR_0) {
  FUNC_2(VAR_6);
  FUNC_4(VAR_6);
  FUNC_3(VAR_6, VAR_3);
 } else {
  FUNC_0(VAR_6, VAR_6->flags);
 }
 FUNC_7(&VAR_6->lock);

 FUNC_1(VAR_6);

 return 0;
}
