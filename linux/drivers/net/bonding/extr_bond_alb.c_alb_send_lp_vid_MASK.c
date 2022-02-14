
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct slave {int dev; TYPE_1__* bond; } ;
struct sk_buff {int dev; int priority; int protocol; scalar_t__ mac_header; scalar_t__ network_header; } ;
struct learning_pkt {int type; int mac_src; int mac_dst; } ;
typedef int __be16 ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct learning_pkt*,int ,int) ;
 int FUNC_6 (struct sk_buff*,struct learning_pkt*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,int ,char*,int *,int ) ;

__attribute__((used)) static void FUNC_9(struct slave *VAR_3, u8 VAR_4[],
       __be16 VAR_5, u16 VAR_6)
{
 struct learning_pkt VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9 = sizeof(struct learning_pkt);

 FUNC_5(&VAR_7, 0, VAR_9);
 FUNC_4(VAR_7.mac_dst, VAR_4);
 FUNC_4(VAR_7.mac_src, VAR_4);
 VAR_7.type = FUNC_1(VAR_1);

 VAR_8 = FUNC_2(VAR_9);
 if (!VAR_8)
  return;

 FUNC_6(VAR_8, &VAR_7, VAR_9);

 FUNC_7(VAR_8);
 VAR_8->network_header = VAR_8->mac_header + VAR_0;
 VAR_8->protocol = VAR_7.type;
 VAR_8->priority = VAR_2;
 VAR_8->dev = VAR_3->dev;

 FUNC_8(VAR_3->bond->dev, VAR_3->dev,
    "Send learning packet: mac %pM vlan %d\n", VAR_4, VAR_6);

 if (VAR_6)
  FUNC_0(VAR_8, VAR_5, VAR_6);

 FUNC_3(VAR_8);
}
