
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int dummy; } ;


 int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct bttv *VAR_0,
          unsigned char VAR_1,
          unsigned char VAR_2,
          unsigned char VAR_3) {
 unsigned int VAR_4;

 VAR_4 = (VAR_3 << 7) | ((VAR_2&3) << 4) | (VAR_1&0xf);
 FUNC_0(0x1ff, VAR_4);
 FUNC_0(0x1ff, VAR_4 | (1 << 8));
 FUNC_0(0x1ff, VAR_4);
}
