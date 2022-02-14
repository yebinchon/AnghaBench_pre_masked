
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_13__ {int* buf; } ;
struct TYPE_12__ {int (* write ) (struct fbtft_par*,int*,size_t) ;} ;
struct TYPE_10__ {int dc; } ;
struct fbtft_par {TYPE_8__* info; TYPE_7__* pdata; TYPE_5__ txbuf; TYPE_4__ fbtftops; TYPE_2__ gpio; } ;
struct TYPE_11__ {int rotate; } ;
struct TYPE_9__ {int line_length; } ;
struct TYPE_16__ {int device; TYPE_3__ var; TYPE_1__ fix; scalar_t__ screen_buffer; } ;
struct TYPE_14__ {int buswidth; } ;
struct TYPE_15__ {TYPE_6__ display; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct fbtft_par*,int*,size_t) ;
 int FUNC_3 (struct fbtft_par*,int*,size_t) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_0, size_t VAR_1, size_t VAR_2)
{
 u8 *VAR_3 = (u8 *)(VAR_0->info->screen_buffer);
 u8 *VAR_4 = VAR_0->txbuf.buf;
 u16 *VAR_5 = VAR_0->txbuf.buf;
 int VAR_6 = VAR_0->info->fix.line_length;
 int VAR_7 = VAR_1 / VAR_6;
 int VAR_8 = (VAR_1 + VAR_2 - 1) / VAR_6;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0;

 switch (VAR_0->pdata->display.buswidth) {
 case 8:
  switch (VAR_0->info->var.rotate) {
  case 90:
  case 270:
   VAR_11 = VAR_7 * VAR_6;
   for (VAR_10 = VAR_7; VAR_10 <= VAR_8; VAR_10++) {
    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += 2) {
     *VAR_4 = VAR_3[VAR_11] >> 4;
     *VAR_4 |= VAR_3[VAR_11 + 1] & 0xF0;
     VAR_4++;
     VAR_11 += 2;
    }
   }
   break;
  default:

   VAR_7 &= 0xFE;
   VAR_11 = VAR_7 * VAR_6;
   for (VAR_10 = VAR_7; VAR_10 <= VAR_8; VAR_10 += 2) {
    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
     *VAR_4 = VAR_3[VAR_11] >> 4;
     *VAR_4 |= VAR_3[VAR_11 + VAR_6] & 0xF0;
     VAR_4++;
     VAR_11++;
    }
    VAR_11 += VAR_6;
   }
   break;
  }
  FUNC_1(VAR_0->gpio.dc, 1);


  VAR_12 = VAR_0->fbtftops.write(VAR_0, VAR_0->txbuf.buf, VAR_2 / 2);
  break;
 case 9:
  switch (VAR_0->info->var.rotate) {
  case 90:
  case 270:
   VAR_11 = VAR_7 * VAR_6;
   for (VAR_10 = VAR_7; VAR_10 <= VAR_8; VAR_10++) {
    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += 2) {
     *VAR_5 = 0x100;
     *VAR_5 |= VAR_3[VAR_11] >> 4;
     *VAR_5 |= VAR_3[VAR_11 + 1] & 0xF0;
     VAR_5++;
     VAR_11 += 2;
    }
   }
   break;
  default:

   VAR_7 &= 0xFE;
   VAR_11 = VAR_7 * VAR_6;
   for (VAR_10 = VAR_7; VAR_10 <= VAR_8; VAR_10 += 2) {
    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
     *VAR_5 = 0x100;
     *VAR_5 |= VAR_3[VAR_11] >> 4;
     *VAR_5 |= VAR_3[VAR_11 + VAR_6] & 0xF0;
     VAR_5++;
     VAR_11++;
    }
    VAR_11 += VAR_6;
   }
   break;
  }


  VAR_12 = VAR_0->fbtftops.write(VAR_0, VAR_0->txbuf.buf, VAR_2);
  break;
 default:
  FUNC_0(VAR_0->info->device, "unsupported buswidth %d\n",
   VAR_0->pdata->display.buswidth);
 }

 if (VAR_12 < 0)
  FUNC_0(VAR_0->info->device, "write failed and returned: %d\n",
   VAR_12);

 return VAR_12;
}
