
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct broadsheetfb_par {int io_lock; TYPE_3__* board; TYPE_2__* info; } ;
struct TYPE_6__ {int (* wait_for_rdy ) (struct broadsheetfb_par*) ;} ;
struct TYPE_4__ {int xres; } ;
struct TYPE_5__ {TYPE_1__ var; scalar_t__ screen_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct broadsheetfb_par*,int,int*) ;
 int FUNC_1 (struct broadsheetfb_par*,int ,int,int*) ;
 int FUNC_2 (struct broadsheetfb_par*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct broadsheetfb_par*) ;

__attribute__((used)) static void FUNC_7(struct broadsheetfb_par *VAR_6,
      u16 VAR_7, u16 VAR_8)
{
 u16 VAR_9[5];
 unsigned char *VAR_10 = (unsigned char *)VAR_6->info->screen_base;

 FUNC_4(&(VAR_6->io_lock));

 VAR_7 &= 0xFFFC;

 VAR_8 |= 0x0003;

 VAR_9[0] = 0x3 << 4;
 VAR_9[1] = 0;
 VAR_9[2] = VAR_7;
 VAR_9[3] = FUNC_3(VAR_6->info->var.xres);
 VAR_9[4] = VAR_8;
 FUNC_1(VAR_6, VAR_0, 5, VAR_9);

 VAR_9[0] = 0x154;
 FUNC_1(VAR_6, VAR_5, 1, VAR_9);

 VAR_10 += VAR_7 * VAR_6->info->var.xres;
 FUNC_0(VAR_6, ((1 + VAR_8 - VAR_7) * VAR_6->info->var.xres)/2,
    (u16 *) VAR_10);

 FUNC_2(VAR_6, VAR_1);

 VAR_9[0] = 0x4300;
 FUNC_1(VAR_6, VAR_2, 1, VAR_9);

 FUNC_2(VAR_6, VAR_4);

 FUNC_2(VAR_6, VAR_3);

 VAR_6->board->wait_for_rdy(VAR_6);
 FUNC_5(&(VAR_6->io_lock));

}
