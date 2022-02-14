
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ expires; } ;
struct TYPE_4__ {scalar_t__ loopback_mode; } ;
struct niu {TYPE_2__ timer; TYPE_1__ link_config; int lock; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 struct niu* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct niu*) ;
 int FUNC_6 (struct niu*,int) ;
 int FUNC_7 (struct niu*) ;
 int FUNC_8 (struct niu*) ;
 int FUNC_9 (struct niu*,struct net_device*) ;
 int FUNC_10 (struct niu*) ;
 int FUNC_11 (struct niu*) ;
 int VAR_4 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_5, int VAR_6)
{
 struct niu *VAR_7 = FUNC_1(VAR_5);
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = (VAR_5->mtu > VAR_0);
 VAR_10 = (VAR_6 > VAR_0);

 VAR_5->mtu = VAR_6;

 if (!FUNC_3(VAR_5) ||
     (VAR_9 == VAR_10))
  return 0;

 FUNC_9(VAR_7, VAR_5);

 FUNC_8(VAR_7);

 FUNC_7(VAR_7);

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_12(&VAR_7->lock);

 VAR_8 = FUNC_10(VAR_7);
 if (!VAR_8) {
  FUNC_14(&VAR_7->timer, VAR_4, 0);
  VAR_7->timer.expires = VAR_3 + VAR_1;

  VAR_8 = FUNC_6(VAR_7, 1);
  if (VAR_8)
   FUNC_11(VAR_7);
 }

 FUNC_13(&VAR_7->lock);

 if (!VAR_8) {
  FUNC_4(VAR_5);
  if (VAR_7->link_config.loopback_mode != VAR_2)
   FUNC_2(VAR_5);

  FUNC_0(&VAR_7->timer);
 }

 return VAR_8;
}
