
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fbtft_par {TYPE_2__* info; } ;
struct TYPE_3__ {int rotate; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int FUNC_0 (struct fbtft_par*,int,int) ;

__attribute__((used)) static int FUNC_1(struct fbtft_par *VAR_0)
{
 switch (VAR_0->info->var.rotate) {

 case 0:
  FUNC_0(VAR_0, 0x01, 0x0000);
  FUNC_0(VAR_0, 0x05, 0x0000);
  break;
 case 180:
  FUNC_0(VAR_0, 0x01, 0x00C0);
  FUNC_0(VAR_0, 0x05, 0x0000);
  break;
 case 270:
  FUNC_0(VAR_0, 0x01, 0x0080);
  FUNC_0(VAR_0, 0x05, 0x0001);
  break;
 case 90:
  FUNC_0(VAR_0, 0x01, 0x0040);
  FUNC_0(VAR_0, 0x05, 0x0001);
  break;
 }

 return 0;
}
