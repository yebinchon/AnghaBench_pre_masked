
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_dma {struct b43_dmaring* tx_ring_mcast; struct b43_dmaring* tx_ring_AC_VO; struct b43_dmaring* tx_ring_AC_VI; struct b43_dmaring* tx_ring_AC_BE; struct b43_dmaring* tx_ring_AC_BK; } ;
struct b43_wldev {int wl; struct b43_dma dma; } ;
struct b43_dmaring {int nr_slots; } ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static
struct b43_dmaring *FUNC_2(struct b43_wldev *VAR_0, u16 VAR_1, int *VAR_2)
{
 struct b43_dma *VAR_3 = &VAR_0->dma;
 struct b43_dmaring *VAR_4 = ((void*)0);

 switch (VAR_1 & 0xF000) {
 case 0x1000:
  VAR_4 = VAR_3->tx_ring_AC_BK;
  break;
 case 0x2000:
  VAR_4 = VAR_3->tx_ring_AC_BE;
  break;
 case 0x3000:
  VAR_4 = VAR_3->tx_ring_AC_VI;
  break;
 case 0x4000:
  VAR_4 = VAR_3->tx_ring_AC_VO;
  break;
 case 0x5000:
  VAR_4 = VAR_3->tx_ring_mcast;
  break;
 }
 *VAR_2 = (VAR_1 & 0x0FFF);
 if (FUNC_1(!VAR_4 || *VAR_2 < 0 || *VAR_2 >= VAR_4->nr_slots)) {
  FUNC_0(VAR_0->wl, "TX-status contains "
         "invalid cookie: 0x%04X\n", VAR_1);
  return ((void*)0);
 }

 return VAR_4;
}
