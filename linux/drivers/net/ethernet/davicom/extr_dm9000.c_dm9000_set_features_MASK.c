
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct board_info {int lock; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct board_info*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct board_info* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
 netdev_features_t VAR_4)
{
 struct board_info *VAR_5 = FUNC_3(VAR_3);
 netdev_features_t VAR_6 = VAR_3->features ^ VAR_4;
 unsigned long VAR_7;

 if (!(VAR_6 & VAR_1))
  return 0;

 FUNC_1(&VAR_5->lock, VAR_7);
 FUNC_0(VAR_5, VAR_0, (VAR_4 & VAR_1) ? VAR_2 : 0);
 FUNC_2(&VAR_5->lock, VAR_7);

 return 0;
}
