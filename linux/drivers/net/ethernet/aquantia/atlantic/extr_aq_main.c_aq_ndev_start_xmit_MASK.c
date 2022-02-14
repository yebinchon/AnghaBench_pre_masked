
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct aq_nic_s {int dummy; } ;


 int FUNC_0 (struct aq_nic_s*,struct sk_buff*) ;
 struct aq_nic_s* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 struct aq_nic_s *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2, VAR_0);
}
