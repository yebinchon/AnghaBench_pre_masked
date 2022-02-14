
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;
struct macvlan_dev {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,unsigned char const*) ;
 int FUNC_1 (struct net_device*,unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 int FUNC_4 (int ) ;
 struct macvlan_dev* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct ndmsg *VAR_2, struct nlattr *VAR_3[],
      struct net_device *VAR_4,
      const unsigned char *VAR_5, u16 VAR_6)
{
 struct macvlan_dev *VAR_7 = FUNC_5(VAR_4);
 int VAR_8 = -VAR_0;




 if (!FUNC_4(VAR_7->port) && FUNC_3(VAR_5))
  return -VAR_1;

 if (FUNC_3(VAR_5))
  VAR_8 = FUNC_1(VAR_4, VAR_5);
 else if (FUNC_2(VAR_5))
  VAR_8 = FUNC_0(VAR_4, VAR_5);

 return VAR_8;
}
