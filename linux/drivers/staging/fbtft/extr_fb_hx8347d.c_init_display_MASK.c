
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {int bgr; TYPE_1__ fbtftops; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fbtft_par*) ;
 int FUNC_2 (struct fbtft_par*,int,int) ;

__attribute__((used)) static int FUNC_3(struct fbtft_par *VAR_0)
{
 VAR_0->fbtftops.reset(VAR_0);


 FUNC_2(VAR_0, 0xEA, 0x00);
 FUNC_2(VAR_0, 0xEB, 0x20);
 FUNC_2(VAR_0, 0xEC, 0x0C);
 FUNC_2(VAR_0, 0xED, 0xC4);
 FUNC_2(VAR_0, 0xE8, 0x40);
 FUNC_2(VAR_0, 0xE9, 0x38);
 FUNC_2(VAR_0, 0xF1, 0x01);
 FUNC_2(VAR_0, 0xF2, 0x10);
 FUNC_2(VAR_0, 0x27, 0xA3);


 FUNC_2(VAR_0, 0x1B, 0x1B);
 FUNC_2(VAR_0, 0x1A, 0x01);
 FUNC_2(VAR_0, 0x24, 0x2F);
 FUNC_2(VAR_0, 0x25, 0x57);


 FUNC_2(VAR_0, 0x23, 0x8D);


 FUNC_2(VAR_0, 0x18, 0x36);
 FUNC_2(VAR_0, 0x19, 0x01);
 FUNC_2(VAR_0, 0x01, 0x00);
 FUNC_2(VAR_0, 0x1F, 0x88);
 FUNC_0(5);
 FUNC_2(VAR_0, 0x1F, 0x80);
 FUNC_0(5);
 FUNC_2(VAR_0, 0x1F, 0x90);
 FUNC_0(5);
 FUNC_2(VAR_0, 0x1F, 0xD0);
 FUNC_0(5);


 FUNC_2(VAR_0, 0x17, 0x05);


 FUNC_2(VAR_0, 0x36, 0x00);


 FUNC_2(VAR_0, 0x28, 0x38);
 FUNC_0(40);
 FUNC_2(VAR_0, 0x28, 0x3C);


 FUNC_2(VAR_0, 0x16, 0x60 | (VAR_0->bgr << 3));

 return 0;
}
