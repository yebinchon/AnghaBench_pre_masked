
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fbtft_par {TYPE_2__* info; } ;
struct TYPE_3__ {int rotate; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int FUNC_0 (struct fbtft_par*,int) ;

__attribute__((used)) static void FUNC_1(struct fbtft_par *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 switch (VAR_0->info->var.rotate) {
 case 90:
 case 270:

  FUNC_0(VAR_0, VAR_2 & 0x0F);
  FUNC_0(VAR_0, 0x10 | (VAR_2 >> 4));


  FUNC_0(VAR_0, 0x60 | ((VAR_1 >> 1) & 0x0F));
  FUNC_0(VAR_0, 0x70 | (VAR_1 >> 5));
  break;
 default:

  FUNC_0(VAR_0, VAR_1 & 0x0F);
  FUNC_0(VAR_0, 0x10 | (VAR_1 >> 4));


  FUNC_0(VAR_0, 0x60 | ((VAR_2 >> 1) & 0x0F));
  FUNC_0(VAR_0, 0x70 | (VAR_2 >> 5));
  break;
 }
}
