
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; struct net_device* dev; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct gsm_mux_net {int dummy; } ;
struct gsm_dlci {struct net_device* net; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gsm_mux_net*) ;
 int FUNC_3 (struct gsm_mux_net*) ;
 struct gsm_mux_net* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,unsigned char const*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct gsm_dlci *VAR_2,
    const unsigned char *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_2->net;
 struct sk_buff *VAR_6;
 struct gsm_mux_net *VAR_7 = FUNC_4(VAR_5);
 FUNC_2(VAR_7);


 VAR_6 = FUNC_0(VAR_4 + VAR_1);
 if (!VAR_6) {

  VAR_5->stats.rx_dropped++;
  FUNC_3(VAR_7);
  return;
 }
 FUNC_7(VAR_6, VAR_1);
 FUNC_6(VAR_6, VAR_3, VAR_4);

 VAR_6->dev = VAR_5;
 VAR_6->protocol = FUNC_1(VAR_0);


 FUNC_5(VAR_6);


 VAR_5->stats.rx_packets++;
 VAR_5->stats.rx_bytes += VAR_4;
 FUNC_3(VAR_7);
 return;
}
