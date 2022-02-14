
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct b43_wldev {int wl; TYPE_1__* dev; } ;
struct TYPE_2__ {int core_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int,int) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;
 int FUNC_7 (struct b43_wldev*,int ,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int FUNC_10(struct b43_wldev *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;

 VAR_10 = FUNC_3(VAR_8, VAR_6, 0);
 VAR_11 = FUNC_3(VAR_8, VAR_6, 4);


 FUNC_5(VAR_8, VAR_6, 0, 0x55AAAA55);
 if (FUNC_3(VAR_8, VAR_6, 0) != 0x55AAAA55)
  goto error;
 FUNC_5(VAR_8, VAR_6, 0, 0xAA5555AA);
 if (FUNC_3(VAR_8, VAR_6, 0) != 0xAA5555AA)
  goto error;



 FUNC_4(VAR_8, VAR_6, 0, 0x1122);
 FUNC_4(VAR_8, VAR_6, 2, 0x3344);
 FUNC_4(VAR_8, VAR_6, 4, 0x5566);
 FUNC_4(VAR_8, VAR_6, 6, 0x7788);
 if (FUNC_3(VAR_8, VAR_6, 2) != 0x55663344)
  FUNC_9(VAR_8->wl, "Unaligned 32bit SHM read access is broken\n");
 FUNC_5(VAR_8, VAR_6, 2, 0xAABBCCDD);
 if (FUNC_2(VAR_8, VAR_6, 0) != 0x1122 ||
     FUNC_2(VAR_8, VAR_6, 2) != 0xCCDD ||
     FUNC_2(VAR_8, VAR_6, 4) != 0xAABB ||
     FUNC_2(VAR_8, VAR_6, 6) != 0x7788)
  FUNC_9(VAR_8->wl, "Unaligned 32bit SHM write access is broken\n");

 FUNC_5(VAR_8, VAR_6, 0, VAR_10);
 FUNC_5(VAR_8, VAR_6, 4, VAR_11);

 if ((VAR_8->dev->core_rev >= 3) && (VAR_8->dev->core_rev <= 10)) {


  FUNC_6(VAR_8, VAR_3, 0xAAAA);
  FUNC_7(VAR_8, VAR_3, 0xCCCCBBBB);
  if (FUNC_0(VAR_8, VAR_5) != 0xBBBB)
   goto error;
  if (FUNC_0(VAR_8, VAR_4) != 0xCCCC)
   goto error;
 }
 FUNC_7(VAR_8, VAR_3, 0);

 VAR_9 = FUNC_1(VAR_8, VAR_2);
 VAR_9 |= VAR_0;
 if (VAR_9 != (VAR_0 | VAR_1))
  goto error;

 return 0;
error:
 FUNC_8(VAR_8->wl, "Failed to validate the chipaccess\n");
 return -VAR_7;
}
