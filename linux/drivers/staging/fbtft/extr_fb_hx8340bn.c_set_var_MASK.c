
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fbtft_par*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fbtft_par *VAR_4)
{





 switch (VAR_4->info->var.rotate) {
 case 0:
  FUNC_0(VAR_4, VAR_0, VAR_4->bgr << 3);
  break;
 case 270:
  FUNC_0(VAR_4, VAR_0,
     FUNC_0(6) | FUNC_0(5) | (VAR_4->bgr << 3));
  break;
 case 180:
  FUNC_0(VAR_4, VAR_0,
     FUNC_0(6) | FUNC_0(7) | (VAR_4->bgr << 3));
  break;
 case 90:
  FUNC_0(VAR_4, VAR_0,
     FUNC_0(7) | FUNC_0(5) | (VAR_4->bgr << 3));
  break;
 }

 return 0;
}
