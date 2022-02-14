
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fbtft_par {int bgr; TYPE_2__* info; } ;
struct TYPE_3__ {int rotate; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int VAR_0 ;
 int FUNC_0 (struct fbtft_par*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fbtft_par *VAR_1)
{
 switch (VAR_1->info->var.rotate) {
 case 0:
  FUNC_0(VAR_1, VAR_0,
     0x80 | (VAR_1->bgr << 3));
  break;
 case 90:
  FUNC_0(VAR_1, VAR_0,
     0x20 | (VAR_1->bgr << 3));
  break;
 case 180:
  FUNC_0(VAR_1, VAR_0,
     0x40 | (VAR_1->bgr << 3));
  break;
 case 270:
  FUNC_0(VAR_1, VAR_0,
     0xE0 | (VAR_1->bgr << 3));
  break;
 default:
  break;
 }

 return 0;
}
