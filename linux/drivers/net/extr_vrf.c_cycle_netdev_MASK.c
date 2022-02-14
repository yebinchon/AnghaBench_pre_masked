
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {unsigned int flags; int name; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct net_device*,unsigned int,struct netlink_ext_ack*) ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
    struct netlink_ext_ack *VAR_2)
{
 unsigned int VAR_3 = VAR_1->flags;
 int VAR_4;

 if (!FUNC_2(VAR_1))
  return;

 VAR_4 = FUNC_0(VAR_1, VAR_3 & ~VAR_0, VAR_2);
 if (VAR_4 >= 0)
  VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_2);

 if (VAR_4 < 0) {
  FUNC_1(VAR_1,
      "Failed to cycle device %s; route tables might be wrong!\n",
      VAR_1->name);
 }
}
