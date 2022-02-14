
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {unsigned long vc_origin; unsigned long vc_visible_origin; int vc_pos; int vc_size_row; int vc_y; int vc_x; scalar_t__ vc_screenbuf_size; scalar_t__ vc_scr_end; scalar_t__ vc_screenbuf; TYPE_1__* vc_sw; } ;
struct TYPE_2__ {int (* con_set_origin ) (struct vc_data*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct vc_data*) ;
 int FUNC_2 (struct vc_data*) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_0)
{
 FUNC_0();

 if (!FUNC_1(VAR_0) ||
     !VAR_0->vc_sw->con_set_origin ||
     !VAR_0->vc_sw->con_set_origin(VAR_0))
  VAR_0->vc_origin = (unsigned long)VAR_0->vc_screenbuf;
 VAR_0->vc_visible_origin = VAR_0->vc_origin;
 VAR_0->vc_scr_end = VAR_0->vc_origin + VAR_0->vc_screenbuf_size;
 VAR_0->vc_pos = VAR_0->vc_origin + VAR_0->vc_size_row * VAR_0->vc_y + 2 * VAR_0->vc_x;
}
