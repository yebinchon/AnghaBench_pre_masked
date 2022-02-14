
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;
struct ixgbe_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (struct ixgbe_adapter*,int ) ;
 int FUNC_4 (struct ndmsg*,struct nlattr**,struct net_device*,unsigned char const*,int ,int ) ;
 struct ixgbe_adapter* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct ndmsg *VAR_1, struct nlattr *VAR_2[],
        struct net_device *VAR_3,
        const unsigned char *VAR_4, u16 VAR_5,
        u16 VAR_6,
        struct netlink_ext_ack *VAR_7)
{

 if (FUNC_2(VAR_4) || FUNC_1(VAR_4)) {
  struct ixgbe_adapter *VAR_8 = FUNC_5(VAR_3);
  u16 VAR_9 = FUNC_0(0);

  if (FUNC_6(VAR_3) >= FUNC_3(VAR_8, VAR_9))
   return -VAR_0;
 }

 return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
