
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_wldev {int dummy; } ;





 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43legacy_wldev *VAR_8,
       int VAR_9)
{
 u16 VAR_10 = 0;
 u16 VAR_11;

 switch (VAR_9) {
 case 130:
  VAR_10 |= VAR_5;
  break;
 case 129:
  VAR_10 |= VAR_6;
  break;
 case 128:
  VAR_10 |= VAR_7;
  break;
 default:
  FUNC_0(1);
 }





 VAR_11 = FUNC_1(VAR_8, VAR_0,
       VAR_2);
 VAR_11 = (VAR_11 & ~VAR_4) | VAR_10;
 FUNC_2(VAR_8, VAR_0,
         VAR_2, VAR_11);

 VAR_11 = FUNC_1(VAR_8, VAR_0,
       VAR_1);
 VAR_11 = (VAR_11 & ~VAR_4) | VAR_10;
 FUNC_2(VAR_8, VAR_0,
         VAR_1, VAR_11);

 VAR_11 = FUNC_1(VAR_8, VAR_0,
       VAR_3);
 VAR_11 = (VAR_11 & ~VAR_4) | VAR_10;
 FUNC_2(VAR_8, VAR_0,
         VAR_3, VAR_11);
}
