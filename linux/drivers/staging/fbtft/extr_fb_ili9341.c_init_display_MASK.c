
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fbtft_par*) ;
 int FUNC_2 (struct fbtft_par*,int,...) ;

__attribute__((used)) static int FUNC_3(struct fbtft_par *VAR_6)
{
 VAR_6->fbtftops.reset(VAR_6);


 FUNC_2(VAR_6, VAR_5);
 FUNC_0(5);
 FUNC_2(VAR_6, VAR_1);

 FUNC_2(VAR_6, 0xCF, 0x00, 0x83, 0x30);
 FUNC_2(VAR_6, 0xED, 0x64, 0x03, 0x12, 0x81);
 FUNC_2(VAR_6, 0xE8, 0x85, 0x01, 0x79);
 FUNC_2(VAR_6, 0xCB, 0x39, 0X2C, 0x00, 0x34, 0x02);
 FUNC_2(VAR_6, 0xF7, 0x20);
 FUNC_2(VAR_6, 0xEA, 0x00, 0x00);

 FUNC_2(VAR_6, 0xC0, 0x26);
 FUNC_2(VAR_6, 0xC1, 0x11);

 FUNC_2(VAR_6, 0xC5, 0x35, 0x3E);
 FUNC_2(VAR_6, 0xC7, 0xBE);

 FUNC_2(VAR_6, VAR_4, 0x55);

 FUNC_2(VAR_6, 0xB1, 0x00, 0x1B);


 FUNC_2(VAR_6, VAR_3, 0x01);

 FUNC_2(VAR_6, 0xB7, 0x07);
 FUNC_2(VAR_6, 0xB6, 0x0A, 0x82, 0x27, 0x00);
 FUNC_2(VAR_6, VAR_0);
 FUNC_0(100);
 FUNC_2(VAR_6, VAR_2);
 FUNC_0(20);

 return 0;
}
