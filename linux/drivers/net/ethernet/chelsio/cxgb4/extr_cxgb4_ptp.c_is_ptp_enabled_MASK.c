
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct port_info {scalar_t__ ptp_enable; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 struct port_info* FUNC_2 (struct net_device*) ;

bool FUNC_3(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 struct port_info *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 return (VAR_2->ptp_enable && FUNC_1(VAR_0) &&
  FUNC_0(VAR_0));
}
