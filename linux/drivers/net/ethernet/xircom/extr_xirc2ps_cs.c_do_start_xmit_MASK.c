
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct sk_buff {unsigned int len; int* data; } ;
struct TYPE_2__ {unsigned int tx_bytes; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; int name; } ;
struct local_info {scalar_t__ mohawk; } ;
typedef int netdev_tx_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct sk_buff*) ;
 struct local_info* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (scalar_t__,int*,unsigned int) ;
 int FUNC_9 (char*,struct sk_buff*,...) ;
 scalar_t__ FUNC_10 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static netdev_tx_t
FUNC_11(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
    struct local_info *VAR_11 = FUNC_5(VAR_10);
    unsigned int VAR_12 = VAR_10->base_addr;
    int VAR_13;
    unsigned VAR_14;
    unsigned VAR_15 = VAR_9->len;

    FUNC_9("do_start_xmit(skb=%p, dev=%p) len=%u\n",
   VAR_9, VAR_10, VAR_15);
    if (VAR_15 < VAR_0)
    {
        if (FUNC_10(VAR_9, VAR_0))
         return VAR_3;
 VAR_15 = VAR_0;
    }

    FUNC_7(VAR_10);
    FUNC_3(0);
    FUNC_2(VAR_5, (u_short)VAR_15+2);
    VAR_14 = FUNC_0(VAR_6);
    VAR_13 = VAR_14 & 0x8000;
    VAR_14 &= 0x7fff;

    VAR_13 = VAR_15 +2 < VAR_14;
    FUNC_9("%s: avail. tx space=%u%s\n",
   VAR_10->name, VAR_14, VAR_13 ? " (okay)":" (not enough)");
    if (!VAR_13) {
 return VAR_2;
    }

    FUNC_2(VAR_8, (u_short)VAR_15);
    FUNC_8(VAR_12+VAR_8, VAR_9->data, VAR_15>>1);
    if (VAR_15 & 1)
 FUNC_1(VAR_8, VAR_9->data[VAR_15-1]);

    if (VAR_11->mohawk)
 FUNC_1(VAR_7, VAR_4|VAR_1);

    FUNC_4 (VAR_9);
    VAR_10->stats.tx_bytes += VAR_15;
    FUNC_6(VAR_10);
    return VAR_3;
}
