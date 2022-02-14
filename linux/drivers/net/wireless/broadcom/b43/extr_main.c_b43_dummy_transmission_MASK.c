
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43_phy {int type; int radio_ver; int radio_rev; } ;
struct b43_wldev {TYPE_1__* dev; struct b43_phy phy; } ;
struct TYPE_2__ {int core_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,unsigned int,int) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (int) ;

void FUNC_5(struct b43_wldev *VAR_12, bool VAR_13, bool VAR_14)
{
 struct b43_phy *VAR_15 = &VAR_12->phy;
 unsigned int VAR_16, VAR_17;
 u16 VAR_18;
 u32 VAR_19[5] = {
  0x00000000,
  0x00D40000,
  0x00000000,
  0x01000000,
  0x00000000,
 };

 if (VAR_13) {
  VAR_17 = 0x1E;
  VAR_19[0] = 0x000201CC;
 } else {
  VAR_17 = 0xFA;
  VAR_19[0] = 0x000B846E;
 }

 for (VAR_16 = 0; VAR_16 < 5; VAR_16++)
  FUNC_1(VAR_12, VAR_16 * 4, VAR_19[VAR_16]);

 FUNC_3(VAR_12, VAR_9, 0x0000);

 if (VAR_12->dev->core_rev < 11)
  FUNC_3(VAR_12, VAR_8, 0x0000);
 else
  FUNC_3(VAR_12, VAR_8, 0x0100);

 VAR_18 = (VAR_13 ? 0x41 : 0x40);
 FUNC_3(VAR_12, VAR_3, VAR_18);
 if (VAR_15->type == 128 || VAR_15->type == 129 ||
     VAR_15->type == 130)
  FUNC_3(VAR_12, VAR_4, 0x1A02);

 FUNC_3(VAR_12, VAR_6, 0x0000);
 FUNC_3(VAR_12, VAR_7, 0x0000);

 FUNC_3(VAR_12, VAR_10, 0x0000);
 FUNC_3(VAR_12, VAR_11, 0x0014);
 FUNC_3(VAR_12, VAR_9, 0x0826);
 FUNC_3(VAR_12, VAR_2, 0x0000);

 if (!VAR_14 && VAR_15->type == 128)
  ;

 switch (VAR_15->type) {
 case 128:
 case 130:
  FUNC_3(VAR_12, VAR_1, 0x00D0);
  break;
 case 129:
  FUNC_3(VAR_12, VAR_1, 0x0050);
  break;
 default:
  FUNC_3(VAR_12, VAR_1, 0x0030);
 }
 FUNC_2(VAR_12, VAR_1);

 if (VAR_15->radio_ver == 0x2050 && VAR_15->radio_rev <= 0x5)
  FUNC_0(VAR_12, 0x0051, 0x0017);
 for (VAR_16 = 0x00; VAR_16 < VAR_17; VAR_16++) {
  VAR_18 = FUNC_2(VAR_12, VAR_5);
  if (VAR_18 & 0x0080)
   break;
  FUNC_4(10);
 }
 for (VAR_16 = 0x00; VAR_16 < 0x0A; VAR_16++) {
  VAR_18 = FUNC_2(VAR_12, VAR_5);
  if (VAR_18 & 0x0400)
   break;
  FUNC_4(10);
 }
 for (VAR_16 = 0x00; VAR_16 < 0x19; VAR_16++) {
  VAR_18 = FUNC_2(VAR_12, VAR_0);
  if (!(VAR_18 & 0x0100))
   break;
  FUNC_4(10);
 }
 if (VAR_15->radio_ver == 0x2050 && VAR_15->radio_rev <= 0x5)
  FUNC_0(VAR_12, 0x0051, 0x0037);
}
