
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct b43legacy_wldev {TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b43legacy_wldev *VAR_6, u64 VAR_7)
{




 if (VAR_6->dev->id.revision >= 3) {
  u32 VAR_8 = (VAR_7 & 0x00000000FFFFFFFFULL);
  u32 VAR_9 = (VAR_7 & 0xFFFFFFFF00000000ULL) >> 32;

  FUNC_1(VAR_6, VAR_1, 0);
  FUNC_1(VAR_6, VAR_0,
        VAR_9);
  FUNC_1(VAR_6, VAR_1,
        VAR_8);
 } else {
  u16 VAR_10 = (VAR_7 & 0x000000000000FFFFULL);
  u16 VAR_11 = (VAR_7 & 0x00000000FFFF0000ULL) >> 16;
  u16 VAR_12 = (VAR_7 & 0x0000FFFF00000000ULL) >> 32;
  u16 VAR_13 = (VAR_7 & 0xFFFF000000000000ULL) >> 48;

  FUNC_0(VAR_6, VAR_2, 0);
  FUNC_0(VAR_6, VAR_5, VAR_13);
  FUNC_0(VAR_6, VAR_4, VAR_12);
  FUNC_0(VAR_6, VAR_3, VAR_11);
  FUNC_0(VAR_6, VAR_2, VAR_10);
 }
}
