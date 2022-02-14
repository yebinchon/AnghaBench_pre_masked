
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int FUNC_0 (struct b43_wldev*,int,int,int) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_0)
{
 u16 VAR_1[2];

 FUNC_2(VAR_0, 0x09d, 0x4);
 FUNC_3(VAR_0, 0x09e, 0xf);


 FUNC_3(VAR_0, 0x02a, 0xb);
 FUNC_0(VAR_0, 0x030, ~0x3, 0xa);
 FUNC_0(VAR_0, 0x091, ~0x3, 0);
 FUNC_0(VAR_0, 0x038, ~0xf, 0x7);
 FUNC_0(VAR_0, 0x030, ~0xc, 0x8);
 FUNC_0(VAR_0, 0x05e, ~0xf, 0x8);
 FUNC_0(VAR_0, 0x05e, ~0xf0, 0x80);
 FUNC_3(VAR_0, 0x06c, 0x80);

 VAR_1[0] = FUNC_1(VAR_0, 0x044);
 VAR_1[1] = FUNC_1(VAR_0, 0x12b);

 FUNC_2(VAR_0, 0x044, 0x7);
 FUNC_2(VAR_0, 0x12b, 0xe);



 FUNC_3(VAR_0, 0x040, 0xfb);

 FUNC_3(VAR_0, 0x041, 0x9a);
 FUNC_3(VAR_0, 0x042, 0xa3);
 FUNC_3(VAR_0, 0x043, 0x0c);



 FUNC_2(VAR_0, 0x044, 0x0c);
 FUNC_4(1);

 FUNC_3(VAR_0, 0x044, VAR_1[0]);
 FUNC_3(VAR_0, 0x12b, VAR_1[1]);

 if (VAR_0->phy.rev == 1) {

  FUNC_3(VAR_0, 0x038, 0x0);
  FUNC_3(VAR_0, 0x091, 0x7);
 }
}
