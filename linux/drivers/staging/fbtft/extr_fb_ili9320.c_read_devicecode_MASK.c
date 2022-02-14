
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* read ) (struct fbtft_par*,int*,int) ;} ;
struct fbtft_par {TYPE_1__ fbtftops; } ;


 int FUNC_0 (struct fbtft_par*,int*,int) ;
 int FUNC_1 (struct fbtft_par*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct fbtft_par *VAR_0)
{
 int VAR_1;
 u8 VAR_2[8] = {0, };

 FUNC_1(VAR_0, 0x0000);
 VAR_1 = VAR_0->fbtftops.read(VAR_0, VAR_2, 4);
 return (VAR_2[2] << 8) | VAR_2[3];
}
