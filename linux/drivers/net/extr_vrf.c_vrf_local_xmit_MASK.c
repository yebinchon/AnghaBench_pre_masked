
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int protocol; int pkt_type; } ;
struct net_device {TYPE_1__* dstats; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int rx_drps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_3, struct net_device *VAR_4,
     struct dst_entry *VAR_5)
{
 int VAR_6 = VAR_3->len;

 FUNC_4(VAR_3);

 FUNC_3(VAR_3, VAR_5);




 VAR_3->pkt_type = VAR_2;

 VAR_3->protocol = FUNC_0(VAR_3, VAR_4);

 if (FUNC_1(FUNC_2(VAR_3) == VAR_1))
  FUNC_6(VAR_4, VAR_6);
 else
  FUNC_5(VAR_4->dstats->rx_drps);

 return VAR_0;
}
