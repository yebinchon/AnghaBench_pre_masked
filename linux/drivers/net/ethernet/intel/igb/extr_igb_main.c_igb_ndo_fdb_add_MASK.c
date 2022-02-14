
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct igb_adapter*,int) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 int FUNC_3 (struct ndmsg*,struct nlattr**,struct net_device*,unsigned char const*,int ,int ) ;
 struct igb_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct ndmsg *VAR_1, struct nlattr *VAR_2[],
      struct net_device *VAR_3,
      const unsigned char *VAR_4, u16 VAR_5,
      u16 VAR_6,
      struct netlink_ext_ack *VAR_7)
{

 if (FUNC_2(VAR_4) || FUNC_1(VAR_4)) {
  struct igb_adapter *VAR_8 = FUNC_4(VAR_3);
  int VAR_9 = VAR_8->vfs_allocated_count;

  if (FUNC_5(VAR_3) >= FUNC_0(VAR_8, VAR_9))
   return -VAR_0;
 }

 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
