
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct smc_private {struct sk_buff* saved_skb; } ;
struct sk_buff {int len; int* data; } ;
struct TYPE_2__ {int tx_bytes; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct smc_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (scalar_t__,int*,int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct net_device * VAR_9)
{
    struct smc_private *VAR_10 = FUNC_4(VAR_9);
    struct sk_buff *VAR_11 = VAR_10->saved_skb;
    unsigned int VAR_12 = VAR_9->base_addr;
    u_char VAR_13;

    if (!VAR_11) {
 FUNC_3(VAR_9, "In XMIT with no packet to send\n");
 return;
    }


    VAR_13 = FUNC_1(VAR_12 + VAR_6) >> 8;
    if (VAR_13 & 0x80) {

 FUNC_5(VAR_9, "hardware Tx buffer allocation failed, status %#2.2x\n",
      VAR_13);
 FUNC_0(VAR_11);
 VAR_10->saved_skb = ((void*)0);
 FUNC_6(VAR_9);
 return;
    }

    VAR_9->stats.tx_bytes += VAR_11->len;

    FUNC_9(VAR_13, VAR_12 + VAR_6);

    FUNC_9(VAR_8 , VAR_12 + VAR_7);



    {
 u_char *VAR_14 = VAR_11->data;
 u_int VAR_15 = VAR_11->len;

 FUNC_2(VAR_9, "Trying to xmit packet of length %d\n", VAR_15);


 FUNC_9(0, VAR_12 + VAR_0);
 FUNC_9(VAR_15 + 6, VAR_12 + VAR_0);
 FUNC_8(VAR_12 + VAR_0, VAR_14, VAR_15 >> 1);


 FUNC_9((VAR_15 & 1) ? 0x2000 | VAR_14[VAR_15-1] : 0, VAR_12 + VAR_0);
    }


    FUNC_9(((VAR_2|VAR_1)<<8) |
  (FUNC_1(VAR_12 + VAR_3) & 0xff00),
  VAR_12 + VAR_3);


    FUNC_9(VAR_4 , VAR_12 + VAR_5);

    VAR_10->saved_skb = ((void*)0);
    FUNC_0(VAR_11);
    FUNC_7(VAR_9);
    FUNC_6(VAR_9);
}
