
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int * buf; } ;
struct fbtft_par {TYPE_3__ txbuf; TYPE_2__* info; } ;
struct TYPE_4__ {int xres; } ;
struct TYPE_5__ {TYPE_1__ var; scalar_t__ screen_buffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (struct fbtft_par*,int *,int,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct fbtft_par*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct fbtft_par *VAR_0, size_t VAR_1, size_t VAR_2)
{
 u16 *VAR_3 = (u16 *)VAR_0->info->screen_buffer;
 u32 VAR_4 = VAR_0->info->var.xres;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u8 *VAR_11 = VAR_0->txbuf.buf;


 VAR_6 = VAR_1 / (8 * 2 * VAR_4);
 VAR_7 = FUNC_1(VAR_1 + VAR_2, 8 * 2 * VAR_4);

 for (VAR_5 = VAR_6; VAR_5 < VAR_7; VAR_5++) {

  FUNC_4(VAR_0, 0xb0 | VAR_5, 0x00 | 2, 0x10 | 0);

  FUNC_3(VAR_11, 0, VAR_4);
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
   for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
    if (VAR_3[(VAR_5 * 8 + VAR_9) * VAR_4 + VAR_8])
     VAR_11[VAR_8] |= FUNC_0(VAR_9);


  VAR_10 = FUNC_2(VAR_0, VAR_11, VAR_4, 1);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
