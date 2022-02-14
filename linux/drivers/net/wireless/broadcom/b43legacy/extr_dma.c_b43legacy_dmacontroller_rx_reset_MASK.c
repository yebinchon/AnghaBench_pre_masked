
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43legacy_wldev {int wl; } ;
typedef enum b43legacy_dmatype { ____Placeholder_b43legacy_dmatype } b43legacy_dmatype ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43legacy_wldev*,scalar_t__) ;
 int FUNC_1 (struct b43legacy_wldev*,scalar_t__,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct b43legacy_wldev *VAR_5,
         u16 VAR_6,
         enum b43legacy_dmatype VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 u16 VAR_10;

 FUNC_3();

 VAR_10 = VAR_0;
 FUNC_1(VAR_5, VAR_6 + VAR_10, 0);
 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  VAR_10 = VAR_2;
  VAR_9 = FUNC_0(VAR_5, VAR_6 + VAR_10);
  VAR_9 &= VAR_1;
  if (VAR_9 == VAR_3) {
   VAR_8 = -1;
   break;
  }
  FUNC_4(1);
 }
 if (VAR_8 != -1) {
  FUNC_2(VAR_5->wl, "DMA RX reset timed out\n");
  return -VAR_4;
 }

 return 0;
}
