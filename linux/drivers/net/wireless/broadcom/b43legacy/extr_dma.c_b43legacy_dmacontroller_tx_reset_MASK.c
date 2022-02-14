
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct b43legacy_wldev*,scalar_t__) ;
 int FUNC_1 (struct b43legacy_wldev*,scalar_t__,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct b43legacy_wldev *VAR_7,
         u16 VAR_8,
         enum b43legacy_dmatype VAR_9)
{
 int VAR_10;
 u32 VAR_11;
 u16 VAR_12;

 FUNC_3();

 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  VAR_12 = VAR_2;
  VAR_11 = FUNC_0(VAR_7, VAR_8 + VAR_12);
  VAR_11 &= VAR_1;
  if (VAR_11 == VAR_3 ||
      VAR_11 == VAR_4 ||
      VAR_11 == VAR_5)
   break;
  FUNC_4(1);
 }
 VAR_12 = VAR_0;
 FUNC_1(VAR_7, VAR_8 + VAR_12, 0);
 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  VAR_12 = VAR_2;
  VAR_11 = FUNC_0(VAR_7, VAR_8 + VAR_12);
  VAR_11 &= VAR_1;
  if (VAR_11 == VAR_3) {
   VAR_10 = -1;
   break;
  }
  FUNC_4(1);
 }
 if (VAR_10 != -1) {
  FUNC_2(VAR_7->wl, "DMA TX reset timed out\n");
  return -VAR_6;
 }

 FUNC_4(1);

 return 0;
}
