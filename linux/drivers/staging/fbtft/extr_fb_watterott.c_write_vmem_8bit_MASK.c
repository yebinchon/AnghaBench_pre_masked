
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_8__ {scalar_t__* buf; } ;
struct TYPE_7__ {int (* write ) (struct fbtft_par*,scalar_t__*,int) ;} ;
struct fbtft_par {TYPE_5__* info; TYPE_3__ txbuf; TYPE_2__ fbtftops; } ;
typedef scalar_t__ __be16 ;
struct TYPE_9__ {int xres; } ;
struct TYPE_6__ {size_t line_length; } ;
struct TYPE_10__ {TYPE_4__ var; TYPE_1__ fix; scalar_t__ screen_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct fbtft_par*,scalar_t__*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_2, size_t VAR_3, size_t VAR_4)
{
 unsigned int VAR_5, VAR_6;
 u16 *VAR_7 = (u16 *)(VAR_2->info->screen_buffer + VAR_3);
 __be16 *VAR_8 = VAR_2->txbuf.buf + 1;
 u8 *VAR_9 = VAR_2->txbuf.buf + 10;
 int VAR_10, VAR_11;
 int VAR_12 = 0;

 VAR_5 = VAR_3 / VAR_2->info->fix.line_length;
 VAR_6 = VAR_5 + (VAR_4 / VAR_2->info->fix.line_length) - 1;


 ((u8 *)VAR_2->txbuf.buf)[0] = VAR_0;
 VAR_8[0] = 0;
 VAR_8[2] = FUNC_0(VAR_2->info->var.xres);
 VAR_8[3] = FUNC_0(1);
 ((u8 *)VAR_2->txbuf.buf)[9] = VAR_1;

 for (VAR_10 = VAR_5; VAR_10 <= VAR_6; VAR_10++) {
  VAR_8[1] = FUNC_0(VAR_10);
  for (VAR_11 = 0; VAR_11 < VAR_2->info->var.xres; VAR_11++) {
   VAR_9[VAR_11] = FUNC_1(*VAR_7);
   VAR_7++;
  }
  VAR_12 = VAR_2->fbtftops.write(VAR_2,
   VAR_2->txbuf.buf, 10 + VAR_2->info->var.xres);
  if (VAR_12 < 0)
   return VAR_12;
  FUNC_3(700);
 }

 return 0;
}
