
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned int len; int dev; } ;
struct nfp_repr {TYPE_2__* dst; } ;
struct net_device {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {int lower_dev; } ;
struct TYPE_4__ {TYPE_3__ port_info; } ;
struct TYPE_5__ {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct dst_entry*) ;
 struct nfp_repr* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,unsigned int,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct dst_entry*) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct nfp_repr *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4 = VAR_1->len;
 int VAR_5;

 FUNC_4(VAR_1);
 FUNC_1((struct dst_entry *)VAR_3->dst);
 FUNC_5(VAR_1, (struct dst_entry *)VAR_3->dst);
 VAR_1->dev = VAR_3->dst->u.port_info.lower_dev;

 VAR_5 = FUNC_0(VAR_1);
 FUNC_3(VAR_2, VAR_4, VAR_5);

 return VAR_0;
}
