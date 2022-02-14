
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_1__ fbtftops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fbtft_par*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fbtft_par*,int,...) ;

__attribute__((used)) static int FUNC_3(struct fbtft_par *VAR_4)
{
 VAR_4->fbtftops.reset(VAR_4);

 FUNC_2(VAR_4, 0xB0, 0x80);
 FUNC_2(VAR_4, 0xC0, 0x0A, 0x0A);
 FUNC_2(VAR_4, 0xC1, 0x45, 0x07);
 FUNC_2(VAR_4, 0xC2, 0x33);
 FUNC_2(VAR_4, 0xC5, 0x00, 0x42, 0x80);
 FUNC_2(VAR_4, 0xB1, 0xD0, 0x11);
 FUNC_2(VAR_4, 0xB4, 0x02);
 FUNC_2(VAR_4, 0xB6, 0x00, 0x22, 0x3B);
 FUNC_2(VAR_4, 0xB7, 0x07);
 FUNC_2(VAR_4, VAR_1, 0x58);
 FUNC_2(VAR_4, 0xF0, 0x36, 0xA5, 0xD3);
 FUNC_2(VAR_4, 0xE5, 0x80);
 FUNC_2(VAR_4, 0xE5, 0x01);
 FUNC_2(VAR_4, 0xB3, 0x00);
 FUNC_2(VAR_4, 0xE5, 0x00);
 FUNC_2(VAR_4, 0xF0, 0x36, 0xA5, 0x53);
 FUNC_2(VAR_4, 0xE0, 0x00, 0x35, 0x33, 0x00, 0x00, 0x00,
         0x00, 0x35, 0x33, 0x00, 0x00, 0x00);
 FUNC_2(VAR_4, VAR_3, 0x55);
 FUNC_2(VAR_4, VAR_0);
 FUNC_1(250);
 FUNC_2(VAR_4, VAR_2);

 return 0;
}
