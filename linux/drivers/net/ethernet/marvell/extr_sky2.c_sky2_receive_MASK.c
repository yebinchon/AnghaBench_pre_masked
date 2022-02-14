
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sky2_port {int rx_next; int rx_pending; TYPE_1__* hw; struct rx_ring_info* rx_ring; } ;
struct sk_buff {int dummy; } ;
struct rx_ring_info {int skb; } ;
struct TYPE_4__ {int rx_errors; int rx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {scalar_t__ chip_id; scalar_t__ chip_rev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct rx_ring_info*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 struct sky2_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sky2_port*,int ,struct net_device*,char*,int,scalar_t__) ;
 int FUNC_4 (struct sky2_port*,int ,int ,struct net_device*,char*,int,int,scalar_t__) ;
 int FUNC_5 (struct rx_ring_info*) ;
 struct sk_buff* FUNC_6 (struct sky2_port*,struct rx_ring_info*,scalar_t__) ;
 struct sk_buff* FUNC_7 (struct sky2_port*,struct rx_ring_info*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sky2_port*,struct rx_ring_info*) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct net_device *VAR_9,
        u16 VAR_10, u32 VAR_11)
{
  struct sky2_port *VAR_12 = FUNC_2(VAR_9);
 struct rx_ring_info *VAR_13 = VAR_12->rx_ring + VAR_12->rx_next;
 struct sk_buff *VAR_14 = ((void*)0);
 u16 VAR_15 = (VAR_11 & VAR_3) >> 16;

 FUNC_4(VAR_12, VAR_8, VAR_5, VAR_9,
       "rx slot %u status 0x%x len %d\n",
       VAR_12->rx_next, VAR_11, VAR_10);

 VAR_12->rx_next = (VAR_12->rx_next + 1) % VAR_12->rx_pending;
 FUNC_5(VAR_12->rx_ring + VAR_12->rx_next);

 if (FUNC_8(VAR_13->skb))
  VAR_15 -= VAR_6;





 if (VAR_12->hw->chip_id == VAR_0 &&
     VAR_12->hw->chip_rev == VAR_1 &&
     VAR_10 != VAR_15)
  goto okay;

 if (VAR_11 & VAR_2)
  goto error;

 if (!(VAR_11 & VAR_4))
  goto resubmit;


 if (VAR_10 != VAR_15)
  goto error;

okay:
 if (FUNC_0(VAR_13, VAR_10))
  VAR_14 = FUNC_6(VAR_12, VAR_13, VAR_10);
 else
  VAR_14 = FUNC_7(VAR_12, VAR_13, VAR_10);

 VAR_9->stats.rx_dropped += (VAR_14 == ((void*)0));

resubmit:
 FUNC_9(VAR_12, VAR_13);

 return VAR_14;

error:
 ++VAR_9->stats.rx_errors;

 if (FUNC_1())
  FUNC_3(VAR_12, VAR_7, VAR_9,
      "rx error, status 0x%x length %d\n", VAR_11, VAR_10);

 goto resubmit;
}
