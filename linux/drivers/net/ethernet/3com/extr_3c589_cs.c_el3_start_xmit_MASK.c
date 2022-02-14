
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int tx_bytes; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; } ;
struct el3_private {int lock; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*,char*,long,int) ;
 struct el3_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_6,
     struct net_device *VAR_7)
{
 unsigned int VAR_8 = VAR_7->base_addr;
 struct el3_private *VAR_9 = FUNC_3(VAR_7);
 unsigned long VAR_10;

 FUNC_2(VAR_7, "el3_start_xmit(length = %ld) called, status %4.4x.\n",
        (long)VAR_6->len, FUNC_1(VAR_8 + VAR_1));

 FUNC_8(&VAR_9->lock, VAR_10);

 VAR_7->stats.tx_bytes += VAR_6->len;


 FUNC_6(VAR_6->len, VAR_8 + VAR_4);
 FUNC_6(0x00, VAR_8 + VAR_4);

 FUNC_5(VAR_8 + VAR_4, VAR_6->data, (VAR_6->len + 3) >> 2);

 if (FUNC_1(VAR_8 + VAR_5) <= 1536) {
  FUNC_4(VAR_7);

  FUNC_6(VAR_3 + 1536, VAR_8 + VAR_0);
 }

 FUNC_7(VAR_7);
 FUNC_9(&VAR_9->lock, VAR_10);
 FUNC_0(VAR_6);

 return VAR_2;
}
