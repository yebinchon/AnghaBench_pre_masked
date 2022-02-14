
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fbtft_par {TYPE_2__* info; scalar_t__ bgr; } ;
struct TYPE_3__ {int rotate; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fbtft_par*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fbtft_par *VAR_6)
{
 u8 VAR_7 = 0;

 if (VAR_6->bgr)
  VAR_7 |= VAR_1;
 switch (VAR_6->info->var.rotate) {
 case 0:
  break;
 case 90:
  VAR_7 |= (VAR_2 | VAR_4);
  break;
 case 180:
  VAR_7 |= (VAR_3 | VAR_4);
  break;
 case 270:
  VAR_7 |= (VAR_2 | VAR_3);
  break;
 default:
  return -VAR_0;
 }
 FUNC_0(VAR_6, VAR_5, VAR_7);
 return 0;
}
