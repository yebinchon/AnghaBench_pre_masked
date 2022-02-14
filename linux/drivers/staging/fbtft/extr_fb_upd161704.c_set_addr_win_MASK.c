
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
 int FUNC_0 (struct fbtft_par*,int,...) ;

__attribute__((used)) static void FUNC_1(struct fbtft_par *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 switch (VAR_2->info->var.rotate) {


 case 0:
  FUNC_0(VAR_2, 0x0006, VAR_3);
  FUNC_0(VAR_2, 0x0007, VAR_4);
  break;
 case 180:
  FUNC_0(VAR_2, 0x0006, VAR_1 - 1 - VAR_3);
  FUNC_0(VAR_2, 0x0007, VAR_0 - 1 - VAR_4);
  break;
 case 270:
  FUNC_0(VAR_2, 0x0006, VAR_1 - 1 - VAR_4);
  FUNC_0(VAR_2, 0x0007, VAR_3);
  break;
 case 90:
  FUNC_0(VAR_2, 0x0006, VAR_4);
  FUNC_0(VAR_2, 0x0007, VAR_0 - 1 - VAR_3);
  break;
 }

 FUNC_0(VAR_2, 0x0e);
}
