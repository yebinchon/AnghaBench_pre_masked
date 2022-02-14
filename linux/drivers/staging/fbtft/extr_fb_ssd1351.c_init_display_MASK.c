
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* reset ) (struct fbtft_par*) ;int register_backlight; } ;
struct fbtft_par {TYPE_3__ fbtftops; TYPE_2__* pdata; } ;
struct TYPE_4__ {scalar_t__ backlight; } ;
struct TYPE_5__ {TYPE_1__ display; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fbtft_par*) ;
 int FUNC_1 (struct fbtft_par*,int,...) ;

__attribute__((used)) static int FUNC_2(struct fbtft_par *VAR_2)
{
 if (VAR_2->pdata &&
     VAR_2->pdata->display.backlight == VAR_0) {

  VAR_2->fbtftops.register_backlight = VAR_1;
 }

 VAR_2->fbtftops.reset(VAR_2);

 FUNC_1(VAR_2, 0xfd, 0x12);
 FUNC_1(VAR_2, 0xfd, 0xb1);
 FUNC_1(VAR_2, 0xae);
 FUNC_1(VAR_2, 0xb3, 0xf1);
 FUNC_1(VAR_2, 0xca, 0x7f);
 FUNC_1(VAR_2, 0x15, 0x00, 0x7f);
 FUNC_1(VAR_2, 0x75, 0x00, 0x7f);
 FUNC_1(VAR_2, 0xa1, 0x00);
 FUNC_1(VAR_2, 0xa2, 0x00);
 FUNC_1(VAR_2, 0xb5, 0x00);
 FUNC_1(VAR_2, 0xab, 0x01);
 FUNC_1(VAR_2, 0xb1, 0x32);
 FUNC_1(VAR_2, 0xb4, 0xa0, 0xb5, 0x55);
 FUNC_1(VAR_2, 0xbb, 0x17);
 FUNC_1(VAR_2, 0xbe, 0x05);
 FUNC_1(VAR_2, 0xc1, 0xc8, 0x80, 0xc8);
 FUNC_1(VAR_2, 0xc7, 0x0f);
 FUNC_1(VAR_2, 0xb6, 0x01);
 FUNC_1(VAR_2, 0xa6);
 FUNC_1(VAR_2, 0xaf);

 return 0;
}
