
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; TYPE_1__* dev; int protocol; } ;
struct pdp_ctx {TYPE_1__* dev; int sk; } ;
struct pcpu_sw_netstats {int syncp; int rx_bytes; int rx_packets; } ;
struct TYPE_3__ {int tstats; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sk_buff*,struct pdp_ctx*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ) ;
 struct pcpu_sw_netstats* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct pdp_ctx *VAR_0, struct sk_buff *VAR_1,
   unsigned int VAR_2, unsigned int VAR_3)
{
 struct pcpu_sw_netstats *VAR_4;

 if (!FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3)) {
  FUNC_4(VAR_0->dev, "No PDP ctx for this MS\n");
  return 1;
 }


 if (FUNC_2(VAR_1, VAR_2, VAR_1->protocol,
     !FUNC_3(FUNC_7(VAR_0->sk), FUNC_0(VAR_0->dev))))
  return -1;

 FUNC_4(VAR_0->dev, "forwarding packet from GGSN to uplink\n");





 FUNC_6(VAR_1);

 VAR_1->dev = VAR_0->dev;

 VAR_4 = FUNC_8(VAR_0->dev->tstats);
 FUNC_9(&VAR_4->syncp);
 VAR_4->rx_packets++;
 VAR_4->rx_bytes += VAR_1->len;
 FUNC_10(&VAR_4->syncp);

 FUNC_5(VAR_1);
 return 0;
}
