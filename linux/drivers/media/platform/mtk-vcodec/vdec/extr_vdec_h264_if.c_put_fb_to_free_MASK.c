
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vdec_h264_inst {TYPE_1__* vsi; } ;
struct TYPE_5__ {scalar_t__ dma_addr; int va; } ;
struct vdec_fb {TYPE_2__ base_y; } ;
struct h264_ring_fb_list {int count; size_t write_idx; TYPE_3__* fb_list; } ;
struct TYPE_6__ {scalar_t__ vdec_fb_va; } ;
struct TYPE_4__ {struct h264_ring_fb_list list_free; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vdec_h264_inst*,int) ;
 int FUNC_1 (struct vdec_h264_inst*,char*,int ,scalar_t__) ;
 int FUNC_2 (struct vdec_h264_inst*,char*) ;

__attribute__((used)) static void FUNC_3(struct vdec_h264_inst *VAR_1, struct vdec_fb *VAR_2)
{
 struct h264_ring_fb_list *VAR_3;

 if (VAR_2) {
  if (FUNC_0(VAR_1, 0))
   return;

  VAR_3 = &VAR_1->vsi->list_free;
  if (VAR_3->count == VAR_0) {
   FUNC_2(VAR_1, "[FB] put fb free_list full");
   return;
  }

  FUNC_1(VAR_1, "[FB] put fb into free_list @(%p, %llx)",
     VAR_2->base_y.va, (u64)VAR_2->base_y.dma_addr);

  VAR_3->fb_list[VAR_3->write_idx].vdec_fb_va = (u64)(uintptr_t)VAR_2;
  VAR_3->write_idx = (VAR_3->write_idx == VAR_0 - 1) ?
      0 : VAR_3->write_idx + 1;
  VAR_3->count++;
 }
}
