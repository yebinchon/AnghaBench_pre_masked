
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
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,struct net_device*,char*,int) ;
 int FUNC_3 (struct net_device*,struct sk_buff*,char*) ;
 int FUNC_4 (struct archdr*,struct archdr*,int) ;
 struct arcnet_local* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct net_device*,int,int,scalar_t__,int) ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_5, int VAR_6,
        struct archdr *VAR_7, int VAR_8)
{
 struct arcnet_local *VAR_9 = FUNC_5(VAR_5);
 struct sk_buff *VAR_10;
 struct archdr *VAR_11 = VAR_7;
 int VAR_12;

 FUNC_2(VAR_1, VAR_5, "it's a raw packet (length=%d)\n", VAR_8);

 if (VAR_8 >= VAR_4)
  VAR_12 = 512 - VAR_8;
 else
  VAR_12 = 256 - VAR_8;

 VAR_10 = FUNC_1(VAR_8 + VAR_0, VAR_3);
 if (!VAR_10) {
  VAR_5->stats.rx_dropped++;
  return;
 }
 FUNC_7(VAR_10, VAR_8 + VAR_0);
 VAR_10->dev = VAR_5;

 VAR_11 = (struct archdr *)VAR_10->data;


 FUNC_4(VAR_11, VAR_7, sizeof(struct archdr));
 if (VAR_8 > sizeof(VAR_11->soft))
  VAR_9->hw.copy_from_card(VAR_5, VAR_6, VAR_12 + sizeof(VAR_11->soft),
          VAR_11->soft.raw + sizeof(VAR_11->soft),
          VAR_8 - sizeof(VAR_11->soft));

 if (FUNC_0(VAR_2))
  FUNC_3(VAR_5, VAR_10, "rx");

 VAR_10->protocol = FUNC_9(VAR_10, VAR_5);
 FUNC_6(VAR_10);
}
