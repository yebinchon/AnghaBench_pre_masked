
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,int,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int,int,int,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_3)
{

 FUNC_2(VAR_3, VAR_0 | VAR_1, 0x1);
 FUNC_5(10, 20);

 FUNC_2(VAR_3, VAR_0 | 0x0BF, 0x1);
 FUNC_1(VAR_3, VAR_0 | 0x19B, 0x3, 0x2);


 FUNC_2(VAR_3, VAR_0 | VAR_1, 0x2);
 FUNC_5(100, 200);


 FUNC_0(VAR_3, VAR_0 | VAR_1, ~0x2);

 if (!FUNC_3(VAR_3, VAR_0 | VAR_2, 1, 1, 100,
      1000000))
  FUNC_4(VAR_3->wl, "Radio 0x2059 rcal timeout\n");


 FUNC_0(VAR_3, VAR_0 | VAR_1, ~0x1);

 FUNC_2(VAR_3, 0xa, 0x60);
}
