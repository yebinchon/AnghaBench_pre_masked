
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int rxq_cnt; int irq_max; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames_irq; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_7, struct ethtool_coalesce *VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10 = VAR_7->rxq_cnt;

 if (!FUNC_0(VAR_7, VAR_0)) {
  FUNC_1(VAR_3, VAR_8->rx_coalesce_usecs);
  FUNC_1(VAR_5, VAR_8->rx_max_coalesced_frames);
  FUNC_1(VAR_1, VAR_8->rx_max_coalesced_frames_irq);
  VAR_10--;
 } else {
  FUNC_1(VAR_3, 0);
  FUNC_1(VAR_5, 0);
  FUNC_1(VAR_1, 0);
 }

 for (; VAR_9 < VAR_10; VAR_9++) {
  u32 VAR_11;

  VAR_11 = VAR_4 + VAR_9 * 0x18;
  FUNC_1(VAR_11, VAR_8->rx_coalesce_usecs);
  VAR_11 = VAR_6 + VAR_9 * 0x18;
  FUNC_1(VAR_11, VAR_8->rx_max_coalesced_frames);
  VAR_11 = VAR_2 + VAR_9 * 0x18;
  FUNC_1(VAR_11, VAR_8->rx_max_coalesced_frames_irq);
 }

 for (; VAR_9 < VAR_7->irq_max - 1; VAR_9++) {
  FUNC_1(VAR_4 + VAR_9 * 0x18, 0);
  FUNC_1(VAR_6 + VAR_9 * 0x18, 0);
  FUNC_1(VAR_2 + VAR_9 * 0x18, 0);
 }
}
