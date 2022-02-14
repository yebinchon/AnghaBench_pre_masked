
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int tx_bytes; int tx_aborted_errors; } ;
struct net_device {int base_addr; TYPE_1__ stats; int name; } ;
struct el3_private {int lock; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_9 ;
 short FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct el3_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (char*,int ,int,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t
FUNC_12(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct el3_private *VAR_12 = FUNC_3(VAR_11);
 int VAR_13 = VAR_11->base_addr;
 unsigned long VAR_14;

 FUNC_5 (VAR_11);

 VAR_11->stats.tx_bytes += VAR_10->len;

 if (VAR_9 > 4) {
  FUNC_9("%s: el3_start_xmit(length = %u) called, status %4.4x.\n",
      VAR_11->name, VAR_10->len, FUNC_2(VAR_13 + VAR_1));
 }
 FUNC_10(&VAR_12->lock, VAR_14);


 FUNC_8(VAR_10->len, VAR_13 + VAR_4);
 FUNC_8(0x00, VAR_13 + VAR_4);

 FUNC_7(VAR_13 + VAR_4, VAR_10->data, (VAR_10->len + 3) >> 2);

 if (FUNC_2(VAR_13 + VAR_5) > 1536)
  FUNC_4(VAR_11);
 else

  FUNC_8(VAR_3 + 1536, VAR_13 + VAR_0);

 FUNC_11(&VAR_12->lock, VAR_14);

 FUNC_0 (VAR_10);


 {
  short VAR_15;
  int VAR_16 = 4;

  while (--VAR_16 > 0 && (VAR_15 = FUNC_1(VAR_13 + VAR_6)) > 0) {
   if (VAR_15 & 0x38) VAR_11->stats.tx_aborted_errors++;
   if (VAR_15 & 0x30) FUNC_8(VAR_8, VAR_13 + VAR_0);
   if (VAR_15 & 0x3C) FUNC_8(VAR_7, VAR_13 + VAR_0);
   FUNC_6(0x00, VAR_13 + VAR_6);
  }
 }
 return VAR_2;
}
