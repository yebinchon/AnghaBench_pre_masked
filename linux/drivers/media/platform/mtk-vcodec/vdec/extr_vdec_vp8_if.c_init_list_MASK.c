
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdec_vp8_inst {int available_fb_node_list; TYPE_1__* dec_fb; int fb_disp_list; int fb_free_list; int fb_use_list; } ;
struct TYPE_2__ {int list; int * fb; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct vdec_vp8_inst *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->available_fb_node_list);
 FUNC_1(&VAR_0->fb_use_list);
 FUNC_1(&VAR_0->fb_free_list);
 FUNC_1(&VAR_0->fb_disp_list);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->dec_fb); VAR_1++) {
  FUNC_1(&VAR_0->dec_fb[VAR_1].list);
  VAR_0->dec_fb[VAR_1].fb = ((void*)0);
  FUNC_2(&VAR_0->dec_fb[VAR_1].list,
         &VAR_0->available_fb_node_list);
 }
}
