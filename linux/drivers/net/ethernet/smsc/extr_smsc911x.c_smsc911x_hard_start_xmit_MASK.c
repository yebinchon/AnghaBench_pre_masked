
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct smsc911x_data {TYPE_1__* ops; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int (* tx_writefifo ) (struct smsc911x_data*,unsigned int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (struct sk_buff*) ;
 struct smsc911x_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 unsigned int FUNC_5 (struct smsc911x_data*,int ) ;
 int FUNC_6 (struct smsc911x_data*,int ,unsigned int) ;
 int FUNC_7 (struct smsc911x_data*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct smsc911x_data*,unsigned int*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static netdev_tx_t
FUNC_11(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct smsc911x_data *VAR_11 = FUNC_2(VAR_10);
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 u32 VAR_16;
 ulong VAR_17;

 VAR_12 = FUNC_5(VAR_11, VAR_5) & VAR_6;

 if (FUNC_10(VAR_12 < VAR_7))
  FUNC_0(VAR_11, VAR_8,
     "Tx data fifo low, space available: %d", VAR_12);


 VAR_13 = (u32)((ulong)VAR_9->data & 0x03) << 16;
 VAR_13 |= VAR_2 | VAR_3;
 VAR_13 |= (unsigned int)VAR_9->len;

 VAR_14 = ((unsigned int)VAR_9->len) << 16;
 VAR_14 |= (unsigned int)VAR_9->len;

 FUNC_6(VAR_11, VAR_4, VAR_13);
 FUNC_6(VAR_11, VAR_4, VAR_14);

 VAR_17 = (ulong)VAR_9->data & (~0x3);
 VAR_16 = (u32)VAR_9->len + 3;
 VAR_16 += (u32)((ulong)VAR_9->data & 0x3);
 VAR_16 >>= 2;

 VAR_11->ops->tx_writefifo(VAR_11, (unsigned int *)VAR_17, VAR_16);
 VAR_12 -= (VAR_9->len + 32);
 FUNC_4(VAR_9);
 FUNC_1(VAR_9);

 if (FUNC_10(FUNC_7(VAR_11) >= 30))
  FUNC_8(VAR_10);

 if (VAR_12 < VAR_7) {
  FUNC_3(VAR_10);
  VAR_15 = FUNC_5(VAR_11, VAR_0);
  VAR_15 &= 0x00FFFFFF;
  VAR_15 |= 0x32000000;
  FUNC_6(VAR_11, VAR_0, VAR_15);
 }

 return VAR_1;
}
