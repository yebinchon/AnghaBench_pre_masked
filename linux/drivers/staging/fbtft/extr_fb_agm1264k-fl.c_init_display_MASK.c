
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_1__ fbtftops; } ;


 int FUNC_0 (struct fbtft_par*) ;
 int FUNC_1 (struct fbtft_par*,int,int) ;

__attribute__((used)) static int FUNC_2(struct fbtft_par *VAR_0)
{
 u8 VAR_1;

 VAR_0->fbtftops.reset(VAR_0);

 for (VAR_1 = 0; VAR_1 < 2; ++VAR_1) {
  FUNC_1(VAR_0, VAR_1, 0x3f);
  FUNC_1(VAR_0, VAR_1, 0x40);
  FUNC_1(VAR_0, VAR_1, 0xb0);
  FUNC_1(VAR_0, VAR_1, 0xc0);
 }

 return 0;
}
