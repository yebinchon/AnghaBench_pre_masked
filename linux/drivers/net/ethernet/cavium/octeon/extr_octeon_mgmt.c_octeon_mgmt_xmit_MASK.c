
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tstamp; int len; int addr; } ;
union mgmt_port_ring_entry {scalar_t__ d64; TYPE_1__ s; } ;
struct sk_buff {int len; int data; } ;
struct TYPE_8__ {int lock; } ;
struct octeon_mgmt {int tx_current_fill; size_t tx_next; scalar_t__ mix; int tx_ring_handle; int dev; TYPE_4__ tx_list; scalar_t__* tx_ring; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
typedef int netdev_tx_t ;
struct TYPE_7__ {int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,struct sk_buff*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct octeon_mgmt* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 TYPE_3__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static netdev_tx_t
FUNC_15(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct octeon_mgmt *VAR_9 = FUNC_5(VAR_8);
 union mgmt_port_ring_entry VAR_10;
 unsigned long VAR_11;
 netdev_tx_t VAR_12 = VAR_3;

 VAR_10.d64 = 0;
 VAR_10.s.tstamp = ((FUNC_11(VAR_7)->tx_flags & VAR_6) != 0);
 VAR_10.s.len = VAR_7->len;
 VAR_10.s.addr = FUNC_2(VAR_9->dev, VAR_7->data,
       VAR_7->len,
       VAR_1);

 FUNC_12(&VAR_9->tx_list.lock, VAR_11);

 if (FUNC_14(VAR_9->tx_current_fill >= FUNC_9(VAR_5) - 1)) {
  FUNC_13(&VAR_9->tx_list.lock, VAR_11);
  FUNC_6(VAR_8);
  FUNC_12(&VAR_9->tx_list.lock, VAR_11);
 }

 if (FUNC_14(VAR_9->tx_current_fill >=
       FUNC_9(VAR_5))) {
  FUNC_13(&VAR_9->tx_list.lock, VAR_11);
  FUNC_4(VAR_9->dev, VAR_10.s.addr, VAR_10.s.len,
     VAR_1);
  goto out;
 }

 FUNC_0(&VAR_9->tx_list, VAR_7);


 VAR_9->tx_ring[VAR_9->tx_next] = VAR_10.d64;
 VAR_9->tx_next = (VAR_9->tx_next + 1) % VAR_5;
 VAR_9->tx_current_fill++;

 FUNC_13(&VAR_9->tx_list.lock, VAR_11);

 FUNC_3(VAR_9->dev, VAR_9->tx_ring_handle,
       FUNC_10(VAR_5),
       VAR_0);

 VAR_8->stats.tx_packets++;
 VAR_8->stats.tx_bytes += VAR_7->len;


 FUNC_1(VAR_9->mix + VAR_2, 1);

 FUNC_7(VAR_8);
 VAR_12 = VAR_4;
out:
 FUNC_8(VAR_8);
 return VAR_12;
}
