
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct b43_dmaring* tx_ring_AC_BE; struct b43_dmaring* tx_ring_AC_BK; struct b43_dmaring* tx_ring_AC_VI; struct b43_dmaring* tx_ring_AC_VO; } ;
struct b43_wldev {TYPE_1__ dma; scalar_t__ qos_enabled; } ;
struct b43_dmaring {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct b43_dmaring *FUNC_1(struct b43_wldev *VAR_0,
         u8 VAR_1)
{
 struct b43_dmaring *VAR_2;

 if (VAR_0->qos_enabled) {

  switch (VAR_1) {
  default:
   FUNC_0(1);

  case 0:
   VAR_2 = VAR_0->dma.tx_ring_AC_VO;
   break;
  case 1:
   VAR_2 = VAR_0->dma.tx_ring_AC_VI;
   break;
  case 2:
   VAR_2 = VAR_0->dma.tx_ring_AC_BE;
   break;
  case 3:
   VAR_2 = VAR_0->dma.tx_ring_AC_BK;
   break;
  }
 } else
  VAR_2 = VAR_0->dma.tx_ring_AC_BE;

 return VAR_2;
}
