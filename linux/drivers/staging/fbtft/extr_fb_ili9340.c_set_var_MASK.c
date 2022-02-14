
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
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
 u8 VAR_5;

 switch (VAR_4->info->var.rotate) {
 case 270:
  VAR_5 = VAR_0;
  break;
 case 180:
  VAR_5 = VAR_2;
  break;
 case 90:
  VAR_5 = VAR_0 | VAR_2 | VAR_1;
  break;
 default:
  VAR_5 = VAR_1;
  break;
 }

 FUNC_0(VAR_4, VAR_3, VAR_5 | (VAR_4->bgr << 3));

 return 0;
}
