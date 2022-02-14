
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_5__ {int count; } ;
struct TYPE_6__ {int count; } ;
struct fm10k_hw_stats_q {int rx_stats_idx; TYPE_1__ rx_bytes; TYPE_2__ rx_packets; TYPE_2__ rx_drops; } ;
struct fm10k_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct fm10k_hw*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (struct fm10k_hw*,int ,TYPE_1__*) ;
 int FUNC_6 (struct fm10k_hw*,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct fm10k_hw *VAR_2,
           struct fm10k_hw_stats_q *VAR_3,
           u32 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 u64 VAR_9 = 0;


 VAR_5 = FUNC_6(VAR_2, FUNC_3(VAR_4));


 do {
  VAR_8 = FUNC_4(VAR_2, FUNC_2(VAR_4),
         &VAR_3->rx_drops);

  VAR_7 = FUNC_4(VAR_2, FUNC_1(VAR_4),
           &VAR_3->rx_packets);

  if (VAR_7)
   VAR_9 = FUNC_5(VAR_2,
          FUNC_0(VAR_4),
          &VAR_3->rx_bytes);


  VAR_6 = VAR_5;
  VAR_5 = FUNC_6(VAR_2, FUNC_3(VAR_4));
 } while ((VAR_5 ^ VAR_6) & VAR_0);


 VAR_5 &= VAR_0;
 VAR_5 |= VAR_1;


 if (VAR_3->rx_stats_idx == VAR_5) {
  VAR_3->rx_drops.count += VAR_8;
  VAR_3->rx_packets.count += VAR_7;
  VAR_3->rx_bytes.count += VAR_9;
 }


 FUNC_7(&VAR_3->rx_drops, VAR_8);
 FUNC_7(&VAR_3->rx_packets, VAR_7);
 FUNC_8(&VAR_3->rx_bytes, VAR_9);

 VAR_3->rx_stats_idx = VAR_5;
}
