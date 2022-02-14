
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bttv {int dummy; } ;


 int FUNC_0 (int,int const) ;

__attribute__((used)) static void FUNC_1(struct bttv *VAR_0,
    unsigned char VAR_1,
    unsigned char VAR_2,
    unsigned char VAR_3) {
 const u32 VAR_4 = ((VAR_1&0xf) | (VAR_2&3)<<4);
 const u32 VAR_5 = 1<<16;
 const u32 VAR_6 = 1<<17;
 const u32 VAR_7 = VAR_3<<18;

 FUNC_0(0x1007f, VAR_4 | VAR_5);
 FUNC_0(0x20000, VAR_6);
 FUNC_0(0x40000, VAR_7);
 FUNC_0(0x20000, ~VAR_6);
}
