
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bttv {int dummy; } ;


 int FUNC_0 (struct bttv*,int) ;

__attribute__((used)) static void FUNC_1(struct bttv *VAR_0, unsigned int VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;

 VAR_3 = (VAR_1 & 0x8) >> 3 ;


 VAR_2 = 0x11;
 VAR_2 |= ((VAR_1 & 0x7) << 1) << (4 * VAR_3);
 FUNC_0(VAR_0, VAR_2);


 VAR_2 &= ~0x11;
 VAR_2 |= ((VAR_3 ^ 0x1) << 4) | VAR_3;
 FUNC_0(VAR_0, VAR_2);
}
