
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_caps {int ctrl; int wnd_color; } ;
struct TYPE_4__ {scalar_t__ te_connected; TYPE_1__* int_ctrl; } ;
struct TYPE_3__ {int (* get_caps ) (int,struct omapfb_caps*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int,struct omapfb_caps*) ;

__attribute__((used)) static void FUNC_1(int VAR_6, struct omapfb_caps *VAR_7)
{
 VAR_5->get_caps(VAR_6, VAR_7);
 VAR_7->ctrl |= VAR_0 |
        VAR_2;
 if (VAR_5)
  VAR_7->ctrl |= VAR_1;
 VAR_7->wnd_color |= (1 << VAR_3) |
      (1 << VAR_4);
}
