
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int win ;
typedef int u16 ;
struct omapfb_update_window {int width; int height; int out_width; int out_height; } ;
struct TYPE_4__ {TYPE_3__* region; } ;
struct omapfb_device {int * fb_info; TYPE_2__* ctrl; TYPE_1__ mem_desc; } ;
struct TYPE_6__ {scalar_t__ vaddr; } ;
struct TYPE_5__ {scalar_t__ (* get_update_mode ) () ;int (* update_window ) (int ,struct omapfb_update_window*,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct omapfb_update_window*,int ,int) ;
 int FUNC_1 (struct omapfb_device*) ;
 int FUNC_2 (struct omapfb_device*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,struct omapfb_update_window*,int *,int *) ;

void FUNC_5(struct omapfb_device *VAR_1, u16 VAR_2)
{
 FUNC_1(VAR_1);
 *(u16 *)VAR_1->mem_desc.region[0].vaddr = VAR_2;
 if (VAR_1->ctrl->get_update_mode() == VAR_0) {
  struct omapfb_update_window VAR_3;

  FUNC_0(&VAR_3, 0, sizeof(VAR_3));
  VAR_3.width = 2;
  VAR_3.height = 2;
  VAR_3.out_width = 2;
  VAR_3.out_height = 2;
  VAR_1->ctrl->update_window(VAR_1->fb_info[0], &VAR_3, ((void*)0), ((void*)0));
 }
 FUNC_2(VAR_1);
}
