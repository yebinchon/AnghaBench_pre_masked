
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0)
{
 u32 VAR_1, VAR_2;
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < 128; VAR_3++) {
  VAR_1 = FUNC_1(VAR_0, FUNC_0(0x7, 0x140 + VAR_3));
  VAR_1 >>= 20;
  VAR_2 = FUNC_1(VAR_0, FUNC_0(0x7, 0xc0 + VAR_3));




 }
}
