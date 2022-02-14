
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct au1200fb_device {int plane; TYPE_3__* fb_info; } ;
struct TYPE_12__ {int winenable; TYPE_1__* window; } ;
struct TYPE_11__ {TYPE_4__* w; } ;
struct TYPE_10__ {int mode_winctrl1; int mode_winenable; int ypos; int xpos; } ;
struct TYPE_8__ {int line_length; } ;
struct TYPE_9__ {TYPE_2__ fix; } ;
struct TYPE_7__ {int winctrl1; int winctrl2; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct au1200fb_device*,int,int ,int ) ;
 TYPE_6__* VAR_4 ;
 TYPE_5__* VAR_5 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct au1200fb_device *VAR_6)
{
 int VAR_7 = VAR_6->plane;

 VAR_4->window[VAR_7].winctrl1 = ( 0
  | FUNC_0(VAR_7)
  | VAR_5->w[VAR_7].mode_winctrl1
  ) ;

 FUNC_2(VAR_6, VAR_7, VAR_5->w[VAR_7].xpos, VAR_5->w[VAR_7].ypos);

 VAR_4->window[VAR_7].winctrl2 = ( 0
  | VAR_0
  | VAR_1
  | FUNC_1(VAR_6->fb_info->fix.line_length)
  | VAR_2
  | VAR_3
  ) ;
 VAR_4->winenable |= VAR_5->w[VAR_7].mode_winenable;
 FUNC_3();
}
