
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct skb_shared_info {int dummy; } ;
struct bnx2 {int rx_max_pg_ring; int rx_max_pg_ring_idx; int flags; int rx_buf_use_size; int rx_max_ring; int rx_max_ring_idx; scalar_t__ rx_ring_size; scalar_t__ rx_jumbo_thresh; scalar_t__ rx_buf_size; scalar_t__ rx_copy_thresh; scalar_t__ rx_pg_ring_size; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(struct bnx2 *VAR_12, u32 VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;


 VAR_14 = VAR_12->dev->mtu + VAR_8 + VAR_7 + 8;

 VAR_15 = FUNC_1(VAR_14 + VAR_4) + VAR_9 +
  FUNC_1(sizeof(struct skb_shared_info));

 VAR_12->rx_copy_thresh = VAR_5;
 VAR_12->rx_pg_ring_size = 0;
 VAR_12->rx_max_pg_ring = 0;
 VAR_12->rx_max_pg_ring_idx = 0;
 if ((VAR_15 > VAR_11) && !(VAR_12->flags & VAR_0)) {
  int VAR_17 = FUNC_0(VAR_12->dev->mtu - 40) >> VAR_10;

  VAR_16 = VAR_13 * VAR_17;
  if (VAR_16 > VAR_3)
   VAR_16 = VAR_3;

  VAR_12->rx_pg_ring_size = VAR_16;
  VAR_12->rx_max_pg_ring = FUNC_2(VAR_16,
       VAR_1);
  VAR_12->rx_max_pg_ring_idx =
   (VAR_12->rx_max_pg_ring * VAR_6) - 1;
  VAR_14 = VAR_5 + VAR_7;
  VAR_12->rx_copy_thresh = 0;
 }

 VAR_12->rx_buf_use_size = VAR_14;

 VAR_12->rx_buf_size = FUNC_1(VAR_12->rx_buf_use_size + VAR_4) +
  VAR_9 + FUNC_1(sizeof(struct skb_shared_info));
 VAR_12->rx_jumbo_thresh = VAR_14 - VAR_7;
 VAR_12->rx_ring_size = VAR_13;
 VAR_12->rx_max_ring = FUNC_2(VAR_13, VAR_2);
 VAR_12->rx_max_ring_idx = (VAR_12->rx_max_ring * VAR_6) - 1;
}
