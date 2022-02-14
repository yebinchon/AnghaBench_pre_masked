
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43legacy_wldev {int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct b43legacy_wldev*,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int ,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct b43legacy_wldev *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_4, 0);
 FUNC_2(VAR_6, VAR_4, 0, 0xAA5555AA);
 if (FUNC_1(VAR_6, VAR_4, 0) !=
     0xAA5555AA)
  goto error;
 FUNC_2(VAR_6, VAR_4, 0, 0x55AAAA55);
 if (FUNC_1(VAR_6, VAR_4, 0) !=
     0x55AAAA55)
  goto error;
 FUNC_2(VAR_6, VAR_4, 0, VAR_8);

 VAR_7 = FUNC_0(VAR_6, VAR_3);
 if ((VAR_7 | VAR_0) !=
     (VAR_0 | VAR_1))
  goto error;

 VAR_7 = FUNC_0(VAR_6, VAR_2);
 if (VAR_7)
  goto error;

 return 0;
error:
 FUNC_3(VAR_6->wl, "Failed to validate the chipaccess\n");
 return -VAR_5;
}
