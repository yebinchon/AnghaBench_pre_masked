
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct flow_action_entry {struct net_device* dev; } ;
struct bnxt_tc_actions {struct net_device* dst_dev; int flags; } ;
struct bnxt {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_2,
          struct bnxt_tc_actions *VAR_3,
          const struct flow_action_entry *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;

 if (!VAR_5) {
  FUNC_0(VAR_2->dev, "no dev in mirred action");
  return -VAR_1;
 }

 VAR_3->flags |= VAR_0;
 VAR_3->dst_dev = VAR_5;
 return 0;
}
