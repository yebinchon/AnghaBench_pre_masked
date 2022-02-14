
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int irq_rx_adaptive; unsigned int irq_rx_moderation_us; size_t tx_channel_offset; struct ef4_channel** channel; } ;
struct ef4_channel {unsigned int irq_moderation_us; } ;



void FUNC_0(struct ef4_nic *VAR_0, unsigned int *VAR_1,
       unsigned int *VAR_2, bool *VAR_3)
{
 *VAR_3 = VAR_0->irq_rx_adaptive;
 *VAR_2 = VAR_0->irq_rx_moderation_us;





 if (VAR_0->tx_channel_offset == 0) {
  *VAR_1 = *VAR_2;
 } else {
  struct ef4_channel *VAR_4;

  VAR_4 = VAR_0->channel[VAR_0->tx_channel_offset];
  *VAR_1 = VAR_4->irq_moderation_us;
 }
}
