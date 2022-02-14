
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_4__ {int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_2__ stats; int name; } ;
struct TYPE_3__ {int bufcnt; int buf; } ;
struct baycom_state {TYPE_1__ hdlcrx; } ;


 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (int ,int) ;
 struct sk_buff* FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char*,int ,unsigned int) ;
 struct baycom_state* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (char*,int ) ;
 unsigned char* FUNC_7 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_0)
{
 struct baycom_state *VAR_1 = FUNC_4(VAR_0);
 struct sk_buff *VAR_2;
 unsigned char *VAR_3;
 unsigned VAR_4;

 if (VAR_1->hdlcrx.bufcnt < 4)
  return;
 if (!FUNC_1(VAR_1->hdlcrx.buf, VAR_1->hdlcrx.bufcnt))
  return;
 VAR_4 = VAR_1->hdlcrx.bufcnt-2+1;
 if (!(VAR_2 = FUNC_2(VAR_4))) {
  FUNC_6("%s: memory squeeze, dropping packet\n", VAR_0->name);
  VAR_0->stats.rx_dropped++;
  return;
 }
 VAR_3 = FUNC_7(VAR_2, VAR_4);
 *VAR_3++ = 0;
 FUNC_3(VAR_3, VAR_1->hdlcrx.buf, VAR_4 - 1);
 VAR_2->protocol = FUNC_0(VAR_2, VAR_0);
 FUNC_5(VAR_2);
 VAR_0->stats.rx_packets++;
}
