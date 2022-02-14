
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
typedef int u16 ;
struct TYPE_8__ {int (* write ) (struct fbtft_par*,int*,size_t) ;} ;
struct TYPE_6__ {int* buf; } ;
struct fbtft_par {int CS1; int CS0; TYPE_4__* info; TYPE_3__ fbtftops; int RS; TYPE_1__ txbuf; } ;
struct TYPE_10__ {int ys_page; int ye_page; int xs; int xe; } ;
struct TYPE_7__ {int xres; int yres; } ;
struct TYPE_9__ {int device; TYPE_2__ var; scalar_t__ screen_buffer; } ;


 int FUNC_0 (int) ;
 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 scalar_t__ FUNC_1 (short) ;
 TYPE_5__ VAR_4 ;
 int FUNC_2 (struct fbtft_par*,int*,short*,int,int,int) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__* VAR_5 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int,int,int,short*,short,short) ;
 int FUNC_6 (short*) ;
 short* FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct fbtft_par*,int*,size_t) ;
 int FUNC_9 (struct fbtft_par*,int*,size_t) ;
 int FUNC_10 (struct fbtft_par*,int,int) ;

__attribute__((used)) static int FUNC_11(struct fbtft_par *VAR_6, size_t VAR_7, size_t VAR_8)
{
 u16 *VAR_9 = (u16 *)VAR_6->info->screen_buffer;
 u8 *VAR_10 = VAR_6->txbuf.buf;
 int VAR_11, VAR_12;
 int VAR_13 = 0;


 signed short *VAR_14 = FUNC_7(VAR_6->info->var.xres *
  VAR_6->info->var.yres, sizeof(signed short), VAR_2);

 if (!VAR_14)
  return -VAR_1;


 for (VAR_11 = 0; VAR_11 < VAR_6->info->var.xres; ++VAR_11)
  for (VAR_12 = 0; VAR_12 < VAR_6->info->var.yres; ++VAR_12) {
   u16 VAR_15 = VAR_9[VAR_12 * VAR_6->info->var.xres + VAR_11];
   u16 VAR_16 = VAR_15 & 0x1f;
   u16 VAR_17 = (VAR_15 & (0x3f << 5)) >> 5;
   u16 VAR_18 = (VAR_15 & (0x1f << (5 + 6))) >> (5 + 6);

   VAR_15 = (299 * VAR_18 + 587 * VAR_17 + 114 * VAR_16) / 200;
   if (VAR_15 > 255)
    VAR_15 = 255;


   VAR_14[VAR_12 * VAR_6->info->var.xres + VAR_11] =
    (signed short)VAR_5[VAR_15];
  }


 for (VAR_11 = 0; VAR_11 < VAR_6->info->var.xres; ++VAR_11)
  for (VAR_12 = 0; VAR_12 < VAR_6->info->var.yres; ++VAR_12) {
   signed short VAR_19 =
    VAR_14[VAR_12 * VAR_6->info->var.xres + VAR_11];
   signed short VAR_20 = VAR_19 - VAR_0;
   signed short VAR_21 = VAR_19 - VAR_3;
   signed short VAR_22;


   if (FUNC_1(VAR_20) >= FUNC_1(VAR_21)) {

    VAR_22 = VAR_21;
    VAR_19 = 0xff;
   } else {

    VAR_22 = VAR_20;
    VAR_19 = 0;
   }

   VAR_22 /= 8;

   FUNC_5(VAR_6->info->var.xres,
       VAR_6->info->var.yres,
       VAR_11, VAR_12, VAR_14,
       VAR_19, VAR_22);
  }


 for (VAR_12 = VAR_4.ys_page; VAR_12 <= VAR_4.ye_page; ++VAR_12) {

  if (VAR_4.xs < VAR_6->info->var.xres / 2) {
   FUNC_2(VAR_6, VAR_10, VAR_14,
           VAR_4.xs,
           VAR_6->info->var.xres / 2, VAR_12);

   VAR_8 = VAR_6->info->var.xres / 2 - VAR_4.xs;




   FUNC_10(VAR_6, 0x00, FUNC_0(6) | (u8)VAR_4.xs);
   FUNC_10(VAR_6, 0x00, (0x17 << 3) | (u8)VAR_12);


   FUNC_4(VAR_6->RS, 1);
   VAR_13 = VAR_6->fbtftops.write(VAR_6, VAR_10, VAR_8);
   if (VAR_13 < 0)
    FUNC_3(VAR_6->info->device,
     "write failed and returned: %d\n",
     VAR_13);
  }

  if (VAR_4.xe >= VAR_6->info->var.xres / 2) {
   FUNC_2(VAR_6, VAR_10,
           VAR_14,
           VAR_6->info->var.xres / 2,
           VAR_4.xe + 1, VAR_12);

   VAR_8 = VAR_4.xe + 1 - VAR_6->info->var.xres / 2;




   FUNC_10(VAR_6, 0x01, FUNC_0(6));
   FUNC_10(VAR_6, 0x01, (0x17 << 3) | (u8)VAR_12);


   FUNC_4(VAR_6->RS, 1);
   VAR_6->fbtftops.write(VAR_6, VAR_10, VAR_8);
   if (VAR_13 < 0)
    FUNC_3(VAR_6->info->device,
     "write failed and returned: %d\n",
     VAR_13);
  }
 }
 FUNC_6(VAR_14);

 FUNC_4(VAR_6->CS0, 1);
 FUNC_4(VAR_6->CS1, 1);

 return VAR_13;
}
