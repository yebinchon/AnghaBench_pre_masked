
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fbtft_par {TYPE_2__* info; } ;
struct TYPE_3__ {int rotate; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fbtft_par*,int ,...) ;

__attribute__((used)) static void FUNC_1(struct fbtft_par *VAR_4, int VAR_5, int VAR_6,
    int VAR_7, int VAR_8)
{
 switch (VAR_4->info->var.rotate) {
 case 0:
  FUNC_0(VAR_4, VAR_0,
     VAR_5 >> 8, VAR_5 & 0xff, VAR_7 >> 8, VAR_7 & 0xff);
  FUNC_0(VAR_4, VAR_1,
     (VAR_6 + VAR_3) >> 8, (VAR_6 + VAR_3) & 0xff,
     (VAR_8 + VAR_3) >> 8, (VAR_8 + VAR_3) & 0xff);
  break;
 case 90:
  FUNC_0(VAR_4, VAR_0,
     (VAR_5 + VAR_3) >> 8, (VAR_5 + VAR_3) & 0xff,
     (VAR_7 + VAR_3) >> 8, (VAR_7 + VAR_3) & 0xff);
  FUNC_0(VAR_4, VAR_1,
     VAR_6 >> 8, VAR_6 & 0xff, VAR_8 >> 8, VAR_8 & 0xff);
  break;
 case 180:
 case 270:
  FUNC_0(VAR_4, VAR_0,
     VAR_5 >> 8, VAR_5 & 0xff, VAR_7 >> 8, VAR_7 & 0xff);
  FUNC_0(VAR_4, VAR_1,
     VAR_6 >> 8, VAR_6 & 0xff, VAR_8 >> 8, VAR_8 & 0xff);
  break;
 default:

  VAR_4->info->var.rotate = 0;
 }
 FUNC_0(VAR_4, VAR_2);
}
