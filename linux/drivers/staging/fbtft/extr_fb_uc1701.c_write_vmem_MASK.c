
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
struct TYPE_7__ {int dc; } ;
struct TYPE_6__ {int* buf; } ;
struct TYPE_5__ {int (* write ) (struct fbtft_par*,int*,int) ;} ;
struct fbtft_par {TYPE_4__* info; TYPE_3__ gpio; TYPE_2__ txbuf; TYPE_1__ fbtftops; } ;
struct TYPE_8__ {int device; scalar_t__ screen_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct fbtft_par*,int*,int) ;
 int FUNC_3 (struct fbtft_par*,int) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_4, size_t VAR_5, size_t VAR_6)
{
 u16 *VAR_7 = (u16 *)VAR_4->info->screen_buffer;
 u8 *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_8 = VAR_4->txbuf.buf;
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
   *VAR_8 = 0x00;
   for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
    *VAR_8 |= (VAR_7[((VAR_10 * 8 * VAR_3) +
       (VAR_11 * VAR_3)) + VAR_9] ?
      1 : 0) << VAR_11;
   VAR_8++;
  }

  FUNC_3(VAR_4, VAR_1 | (u8)VAR_10);
  FUNC_3(VAR_4, 0x00);
  FUNC_3(VAR_4, VAR_0);
  FUNC_1(VAR_4->gpio.dc, 1);
  VAR_12 = VAR_4->fbtftops.write(VAR_4, VAR_4->txbuf.buf, VAR_3);
  FUNC_1(VAR_4->gpio.dc, 0);
 }

 if (VAR_12 < 0)
  FUNC_0(VAR_4->info->device, "write failed and returned: %d\n",
   VAR_12);

 return VAR_12;
}
