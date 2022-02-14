
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fbtft_par {TYPE_2__* info; } ;
struct TYPE_3__ {int xres; } ;
struct TYPE_4__ {TYPE_1__ var; } ;



__attribute__((used)) static void
FUNC_0(struct fbtft_par *VAR_0, u8 *VAR_1, signed short *VAR_2,
        int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = VAR_3; VAR_6 < VAR_4; ++VAR_6) {
  u8 VAR_8 = 0;

  for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
   if (VAR_2[(VAR_5 * 8 + VAR_7) * VAR_0->info->var.xres + VAR_6])
    VAR_8 |= 1 << VAR_7;



  *VAR_1++ = ~VAR_8;

 }
}
