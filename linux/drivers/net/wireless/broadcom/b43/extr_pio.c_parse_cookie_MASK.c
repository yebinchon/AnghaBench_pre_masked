
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_pio {struct b43_pio_txqueue* tx_queue_mcast; struct b43_pio_txqueue* tx_queue_AC_VO; struct b43_pio_txqueue* tx_queue_AC_VI; struct b43_pio_txqueue* tx_queue_AC_BE; struct b43_pio_txqueue* tx_queue_AC_BK; } ;
struct b43_wldev {struct b43_pio pio; } ;
struct b43_pio_txqueue {struct b43_pio_txpacket* packets; } ;
struct b43_pio_txpacket {int dummy; } ;


 unsigned int FUNC_0 (struct b43_pio_txpacket*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static
struct b43_pio_txqueue *FUNC_2(struct b43_wldev *VAR_0,
         u16 VAR_1,
          struct b43_pio_txpacket **VAR_2)
{
 struct b43_pio *VAR_3 = &VAR_0->pio;
 struct b43_pio_txqueue *VAR_4 = ((void*)0);
 unsigned int VAR_5;

 switch (VAR_1 & 0xF000) {
 case 0x1000:
  VAR_4 = VAR_3->tx_queue_AC_BK;
  break;
 case 0x2000:
  VAR_4 = VAR_3->tx_queue_AC_BE;
  break;
 case 0x3000:
  VAR_4 = VAR_3->tx_queue_AC_VI;
  break;
 case 0x4000:
  VAR_4 = VAR_3->tx_queue_AC_VO;
  break;
 case 0x5000:
  VAR_4 = VAR_3->tx_queue_mcast;
  break;
 }
 if (FUNC_1(!VAR_4))
  return ((void*)0);
 VAR_5 = (VAR_1 & 0x0FFF);
 if (FUNC_1(VAR_5 >= FUNC_0(VAR_4->packets)))
  return ((void*)0);
 *VAR_2 = &VAR_4->packets[VAR_5];

 return VAR_4;
}
