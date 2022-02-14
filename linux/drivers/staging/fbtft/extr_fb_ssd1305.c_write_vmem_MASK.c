
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int* buf; } ;
struct TYPE_7__ {int (* write ) (struct fbtft_par*,int*,int) ;} ;
struct TYPE_6__ {int dc; } ;
struct fbtft_par {TYPE_5__* info; TYPE_3__ txbuf; TYPE_2__ fbtftops; TYPE_1__ gpio; } ;
struct TYPE_9__ {int xres; int yres; } ;
struct TYPE_10__ {int device; TYPE_4__ var; scalar_t__ screen_buffer; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct fbtft_par*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct fbtft_par *VAR_0, size_t VAR_1, size_t VAR_2)
{
 u16 *VAR_3 = (u16 *)VAR_0->info->screen_buffer;
 u8 *VAR_4 = VAR_0->txbuf.buf;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_0->info->var.xres; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_0->info->var.yres / 8; VAR_6++) {
   *VAR_4 = 0x00;
   for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
    *VAR_4 |= (VAR_3[(VAR_6 * 8 + VAR_7) *
      VAR_0->info->var.xres + VAR_5] ?
      1 : 0) << VAR_7;
   VAR_4++;
  }
 }


 FUNC_1(VAR_0->gpio.dc, 1);
 VAR_8 = VAR_0->fbtftops.write(VAR_0, VAR_0->txbuf.buf,
      VAR_0->info->var.xres * VAR_0->info->var.yres /
      8);
 if (VAR_8 < 0)
  FUNC_0(VAR_0->info->device, "write failed and returned: %d\n",
   VAR_8);
 return VAR_8;
}
