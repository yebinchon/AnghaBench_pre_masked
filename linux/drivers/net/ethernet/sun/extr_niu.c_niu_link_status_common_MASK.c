
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_link_config {scalar_t__ active_speed; scalar_t__ active_duplex; } ;
struct niu {int lock; struct net_device* dev; struct niu_link_config link_config; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct niu*,int ,struct net_device*,char*,char*,char*) ;
 int FUNC_4 (struct niu*,int ,struct net_device*,char*) ;
 int FUNC_5 (struct niu*,int) ;
 int FUNC_6 (struct niu*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct niu *VAR_5, int VAR_6)
{
 struct niu_link_config *VAR_7 = &VAR_5->link_config;
 struct net_device *VAR_8 = VAR_5->dev;
 unsigned long VAR_9;

 if (!FUNC_1(VAR_8) && VAR_6) {
  FUNC_3(VAR_5, VAR_4, VAR_8, "Link is up at %s, %s duplex\n",
      VAR_7->active_speed == VAR_3 ? "10Gb/sec" :
      VAR_7->active_speed == VAR_2 ? "1Gb/sec" :
      VAR_7->active_speed == VAR_1 ? "100Mbit/sec" :
      "10Mbit/sec",
      VAR_7->active_duplex == VAR_0 ? "full" : "half");

  FUNC_7(&VAR_5->lock, VAR_9);
  FUNC_6(VAR_5);
  FUNC_5(VAR_5, 1);
  FUNC_8(&VAR_5->lock, VAR_9);

  FUNC_2(VAR_8);
 } else if (FUNC_1(VAR_8) && !VAR_6) {
  FUNC_4(VAR_5, VAR_4, VAR_8, "Link is down\n");
  FUNC_7(&VAR_5->lock, VAR_9);
  FUNC_5(VAR_5, 0);
  FUNC_8(&VAR_5->lock, VAR_9);
  FUNC_0(VAR_8);
 }

 return 0;
}
