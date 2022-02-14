
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {int * pseudo_palette; TYPE_2__ cmap; } ;
struct vivid_dev {int * video_vbase; TYPE_1__ fb_info; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vivid_dev *VAR_0)
{
 if (VAR_0->video_vbase == ((void*)0))
  return;


 if (VAR_0->fb_info.cmap.len)
  FUNC_0(&VAR_0->fb_info.cmap);


 FUNC_1(VAR_0->fb_info.pseudo_palette);
 FUNC_1(VAR_0->video_vbase);
}
