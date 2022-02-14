
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fbtft_par {TYPE_2__* info; } ;
struct TYPE_3__ {int rotate; } ;
struct TYPE_4__ {TYPE_1__ var; } ;


 int VAR_0 ;
 int FUNC_0 (struct fbtft_par*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fbtft_par *VAR_1)
{
 u8 VAR_2;


 switch (VAR_1->info->var.rotate) {
 case 90:
  VAR_2 = 27;
  break;
 case 180:
  VAR_2 = 18;
  break;
 case 270:
  VAR_2 = 9;
  break;
 default:
  VAR_2 = 0;
 }
 FUNC_0(VAR_1, VAR_0, VAR_2);

 return 0;
}
