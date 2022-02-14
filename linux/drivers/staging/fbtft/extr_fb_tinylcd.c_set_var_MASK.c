
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
 int FUNC_0 (struct fbtft_par*,int,int,...) ;

__attribute__((used)) static int FUNC_1(struct fbtft_par *VAR_1)
{
 switch (VAR_1->info->var.rotate) {
 case 270:
  FUNC_0(VAR_1, 0xB6, 0x00, 0x02, 0x3B);
  FUNC_0(VAR_1, VAR_0, 0x28);
  break;
 case 180:
  FUNC_0(VAR_1, 0xB6, 0x00, 0x22, 0x3B);
  FUNC_0(VAR_1, VAR_0, 0x58);
  break;
 case 90:
  FUNC_0(VAR_1, 0xB6, 0x00, 0x22, 0x3B);
  FUNC_0(VAR_1, VAR_0, 0x38);
  break;
 default:
  FUNC_0(VAR_1, 0xB6, 0x00, 0x22, 0x3B);
  FUNC_0(VAR_1, VAR_0, 0x08);
  break;
 }

 return 0;
}
