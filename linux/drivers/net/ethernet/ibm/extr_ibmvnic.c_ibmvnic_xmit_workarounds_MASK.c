
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct net_device {scalar_t__ min_mtu; } ;


 int FUNC_0 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0,
        struct net_device *VAR_1)
{






 if (VAR_0->len < VAR_1->min_mtu)
  return FUNC_0(VAR_0, VAR_1->min_mtu);

 return 0;
}
