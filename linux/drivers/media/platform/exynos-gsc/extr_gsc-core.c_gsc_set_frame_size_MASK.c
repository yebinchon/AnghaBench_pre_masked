
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct gsc_frame {int f_width; int f_height; TYPE_1__ crop; } ;



void FUNC_0(struct gsc_frame *VAR_0, int VAR_1, int VAR_2)
{
 VAR_0->f_width = VAR_1;
 VAR_0->f_height = VAR_2;
 VAR_0->crop.width = VAR_1;
 VAR_0->crop.height = VAR_2;
 VAR_0->crop.left = 0;
 VAR_0->crop.top = 0;
}
