
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_2)
{
 u16 VAR_3;

 FUNC_0(VAR_2, VAR_1, ~0x40);
 VAR_3 = FUNC_1(VAR_2, VAR_0) & 0xF8;
 FUNC_3(VAR_2, VAR_0, VAR_3);
 FUNC_4(1);
 FUNC_3(VAR_2, VAR_0, VAR_3 | 0x4);
 FUNC_4(1);
 FUNC_3(VAR_2, VAR_0, VAR_3 | 0x6);
 FUNC_4(1);
 FUNC_3(VAR_2, VAR_0, VAR_3 | 0x7);
 FUNC_4(300);
 FUNC_2(VAR_2, VAR_1, 0x40);
}
