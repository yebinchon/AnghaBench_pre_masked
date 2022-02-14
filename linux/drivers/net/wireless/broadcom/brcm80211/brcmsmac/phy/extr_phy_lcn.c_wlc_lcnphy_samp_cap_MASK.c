
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
typedef int u32 ;
typedef int u16 ;
struct brcms_phy_lcnphy {scalar_t__ lcnphy_iqcal_swp_dis; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {int d11core; TYPE_1__ u; } ;
typedef int s16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct brcms_phy*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_8(struct brcms_phy *VAR_7, int VAR_8, u16 VAR_9,
      s16 *VAR_10, int VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u16 VAR_18, VAR_19;
 u16 VAR_20;
 s16 VAR_21, VAR_22;
 struct brcms_phy_lcnphy *VAR_23 = VAR_7->u.pi_lcnphy;

 VAR_19 = 0;
 VAR_20 = FUNC_5(VAR_7, 0x6da);

 VAR_12 = FUNC_1(VAR_7->d11core, FUNC_0(VAR_0));
 VAR_10[130] = 0;
 FUNC_3(VAR_7->d11core, FUNC_0(VAR_0),
       ((1 << 6) | VAR_12));

 FUNC_3(VAR_7->d11core, FUNC_0(VAR_4), 0x7E00);
 FUNC_3(VAR_7->d11core, FUNC_0(VAR_3), 0x8000);
 FUNC_6(20);
 VAR_13 = FUNC_1(VAR_7->d11core, FUNC_0(VAR_1));
 FUNC_3(VAR_7->d11core, FUNC_0(VAR_1),
       VAR_13 | 0x30);

 FUNC_7(VAR_7, 0x555, 0x0);
 FUNC_7(VAR_7, 0x5a6, 0x5);

 FUNC_7(VAR_7, 0x5a2, (u16) (VAR_11 | VAR_11 << 6));
 FUNC_7(VAR_7, 0x5cf, 3);
 FUNC_7(VAR_7, 0x5a5, 0x3);
 FUNC_7(VAR_7, 0x583, 0x0);
 FUNC_7(VAR_7, 0x584, 0x0);
 FUNC_7(VAR_7, 0x585, 0x0fff);
 FUNC_7(VAR_7, 0x586, 0x0000);

 FUNC_7(VAR_7, 0x580, 0x4501);

 VAR_18 = FUNC_5(VAR_7, 0x6da);
 FUNC_7(VAR_7, 0x6da, (u32) (VAR_18 | 0x2008));
 VAR_14 = FUNC_1(VAR_7->d11core, FUNC_0(VAR_3));
 VAR_15 = FUNC_1(VAR_7->d11core, FUNC_0(VAR_2));
 do {
  FUNC_6(10);
  VAR_15 = FUNC_1(VAR_7->d11core, FUNC_0(VAR_2));
  VAR_19++;
 } while ((VAR_15 != VAR_14) && (VAR_19 < 500));

 FUNC_3(VAR_7->d11core, FUNC_0(VAR_1), 0x2);
 VAR_16 = 0x7E00;
 FUNC_4(VAR_7->d11core, FUNC_0(VAR_6), VAR_16);
 while (VAR_16 < 0x8000) {
  VAR_17 = FUNC_2(VAR_7->d11core, FUNC_0(VAR_5));
  VAR_21 = ((VAR_17 >> 16) & 0x3ff);
  VAR_22 = ((VAR_17) & 0x3ff);
  if (VAR_21 > 511)
   VAR_21 -= 1024;

  if (VAR_22 > 511)
   VAR_22 -= 1024;

  if (VAR_23->lcnphy_iqcal_swp_dis)
   VAR_10[(VAR_16 - 0x7E00) / 4] = VAR_22;
  else
   VAR_10[(VAR_16 - 0x7E00) / 4] = VAR_21;

  if (VAR_8) {
   if (VAR_21 > VAR_9 || VAR_21 < -VAR_9) {
    VAR_16 = 0x8000;
    VAR_10[130] = 1;
   }
  }

  VAR_16 += 4;
 }

 FUNC_7(VAR_7, 0x6da, VAR_20);
 FUNC_3(VAR_7->d11core, FUNC_0(VAR_1), VAR_13);
 FUNC_3(VAR_7->d11core, FUNC_0(VAR_0), VAR_12);
}
