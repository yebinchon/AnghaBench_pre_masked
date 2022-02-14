
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_vrf {int tb_id; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_vrf* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2,
          const struct net_device *VAR_3,
          const struct net_device *VAR_4)
{
 struct net_vrf *VAR_5 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_2, VAR_1, VAR_5->tb_id))
  return -VAR_0;

 return 0;
}
