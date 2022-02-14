
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct cp_private {int lock; int cpcmd; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 struct cp_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5, netdev_features_t VAR_6)
{
 struct cp_private *VAR_7 = FUNC_1(VAR_5);
 unsigned long VAR_8;

 if (!((VAR_5->features ^ VAR_6) & VAR_2))
  return 0;

 FUNC_2(&VAR_7->lock, VAR_8);

 if (VAR_6 & VAR_2)
  VAR_7->cpcmd |= VAR_3;
 else
  VAR_7->cpcmd &= ~VAR_3;

 if (VAR_6 & VAR_1)
  VAR_7->cpcmd |= VAR_4;
 else
  VAR_7->cpcmd &= ~VAR_4;

 FUNC_0(VAR_0, VAR_7->cpcmd);
 FUNC_3(&VAR_7->lock, VAR_8);

 return 0;
}
