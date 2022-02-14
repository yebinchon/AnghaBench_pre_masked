
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {struct net_device* dev; int priority; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct hdlc_header {int dummy; } ;
struct cisco_packet {void* time; int rel; void* par2; void* par1; void* type; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int ,int *,int *,int ) ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_5, u32 VAR_6,
     __be32 VAR_7, __be32 VAR_8)
{
 struct sk_buff *VAR_9;
 struct cisco_packet *VAR_10;

 VAR_9 = FUNC_2(sizeof(struct hdlc_header) +
       sizeof(struct cisco_packet));
 if (!VAR_9) {
  FUNC_5(VAR_5, "Memory squeeze on cisco_keepalive_send()\n");
  return;
 }
 FUNC_7(VAR_9, 4);
 FUNC_0(VAR_9, VAR_5, VAR_0, ((void*)0), ((void*)0), 0);
 VAR_10 = (struct cisco_packet*)(VAR_9->data + 4);

 VAR_10->type = FUNC_4(VAR_6);
 VAR_10->par1 = VAR_7;
 VAR_10->par2 = VAR_8;
 VAR_10->rel = FUNC_1(0xFFFF);

 VAR_10->time = FUNC_4((VAR_4 - VAR_2) * (1000 / VAR_1));

 FUNC_6(VAR_9, sizeof(struct cisco_packet));
 VAR_9->priority = VAR_3;
 VAR_9->dev = VAR_5;
 FUNC_8(VAR_9);

 FUNC_3(VAR_9);
}
