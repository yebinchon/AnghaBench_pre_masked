
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int curr; TYPE_2__* info; struct rx_desc* ring; } ;
struct TYPE_9__ {int numrx; } ;
struct velocity_info {TYPE_5__ rx; TYPE_4__ options; TYPE_1__* netdev; } ;
struct TYPE_8__ {int len; int RSR; } ;
struct rx_desc {int size; TYPE_3__ rdesc0; } ;
struct net_device_stats {int rx_dropped; int rx_frame_errors; int rx_crc_errors; } ;
struct TYPE_7__ {int skb; } ;
struct TYPE_6__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device_stats*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct velocity_info*) ;
 scalar_t__ FUNC_3 (struct velocity_info*,int) ;
 scalar_t__ FUNC_4 (struct velocity_info*) ;

__attribute__((used)) static int FUNC_5(struct velocity_info *VAR_7, int VAR_8)
{
 struct net_device_stats *VAR_9 = &VAR_7->netdev->stats;
 int VAR_10 = VAR_7->rx.curr;
 int VAR_11 = 0;

 while (VAR_11 < VAR_8) {
  struct rx_desc *VAR_12 = VAR_7->rx.ring + VAR_10;

  if (!VAR_7->rx.info[VAR_10].skb)
   break;

  if (VAR_12->rdesc0.len & VAR_0)
   break;

  FUNC_1();




  if (VAR_12->rdesc0.RSR & (VAR_5 | VAR_1 | VAR_4)) {
   if (FUNC_3(VAR_7, VAR_10) < 0)
    VAR_9->rx_dropped++;
  } else {
   if (VAR_12->rdesc0.RSR & VAR_2)
    VAR_9->rx_crc_errors++;
   if (VAR_12->rdesc0.RSR & VAR_3)
    VAR_9->rx_frame_errors++;

   VAR_9->rx_dropped++;
  }

  VAR_12->size |= VAR_6;

  VAR_10++;
  if (VAR_10 >= VAR_7->options.numrx)
   VAR_10 = 0;
  VAR_11++;
 }

 VAR_7->rx.curr = VAR_10;

 if ((VAR_11 > 0) && (FUNC_4(VAR_7) > 0))
  FUNC_2(VAR_7);

 FUNC_0(VAR_9);
 return VAR_11;
}
