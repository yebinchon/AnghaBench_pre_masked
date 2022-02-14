
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct broadsheetfb_par {size_t panel_index; int io_lock; TYPE_2__* board; TYPE_1__* info; } ;
struct TYPE_6__ {int w; int h; } ;
struct TYPE_5__ {int (* wait_for_rdy ) (struct broadsheetfb_par*) ;} ;
struct TYPE_4__ {scalar_t__ screen_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct broadsheetfb_par*,int,int*) ;
 int FUNC_1 (struct broadsheetfb_par*,int ,int,int*) ;
 int FUNC_2 (struct broadsheetfb_par*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* VAR_6 ;
 int FUNC_5 (struct broadsheetfb_par*) ;

__attribute__((used)) static void FUNC_6(struct broadsheetfb_par *VAR_7)
{
 u16 VAR_8[5];

 FUNC_3(&(VAR_7->io_lock));
 VAR_8[0] = 0x3 << 4;
 FUNC_1(VAR_7, VAR_0, 1, VAR_8);

 VAR_8[0] = 0x154;
 FUNC_1(VAR_7, VAR_5, 1, VAR_8);
 FUNC_0(VAR_7, (VAR_6[VAR_7->panel_index].w *
     VAR_6[VAR_7->panel_index].h)/2,
     (u16 *) VAR_7->info->screen_base);

 FUNC_2(VAR_7, VAR_1);

 VAR_8[0] = 0x4300;
 FUNC_1(VAR_7, VAR_2, 1, VAR_8);

 FUNC_2(VAR_7, VAR_4);

 FUNC_2(VAR_7, VAR_3);

 VAR_7->board->wait_for_rdy(VAR_7);
 FUNC_4(&(VAR_7->io_lock));
}
