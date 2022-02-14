
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;
struct macvlan_dev {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,unsigned char const*) ;
 int FUNC_1 (struct net_device*,unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 int FUNC_4 (int ) ;
 struct macvlan_dev* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct ndmsg *VAR_3, struct nlattr *VAR_4[],
      struct net_device *VAR_5,
      const unsigned char *VAR_6, u16 VAR_7,
      u16 VAR_8,
      struct netlink_ext_ack *VAR_9)
{
 struct macvlan_dev *VAR_10 = FUNC_5(VAR_5);
 int VAR_11 = -VAR_0;




 if (!FUNC_4(VAR_10->port) && FUNC_3(VAR_6))
  return -VAR_1;

 if (VAR_8 & VAR_2)
  return -VAR_1;

 if (FUNC_3(VAR_6))
  VAR_11 = FUNC_1(VAR_5, VAR_6);
 else if (FUNC_2(VAR_6))
  VAR_11 = FUNC_0(VAR_5, VAR_6);

 return VAR_11;
}
