
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;
typedef enum n_rf_ctl_over_cmd { ____Placeholder_n_rf_ctl_over_cmd } n_rf_ctl_over_cmd ;


 int FUNC_0 (int) ;





 int FUNC_1 (struct b43_wldev*,int,int,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0,
       enum n_rf_ctl_over_cmd VAR_1,
       u16 VAR_2, u8 VAR_3, bool VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_0->phy;
 u16 VAR_6;

 FUNC_0(VAR_5->rev < 7);

 switch (VAR_1) {
 case 132:
  FUNC_1(VAR_0, 0x20, VAR_2, VAR_3, VAR_4, 1);
  FUNC_1(VAR_0, 0x10, VAR_2, VAR_3, VAR_4, 1);
  FUNC_1(VAR_0, 0x08, VAR_2, VAR_3, VAR_4, 1);
  break;
 case 130:
  FUNC_1(VAR_0, 0x4, VAR_2, VAR_3, VAR_4, 1);
  FUNC_1(VAR_0, 0x2, VAR_2, VAR_3, VAR_4, 1);
  FUNC_1(VAR_0, 0x1, VAR_2, VAR_3, VAR_4, 1);
  FUNC_1(VAR_0, 0x2, VAR_2, VAR_3, VAR_4, 2);
  FUNC_1(VAR_0, 0x0800, 0, VAR_3, VAR_4, 1);
  break;
 case 128:
  FUNC_1(VAR_0, 0x4, VAR_2, VAR_3, VAR_4, 0);
  FUNC_1(VAR_0, 0x2, VAR_2, VAR_3, VAR_4, 1);
  FUNC_1(VAR_0, 0x1, VAR_2, VAR_3, VAR_4, 2);
  FUNC_1(VAR_0, 0x0800, 1, VAR_3, VAR_4, 1);
  break;
 case 131:
  VAR_6 = VAR_2 & 0xFF;
  FUNC_1(VAR_0, 0x0800, VAR_6, VAR_3, VAR_4, 0);
  VAR_6 = VAR_2 >> 8;
  FUNC_1(VAR_0, 0x6000, VAR_6, VAR_3, VAR_4, 0);
  break;
 case 129:
  VAR_6 = VAR_2 & 0x7FFF;
  FUNC_1(VAR_0, 0x1000, VAR_6, VAR_3, VAR_4, 0);
  VAR_6 = VAR_2 >> 14;
  FUNC_1(VAR_0, 0x4000, VAR_6, VAR_3, VAR_4, 0);
  break;
 }
}
