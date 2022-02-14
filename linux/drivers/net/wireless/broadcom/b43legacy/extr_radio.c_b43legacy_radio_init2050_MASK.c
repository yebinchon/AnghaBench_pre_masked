
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43legacy_phy {scalar_t__ type; int rev; int analog; int radio_rev; scalar_t__ gmode; int channel; } ;
struct b43legacy_wldev {TYPE_3__* dev; struct b43legacy_phy phy; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int boardflags_lo; } ;
struct TYPE_5__ {TYPE_1__ sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int) ;
 int FUNC_4 (struct b43legacy_wldev*) ;
 int FUNC_5 (struct b43legacy_wldev*,int) ;
 int FUNC_6 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_7 (struct b43legacy_wldev*,int,int) ;
 int FUNC_8 (struct b43legacy_wldev*,int) ;
 int FUNC_9 (struct b43legacy_wldev*,int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

u16 FUNC_12(struct b43legacy_wldev *VAR_5)
{
 struct b43legacy_phy *VAR_6 = &VAR_5->phy;
 u16 VAR_7[21] = { 0 };
 u16 VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;

 VAR_7[0] = FUNC_5(VAR_5, 0x0043);
 VAR_7[14] = FUNC_5(VAR_5, 0x0051);
 VAR_7[15] = FUNC_5(VAR_5, 0x0052);
 VAR_7[1] = FUNC_2(VAR_5, 0x0015);
 VAR_7[16] = FUNC_2(VAR_5, 0x005A);
 VAR_7[17] = FUNC_2(VAR_5, 0x0059);
 VAR_7[18] = FUNC_2(VAR_5, 0x0058);
 if (VAR_6->type == VAR_3) {
  VAR_7[2] = FUNC_2(VAR_5, 0x0030);
  VAR_7[3] = FUNC_8(VAR_5, 0x03EC);
  FUNC_3(VAR_5, 0x0030, 0x00FF);
  FUNC_9(VAR_5, 0x03EC, 0x3F3F);
 } else {
  if (VAR_6->gmode) {
   VAR_7[4] = FUNC_2(VAR_5, 0x0811);
   VAR_7[5] = FUNC_2(VAR_5, 0x0812);
   VAR_7[6] = FUNC_2(VAR_5, 0x0814);
   VAR_7[7] = FUNC_2(VAR_5, 0x0815);
   VAR_7[8] = FUNC_2(VAR_5,
             VAR_4);
   VAR_7[9] = FUNC_2(VAR_5, 0x0802);
   FUNC_3(VAR_5, 0x0814,
         (FUNC_2(VAR_5, 0x0814)
         | 0x0003));
   FUNC_3(VAR_5, 0x0815,
         (FUNC_2(VAR_5, 0x0815)
         & 0xFFFC));
   FUNC_3(VAR_5, VAR_4,
         (FUNC_2(VAR_5,
         VAR_4) & 0x7FFF));
   FUNC_3(VAR_5, 0x0802,
         (FUNC_2(VAR_5, 0x0802)
         & 0xFFFC));
   if (VAR_6->rev > 1) {
    VAR_7[19] = FUNC_2(VAR_5, 0x080F);
    VAR_7[20] = FUNC_2(VAR_5, 0x0810);
    if (VAR_6->rev >= 3)
     FUNC_3(VAR_5, 0x080F,
           0xC020);
    else
     FUNC_3(VAR_5, 0x080F,
           0x8020);
    FUNC_3(VAR_5, 0x0810, 0x0000);
   }
   FUNC_3(VAR_5, 0x0812,
         FUNC_1(VAR_5,
         FUNC_0(0, 1, 1)));
   if (VAR_6->rev < 7 ||
       !(VAR_5->dev->bus->sprom.boardflags_lo
       & VAR_0))
    FUNC_3(VAR_5, 0x0811, 0x01B3);
   else
    FUNC_3(VAR_5, 0x0811, 0x09B3);
  }
 }
 FUNC_9(VAR_5, VAR_2,
   (FUNC_8(VAR_5, VAR_2)
       | 0x8000));
 VAR_7[10] = FUNC_2(VAR_5, 0x0035);
 FUNC_3(VAR_5, 0x0035,
       (FUNC_2(VAR_5, 0x0035) & 0xFF7F));
 VAR_7[11] = FUNC_8(VAR_5, 0x03E6);
 VAR_7[12] = FUNC_8(VAR_5, VAR_1);


 if (VAR_6->analog == 0)
  FUNC_9(VAR_5, 0x03E6, 0x0122);
 else {
  if (VAR_6->analog >= 2)
   FUNC_3(VAR_5, 0x0003,
         (FUNC_2(VAR_5, 0x0003)
         & 0xFFBF) | 0x0040);
  FUNC_9(VAR_5, VAR_1,
      (FUNC_8(VAR_5,
      VAR_1) | 0x2000));
 }

 VAR_8 = FUNC_4(VAR_5);

 if (VAR_6->type == VAR_3)
  FUNC_7(VAR_5, 0x0078, 0x0026);

 if (VAR_6->gmode)
  FUNC_3(VAR_5, 0x0812,
        FUNC_1(VAR_5,
        FUNC_0(0, 1, 1)));
 FUNC_3(VAR_5, 0x0015, 0xBFAF);
 FUNC_3(VAR_5, 0x002B, 0x1403);
 if (VAR_6->gmode)
  FUNC_3(VAR_5, 0x0812,
        FUNC_1(VAR_5,
        FUNC_0(0, 0, 1)));
 FUNC_3(VAR_5, 0x0015, 0xBFA0);
 FUNC_7(VAR_5, 0x0051,
    (FUNC_5(VAR_5, 0x0051)
    | 0x0004));
 if (VAR_6->radio_rev == 8)
  FUNC_7(VAR_5, 0x0043, 0x001F);
 else {
  FUNC_7(VAR_5, 0x0052, 0x0000);
  FUNC_7(VAR_5, 0x0043,
     (FUNC_5(VAR_5, 0x0043)
     & 0xFFF0) | 0x0009);
 }
 FUNC_3(VAR_5, 0x0058, 0x0000);

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  FUNC_3(VAR_5, 0x005A, 0x0480);
  FUNC_3(VAR_5, 0x0059, 0xC810);
  FUNC_3(VAR_5, 0x0058, 0x000D);
  if (VAR_6->gmode)
   FUNC_3(VAR_5, 0x0812,
         FUNC_1(VAR_5,
         FUNC_0(1, 0, 1)));
  FUNC_3(VAR_5, 0x0015, 0xAFB0);
  FUNC_11(10);
  if (VAR_6->gmode)
   FUNC_3(VAR_5, 0x0812,
         FUNC_1(VAR_5,
         FUNC_0(1, 0, 1)));
  FUNC_3(VAR_5, 0x0015, 0xEFB0);
  FUNC_11(10);
  if (VAR_6->gmode)
   FUNC_3(VAR_5, 0x0812,
         FUNC_1(VAR_5,
         FUNC_0(1, 0, 0)));
  FUNC_3(VAR_5, 0x0015, 0xFFF0);
  FUNC_11(20);
  VAR_11 += FUNC_2(VAR_5, 0x002D);
  FUNC_3(VAR_5, 0x0058, 0x0000);
  if (VAR_6->gmode)
   FUNC_3(VAR_5, 0x0812,
         FUNC_1(VAR_5,
         FUNC_0(1, 0, 1)));
  FUNC_3(VAR_5, 0x0015, 0xAFB0);
 }

 VAR_11++;
 VAR_11 >>= 9;
 FUNC_11(10);
 FUNC_3(VAR_5, 0x0058, 0x0000);

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  FUNC_7(VAR_5, 0x0078, (FUNC_10(VAR_9) << 1)
     | 0x0020);
  VAR_7[13] = FUNC_5(VAR_5, 0x0078);
  FUNC_11(10);
  for (VAR_10 = 0; VAR_10 < 16; VAR_10++) {
   FUNC_3(VAR_5, 0x005A, 0x0D80);
   FUNC_3(VAR_5, 0x0059, 0xC810);
   FUNC_3(VAR_5, 0x0058, 0x000D);
   if (VAR_6->gmode)
    FUNC_3(VAR_5, 0x0812,
          FUNC_1(VAR_5,
          FUNC_0(1, 0, 1)));
   FUNC_3(VAR_5, 0x0015, 0xAFB0);
   FUNC_11(10);
   if (VAR_6->gmode)
    FUNC_3(VAR_5, 0x0812,
          FUNC_1(VAR_5,
          FUNC_0(1, 0, 1)));
   FUNC_3(VAR_5, 0x0015, 0xEFB0);
   FUNC_11(10);
   if (VAR_6->gmode)
    FUNC_3(VAR_5, 0x0812,
          FUNC_1(VAR_5,
          FUNC_0(1, 0, 0)));
   FUNC_3(VAR_5, 0x0015, 0xFFF0);
   FUNC_11(10);
   VAR_12 += FUNC_2(VAR_5, 0x002D);
   FUNC_3(VAR_5, 0x0058, 0x0000);
   if (VAR_6->gmode)
    FUNC_3(VAR_5, 0x0812,
          FUNC_1(VAR_5,
          FUNC_0(1, 0, 1)));
   FUNC_3(VAR_5, 0x0015, 0xAFB0);
  }
  VAR_12++;
  VAR_12 >>= 8;
  if (VAR_11 < VAR_12)
   break;
 }


 FUNC_3(VAR_5, 0x0015, VAR_7[1]);
 FUNC_7(VAR_5, 0x0051, VAR_7[14]);
 FUNC_7(VAR_5, 0x0052, VAR_7[15]);
 FUNC_7(VAR_5, 0x0043, VAR_7[0]);
 FUNC_3(VAR_5, 0x005A, VAR_7[16]);
 FUNC_3(VAR_5, 0x0059, VAR_7[17]);
 FUNC_3(VAR_5, 0x0058, VAR_7[18]);
 FUNC_9(VAR_5, 0x03E6, VAR_7[11]);
 if (VAR_6->analog != 0)
  FUNC_9(VAR_5, VAR_1, VAR_7[12]);
 FUNC_3(VAR_5, 0x0035, VAR_7[10]);
 FUNC_6(VAR_5, VAR_6->channel, 1);
 if (VAR_6->type == VAR_3) {
  FUNC_3(VAR_5, 0x0030, VAR_7[2]);
  FUNC_9(VAR_5, 0x03EC, VAR_7[3]);
 } else {
  if (VAR_6->gmode) {
   FUNC_9(VAR_5, VAR_2,
       (FUNC_8(VAR_5,
       VAR_2) & 0x7FFF));
   FUNC_3(VAR_5, 0x0811, VAR_7[4]);
   FUNC_3(VAR_5, 0x0812, VAR_7[5]);
   FUNC_3(VAR_5, 0x0814, VAR_7[6]);
   FUNC_3(VAR_5, 0x0815, VAR_7[7]);
   FUNC_3(VAR_5, VAR_4,
         VAR_7[8]);
   FUNC_3(VAR_5, 0x0802, VAR_7[9]);
   if (VAR_6->rev > 1) {
    FUNC_3(VAR_5, 0x080F, VAR_7[19]);
    FUNC_3(VAR_5, 0x0810, VAR_7[20]);
   }
  }
 }
 if (VAR_9 >= 15)
  VAR_8 = VAR_7[13];

 return VAR_8;
}
