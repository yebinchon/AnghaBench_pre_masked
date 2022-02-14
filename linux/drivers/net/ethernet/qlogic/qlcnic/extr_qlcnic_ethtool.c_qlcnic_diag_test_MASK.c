
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*,int ) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_7, struct ethtool_test *VAR_8,
       u64 *VAR_9)
{
 FUNC_0(VAR_9, 0, sizeof(u64) * VAR_6);

 VAR_9[0] = FUNC_4(VAR_7);
 if (VAR_9[0])
  VAR_8->flags |= VAR_2;

 VAR_9[1] = (u64) FUNC_5(VAR_7);
 if (VAR_9[1])
  VAR_8->flags |= VAR_2;

 if (VAR_8->flags & VAR_3) {
  VAR_9[2] = FUNC_2(VAR_7);
  if (VAR_9[2])
   VAR_8->flags |= VAR_2;

  VAR_9[3] = FUNC_3(VAR_7, VAR_5);
  if (VAR_9[3])
   VAR_8->flags |= VAR_2;

  if (VAR_8->flags & VAR_0) {
   VAR_9[4] = FUNC_3(VAR_7, VAR_4);
   if (VAR_9[4])
    VAR_8->flags |= VAR_2;
   VAR_8->flags |= VAR_1;
  }

  VAR_9[5] = FUNC_1(VAR_7);
  if (VAR_9[5])
   VAR_8->flags |= VAR_2;
 }
}
