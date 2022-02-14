
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; int data; } ;
struct TYPE_3__ {int tx_bytes; } ;
struct net_device {TYPE_1__ stats; scalar_t__ mem_start; } ;
struct lance_regs {int rdp; } ;
struct lance_private {int tx_new; int* tx_buf_ptr_lnc; int lock; int type; int * tx_buf_ptr_cpu; struct lance_regs* ll; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int tmd1; int misc; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int* FUNC_2 (int volatile*,int ,int ) ;
 struct lance_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct lance_private *VAR_11 = FUNC_3(VAR_10);
 volatile struct lance_regs *VAR_12 = VAR_11->ll;
 volatile u16 *VAR_13 = (volatile u16 *)VAR_10->mem_start;
 unsigned long VAR_14;
 int VAR_15, VAR_16;

 VAR_16 = VAR_9->len;

 if (VAR_16 < VAR_0) {
  if (FUNC_5(VAR_9, VAR_0))
   return VAR_5;
  VAR_16 = VAR_0;
 }

 VAR_10->stats.tx_bytes += VAR_16;

 FUNC_6(&VAR_11->lock, VAR_14);

 VAR_15 = VAR_11->tx_new;
 *FUNC_2(VAR_13, VAR_8[VAR_15].length, VAR_11->type) = (-VAR_16);
 *FUNC_2(VAR_13, VAR_8[VAR_15].misc, VAR_11->type) = 0;

 FUNC_0(VAR_11->type, VAR_11->tx_buf_ptr_cpu[VAR_15], VAR_9->data, VAR_16);


 *FUNC_2(VAR_13, VAR_8[VAR_15].tmd1, VAR_11->type) =
  ((VAR_11->tx_buf_ptr_lnc[VAR_15] >> 16) & 0xff) |
  (VAR_4 | VAR_3);
 VAR_11->tx_new = (VAR_15 + 1) & VAR_7;

 if (VAR_6 <= 0)
  FUNC_4(VAR_10);


 FUNC_8(&VAR_12->rdp, VAR_1 | VAR_2);

 FUNC_7(&VAR_11->lock, VAR_14);

 FUNC_1(VAR_9);

  return VAR_5;
}
