
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; scalar_t__ cb; } ;
struct TYPE_3__ {unsigned int rx_bytes; int rx_packets; int rx_dropped; } ;
struct lcs_card {scalar_t__ state; scalar_t__ (* lan_type_trans ) (struct sk_buff*,TYPE_2__*) ;scalar_t__ pkt_seq; TYPE_1__ stats; TYPE_2__* dev; } ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {int name; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 struct sk_buff* FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,char*,unsigned int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct lcs_card *VAR_3, char *VAR_4, unsigned int VAR_5)
{
 struct sk_buff *VAR_6;

 FUNC_0(5, VAR_2, "getskb");
 if (VAR_3->dev == ((void*)0) ||
     VAR_3->state != VAR_0)

  return;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(&VAR_3->dev->dev,
   " Allocating a socket buffer to interface %s failed\n",
     VAR_3->dev->name);
  VAR_3->stats.rx_dropped++;
  return;
 }
 FUNC_5(VAR_6, VAR_4, VAR_5);
 VAR_6->protocol = VAR_3->lan_type_trans(VAR_6, VAR_3->dev);
 VAR_3->stats.rx_bytes += VAR_5;
 VAR_3->stats.rx_packets++;
 if (VAR_6->protocol == FUNC_3(VAR_1))
  *((__u32 *)VAR_6->cb) = ++VAR_3->pkt_seq;
 FUNC_4(VAR_6);
}
