
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_pio {struct b43legacy_pioqueue* queue3; struct b43legacy_pioqueue* queue2; struct b43legacy_pioqueue* queue1; struct b43legacy_pioqueue* queue0; } ;
struct b43legacy_wldev {struct b43legacy_pio pio; } ;
struct b43legacy_pioqueue {struct b43legacy_pio_txpacket* tx_packets_cache; } ;
struct b43legacy_pio_txpacket {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static
struct b43legacy_pioqueue *FUNC_1(struct b43legacy_wldev *VAR_1,
     u16 VAR_2,
     struct b43legacy_pio_txpacket **VAR_3)
{
 struct b43legacy_pio *VAR_4 = &VAR_1->pio;
 struct b43legacy_pioqueue *VAR_5 = ((void*)0);
 int VAR_6;

 switch (VAR_2 & 0xF000) {
 case 0x0000:
  VAR_5 = VAR_4->queue0;
  break;
 case 0x1000:
  VAR_5 = VAR_4->queue1;
  break;
 case 0x2000:
  VAR_5 = VAR_4->queue2;
  break;
 case 0x3000:
  VAR_5 = VAR_4->queue3;
  break;
 default:
  FUNC_0(1);
 }
 VAR_6 = (VAR_2 & 0x0FFF);
 FUNC_0(!(VAR_6 >= 0 && VAR_6
     < VAR_0));
 *VAR_3 = &(VAR_5->tx_packets_cache[VAR_6]);

 return VAR_5;
}
