
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43_wldev {int dummy; } ;
typedef enum b43_dmatype { ____Placeholder_b43_dmatype } b43_dmatype ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*,scalar_t__) ;
 int FUNC_1 (struct b43_wldev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_5, enum b43_dmatype VAR_6,
      u16 VAR_7, bool VAR_8)
{
 u32 VAR_9;

 if (VAR_6 == VAR_4) {
  VAR_9 = FUNC_0(VAR_5, VAR_7 + VAR_2);
  VAR_9 &= ~VAR_3;
  if (VAR_8)
   VAR_9 |= VAR_3;
  FUNC_1(VAR_5, VAR_7 + VAR_2, VAR_9);
 } else {
  VAR_9 = FUNC_0(VAR_5, VAR_7 + VAR_0);
  VAR_9 &= ~VAR_1;
  if (VAR_8)
   VAR_9 |= VAR_1;
  FUNC_1(VAR_5, VAR_7 + VAR_0, VAR_9);
 }
}
