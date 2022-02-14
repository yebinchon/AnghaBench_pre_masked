
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
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_9__ {int* buf; } ;
struct TYPE_8__ {int (* write ) (struct fbtft_par*,int*,int) ;} ;
struct TYPE_7__ {int dc; } ;
struct fbtft_par {TYPE_5__* info; TYPE_4__ txbuf; TYPE_3__ fbtftops; TYPE_2__ gpio; } ;
struct TYPE_6__ {int xres; int yres; } ;
struct TYPE_10__ {int device; TYPE_1__ var; scalar_t__ screen_buffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct fbtft_par*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_0, size_t VAR_1, size_t VAR_2)
{
 u16 *VAR_3 = (u16 *)VAR_0->info->screen_buffer;
 u32 VAR_4 = VAR_0->info->var.xres;
 u32 VAR_5 = VAR_0->info->var.yres;
 u8 *VAR_6 = VAR_0->txbuf.buf;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_5 / 8; VAR_8++) {
   *VAR_6 = 0x00;
   for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
    if (VAR_3[(VAR_8 * 8 + VAR_9) * VAR_4 + VAR_7])
     *VAR_6 |= FUNC_0(VAR_9);
   VAR_6++;
  }
 }


 FUNC_2(VAR_0->gpio.dc, 1);
 VAR_10 = VAR_0->fbtftops.write(VAR_0, VAR_0->txbuf.buf, VAR_4 * VAR_5 / 8);
 if (VAR_10 < 0)
  FUNC_1(VAR_0->info->device, "write failed and returned: %d\n",
   VAR_10);

 return VAR_10;
}
