
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct net_local {TYPE_1__* ndev; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_errors; int rx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_4 (struct net_device*,scalar_t__) ;
 struct net_local* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (struct net_local*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_3)
{
 struct net_local *VAR_4 = FUNC_5(VAR_3);
 struct sk_buff *VAR_5;
 unsigned int VAR_6;
 u32 VAR_7;

 VAR_7 = VAR_2 + VAR_1;
 VAR_5 = FUNC_4(VAR_3, VAR_7 + VAR_0);
 if (!VAR_5) {

  VAR_3->stats.rx_dropped++;
  FUNC_1(&VAR_4->ndev->dev, "Could not allocate receive buffer\n");
  return;
 }






 VAR_6 = FUNC_0(VAR_5->data);
 if (VAR_6)
  FUNC_10(VAR_5, VAR_6);

 FUNC_10(VAR_5, 2);

 VAR_7 = FUNC_11(VAR_4, (u8 *)VAR_5->data, VAR_7);

 if (!VAR_7) {
  VAR_3->stats.rx_errors++;
  FUNC_2(VAR_5);
  return;
 }

 FUNC_9(VAR_5, VAR_7);

 VAR_5->protocol = FUNC_3(VAR_5, VAR_3);
 FUNC_7(VAR_5);

 VAR_3->stats.rx_packets++;
 VAR_3->stats.rx_bytes += VAR_7;

 if (!FUNC_8(VAR_5))
  FUNC_6(VAR_5);
}
