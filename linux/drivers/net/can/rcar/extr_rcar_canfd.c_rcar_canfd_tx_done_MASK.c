
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rcar_canfd_channel {int channel; size_t tx_tail; size_t tx_head; int base; int tx_lock; scalar_t__* tx_len; } ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 size_t FUNC_1 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (struct net_device*,size_t) ;
 int FUNC_3 (struct net_device*,int ) ;
 struct rcar_canfd_channel* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_4)
{
 struct rcar_canfd_channel *VAR_5 = FUNC_4(VAR_4);
 struct net_device_stats *VAR_6 = &VAR_4->stats;
 u32 VAR_7;
 unsigned long VAR_8;
 u32 VAR_9 = VAR_5->channel;

 do {
  u8 VAR_10, VAR_11;

  VAR_11 = VAR_5->tx_tail % VAR_3;
  VAR_6->tx_packets++;
  VAR_6->tx_bytes += VAR_5->tx_len[VAR_11];
  VAR_5->tx_len[VAR_11] = 0;
  FUNC_2(VAR_4, VAR_11);

  FUNC_8(&VAR_5->tx_lock, VAR_8);
  VAR_5->tx_tail++;
  VAR_7 = FUNC_6(VAR_5->base,
          FUNC_0(VAR_9, VAR_1));
  VAR_10 = FUNC_1(VAR_7);


  if (VAR_10 != VAR_3)
   FUNC_5(VAR_4);

  if (VAR_5->tx_head - VAR_5->tx_tail <= VAR_10) {
   FUNC_9(&VAR_5->tx_lock, VAR_8);
   break;
  }
  FUNC_9(&VAR_5->tx_lock, VAR_8);

 } while (1);


 FUNC_7(VAR_5->base, FUNC_0(VAR_9, VAR_1),
    VAR_7 & ~VAR_2);
 FUNC_3(VAR_4, VAR_0);
}
