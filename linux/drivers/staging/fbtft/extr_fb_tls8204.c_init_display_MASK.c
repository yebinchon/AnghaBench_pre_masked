
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_1__ fbtftops; } ;


 int VAR_0 ;
 int FUNC_0 (struct fbtft_par*) ;
 int FUNC_1 (struct fbtft_par*,int) ;

__attribute__((used)) static int FUNC_2(struct fbtft_par *VAR_1)
{
 VAR_1->fbtftops.reset(VAR_1);


 FUNC_1(VAR_1, 0x21);







 FUNC_1(VAR_1, 0x10 | (VAR_0 & 0x7));
 FUNC_1(VAR_1, 0x04 | (64 >> 6));
 FUNC_1(VAR_1, 0x40 | (64 & 0x3F));


 FUNC_1(VAR_1, 0x20);


 FUNC_1(VAR_1, 0x08 | 4);






 return 0;
}
