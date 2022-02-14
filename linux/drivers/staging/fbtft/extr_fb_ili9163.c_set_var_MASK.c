
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fbtft_par {scalar_t__ bgr; TYPE_2__* info; } ;
struct TYPE_3__ {int rotate; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fbtft_par*,int ,...) ;

__attribute__((used)) static int FUNC_2(struct fbtft_par *VAR_2)
{
 u8 VAR_3 = 0;

 switch (VAR_2->info->var.rotate) {
 case 0:
  VAR_3 = 0x08;
  break;
 case 180:
  VAR_3 = 0xC8;
  break;
 case 270:
  VAR_3 = 0xA8;
  break;
 case 90:
  VAR_3 = 0x68;
  break;
 }


 if (VAR_2->bgr)
  VAR_3 |= FUNC_0(2);
 FUNC_1(VAR_2, VAR_0, VAR_3);
 FUNC_1(VAR_2, VAR_1);
 return 0;
}
