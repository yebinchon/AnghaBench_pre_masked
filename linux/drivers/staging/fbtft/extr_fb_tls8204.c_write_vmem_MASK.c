
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_7__ {int* buf; } ;
struct TYPE_6__ {int (* write ) (struct fbtft_par*,int*,int) ;} ;
struct TYPE_5__ {int dc; } ;
struct fbtft_par {TYPE_4__* info; TYPE_3__ txbuf; TYPE_2__ fbtftops; TYPE_1__ gpio; } ;
struct TYPE_8__ {int device; scalar_t__ screen_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct fbtft_par*,int*,int) ;
 int FUNC_3 (struct fbtft_par*,int) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_2, size_t VAR_3, size_t VAR_4)
{
 u16 *VAR_5 = (u16 *)VAR_2->info->screen_buffer;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0 / 8; VAR_7++) {
  u8 *VAR_10 = VAR_2->txbuf.buf;



  FUNC_1(VAR_2->gpio.dc, 0);
  FUNC_3(VAR_2, 0x80 | 0);
  FUNC_3(VAR_2, 0x40 | VAR_7);

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   u8 VAR_11 = 0;

   for (VAR_8 = 0; VAR_8 < 8 * VAR_1; VAR_8 += VAR_1) {
    VAR_11 >>= 1;
    if (VAR_5[(VAR_7 * 8 * VAR_1) + VAR_8 + VAR_6])
     VAR_11 |= 0x80;
   }
   *VAR_10++ = VAR_11;
  }

  FUNC_1(VAR_2->gpio.dc, 1);
  VAR_9 = VAR_2->fbtftops.write(VAR_2, VAR_2->txbuf.buf, VAR_1);
  if (VAR_9 < 0) {
   FUNC_0(VAR_2->info->device,
    "write failed and returned: %d\n", VAR_9);
   break;
  }
 }

 return VAR_9;
}
