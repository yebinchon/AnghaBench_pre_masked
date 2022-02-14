
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* dev; } ;
struct hns_nic_ring_data {TYPE_1__ napi; } ;


 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct hns_nic_ring_data *VAR_0,
         struct sk_buff *VAR_1)
{
 struct net_device *VAR_2 = VAR_0->napi.dev;

 VAR_1->protocol = FUNC_0(VAR_1, VAR_2);
 (void)FUNC_1(&VAR_0->napi, VAR_1);
}
