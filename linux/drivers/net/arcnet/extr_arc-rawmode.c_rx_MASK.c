
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int protocol; scalar_t__ data; struct net_device* dev; } ;
struct TYPE_4__ {int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_5__ {int (* copy_from_card ) (struct net_device*,int,int,scalar_t__,int) ;} ;
struct arcnet_local {TYPE_2__ hw; } ;
struct TYPE_6__ {scalar_t__ raw; } ;
struct archdr {TYPE_3__ soft; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,struct net_device*,char*,int) ;
 int FUNC_3 (struct net_device*,struct sk_buff*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct archdr*,struct archdr*,int) ;
 struct arcnet_local* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct net_device*,int,int,scalar_t__,int) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_6, int VAR_7,
        struct archdr *VAR_8, int VAR_9)
{
 struct arcnet_local *VAR_10 = FUNC_6(VAR_6);
 struct sk_buff *VAR_11;
 struct archdr *VAR_12 = VAR_8;
 int VAR_13;

 FUNC_2(VAR_1, VAR_6, "it's a raw packet (length=%d)\n", VAR_9);

 if (VAR_9 > VAR_5)
  VAR_13 = 512 - VAR_9;
 else
  VAR_13 = 256 - VAR_9;

 VAR_11 = FUNC_1(VAR_9 + VAR_0, VAR_4);
 if (!VAR_11) {
  VAR_6->stats.rx_dropped++;
  return;
 }
 FUNC_9(VAR_11, VAR_9 + VAR_0);
 VAR_11->dev = VAR_6;

 VAR_12 = (struct archdr *)VAR_11->data;

 FUNC_10(VAR_11);
 FUNC_8(VAR_11, VAR_0);


 FUNC_5(VAR_12, VAR_8, sizeof(struct archdr));
 if (VAR_9 > sizeof(VAR_12->soft))
  VAR_10->hw.copy_from_card(VAR_6, VAR_7, VAR_13 + sizeof(VAR_12->soft),
          VAR_12->soft.raw + sizeof(VAR_12->soft),
          VAR_9 - sizeof(VAR_12->soft));

 if (FUNC_0(VAR_2))
  FUNC_3(VAR_6, VAR_11, "rx");

 VAR_11->protocol = FUNC_4(VAR_3);
 FUNC_7(VAR_11);
}
