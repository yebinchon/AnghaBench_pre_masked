
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct fbtft_par*) ;
 int FUNC_2 (struct fbtft_par*,int,...) ;

__attribute__((used)) static int FUNC_3(struct fbtft_par *VAR_3)
{
 VAR_3->fbtftops.reset(VAR_3);
 FUNC_2(VAR_3, 0xC1, 0xFF, 0x83, 0x40);







 FUNC_2(VAR_3, 0x11);
 FUNC_0(150);


 FUNC_2(VAR_3, 0xCA, 0x70, 0x00, 0xD9);







 FUNC_2(VAR_3, 0xB0, 0x01, 0x11);


 FUNC_2(VAR_3, 0xC9, 0x90, 0x49, 0x10, 0x28, 0x28, 0x10, 0x00, 0x06);
 FUNC_0(20);
 FUNC_2(VAR_3, 0xB5, 0x35, 0x20, 0x45);
 FUNC_2(VAR_3, 0xB4, 0x33, 0x25, 0x4C);
 FUNC_0(10);







 FUNC_2(VAR_3, VAR_2, VAR_0);






 FUNC_2(VAR_3, VAR_1);
 FUNC_0(10);

 return 0;
}
