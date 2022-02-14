
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvaser_pciefd_rx_packet {int* header; } ;
struct can_berr_counter {int txerr; int rxerr; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct kvaser_pciefd_rx_packet *VAR_8,
       struct can_berr_counter *VAR_9,
       enum can_state *VAR_10,
       enum can_state *VAR_11,
       enum can_state *VAR_12)
{
 if (VAR_8->header[0] & VAR_4 ||
     VAR_8->header[0] & VAR_7)
  *VAR_10 = VAR_0;
 else if (VAR_9->txerr >= 255 || VAR_9->rxerr >= 255)
  *VAR_10 = VAR_0;
 else if (VAR_8->header[1] & VAR_5)
  *VAR_10 = VAR_2;
 else if (VAR_9->txerr >= 128 || VAR_9->rxerr >= 128)
  *VAR_10 = VAR_2;
 else if (VAR_8->header[1] & VAR_6)
  *VAR_10 = VAR_3;
 else if (VAR_9->txerr >= 96 || VAR_9->rxerr >= 96)
  *VAR_10 = VAR_3;
 else
  *VAR_10 = VAR_1;

 *VAR_11 = VAR_9->txerr >= VAR_9->rxerr ? *VAR_10 : 0;
 *VAR_12 = VAR_9->txerr <= VAR_9->rxerr ? *VAR_10 : 0;
}
