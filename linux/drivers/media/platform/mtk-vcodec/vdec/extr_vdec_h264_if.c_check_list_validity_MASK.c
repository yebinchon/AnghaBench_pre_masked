
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdec_h264_inst {TYPE_1__* vsi; } ;
struct h264_ring_fb_list {scalar_t__ count; scalar_t__ read_idx; scalar_t__ write_idx; } ;
struct TYPE_2__ {struct h264_ring_fb_list list_free; struct h264_ring_fb_list list_disp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vdec_h264_inst*,char*,char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct vdec_h264_inst *VAR_2, bool VAR_3)
{
 struct h264_ring_fb_list *VAR_4;

 VAR_4 = VAR_3 ? &VAR_2->vsi->list_disp : &VAR_2->vsi->list_free;

 if (VAR_4->count > VAR_1 ||
     VAR_4->read_idx >= VAR_1 ||
     VAR_4->write_idx >= VAR_1) {
  FUNC_0(VAR_2, "%s list err: cnt=%d r_idx=%d w_idx=%d",
          VAR_3 ? "disp" : "free", VAR_4->count,
          VAR_4->read_idx, VAR_4->write_idx);
  return -VAR_0;
 }

 return 0;
}
