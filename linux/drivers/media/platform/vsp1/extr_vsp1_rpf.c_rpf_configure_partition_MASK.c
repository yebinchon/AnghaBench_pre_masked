
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vsp1_rwpf_memory {int* addr; } ;
struct TYPE_6__ {int config; struct vsp1_device* vsp1; } ;
struct v4l2_pix_format_mplane {int num_planes; TYPE_4__* plane_fmt; } ;
struct vsp1_rwpf {TYPE_1__ entity; struct v4l2_pix_format_mplane format; struct vsp1_format_info* fmtinfo; struct vsp1_rwpf_memory mem; } ;
struct vsp1_pipeline {int partitions; scalar_t__ interlaced; TYPE_3__* partition; } ;
struct vsp1_format_info {int* bpp; int hsub; scalar_t__ swap_uv; int vsub; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct vsp1_device {TYPE_5__* info; } ;
struct v4l2_rect {int width; int left; int height; int top; } ;
struct TYPE_10__ {int gen; } ;
struct TYPE_9__ {int bytesperline; } ;
struct TYPE_7__ {int width; scalar_t__ left; } ;
struct TYPE_8__ {TYPE_2__ rpf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 struct vsp1_rwpf* FUNC_2 (int *) ;
 int FUNC_3 (struct vsp1_rwpf*,struct vsp1_dl_list*) ;
 int FUNC_4 (struct vsp1_rwpf*,struct vsp1_dl_body*,int ,int) ;
 struct v4l2_rect* FUNC_5 (struct vsp1_rwpf*,int ) ;

__attribute__((used)) static void FUNC_6(struct vsp1_entity *VAR_9,
        struct vsp1_pipeline *VAR_10,
        struct vsp1_dl_list *VAR_11,
        struct vsp1_dl_body *VAR_12)
{
 struct vsp1_rwpf *VAR_13 = FUNC_2(&VAR_9->subdev);
 struct vsp1_rwpf_memory VAR_14 = VAR_13->mem;
 struct vsp1_device *VAR_15 = VAR_13->entity.vsp1;
 const struct vsp1_format_info *VAR_16 = VAR_13->fmtinfo;
 const struct v4l2_pix_format_mplane *VAR_17 = &VAR_13->format;
 struct v4l2_rect VAR_18;
 VAR_18 = *FUNC_5(VAR_13, VAR_13->entity.config);
 if (VAR_10->partitions > 1) {
  VAR_18.width = VAR_10->partition->rpf.width;
  VAR_18.left += VAR_10->partition->rpf.left;
 }

 if (VAR_10->interlaced) {
  VAR_18.height = FUNC_0(VAR_18.height / 2, VAR_16->vsub);
  VAR_18.top = FUNC_0(VAR_18.top / 2, VAR_16->vsub);
 }

 FUNC_4(VAR_13, VAR_12, VAR_3,
         (VAR_18.width << VAR_4) |
         (VAR_18.height << VAR_5));
 FUNC_4(VAR_13, VAR_12, VAR_6,
         (VAR_18.width << VAR_7) |
         (VAR_18.height << VAR_8));

 VAR_14.addr[0] += VAR_18.top * VAR_17->plane_fmt[0].bytesperline
       + VAR_18.left * VAR_16->bpp[0] / 8;

 if (VAR_17->num_planes > 1) {
  unsigned int VAR_19;

  VAR_19 = VAR_18.top * VAR_17->plane_fmt[1].bytesperline
         + VAR_18.left / VAR_16->hsub
         * VAR_16->bpp[1] / 8;
  VAR_14.addr[1] += VAR_19;
  VAR_14.addr[2] += VAR_19;
 }





 if (VAR_15->info->gen == 3 && VAR_17->num_planes == 3 &&
     VAR_16->swap_uv)
  FUNC_1(VAR_14.addr[1], VAR_14.addr[2]);





 if (VAR_10->interlaced) {
  FUNC_3(VAR_13, VAR_11);
 } else {
  FUNC_4(VAR_13, VAR_12, VAR_2, VAR_14.addr[0]);
  FUNC_4(VAR_13, VAR_12, VAR_0, VAR_14.addr[1]);
  FUNC_4(VAR_13, VAR_12, VAR_1, VAR_14.addr[2]);
 }
}
