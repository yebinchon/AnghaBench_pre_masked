
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


struct vsp1_rwpf_memory {unsigned int* addr; } ;
struct TYPE_10__ {unsigned int active; scalar_t__ rotate; } ;
struct TYPE_12__ {int config; struct vsp1_device* vsp1; } ;
struct v4l2_pix_format_mplane {unsigned int width; unsigned int height; unsigned int num_planes; TYPE_3__* plane_fmt; } ;
struct vsp1_rwpf {int writeback; TYPE_4__ flip; TYPE_6__ entity; struct vsp1_format_info* fmtinfo; struct v4l2_pix_format_mplane format; struct vsp1_rwpf_memory mem; } ;
struct vsp1_pipeline {int partitions; scalar_t__ lif; TYPE_2__* partition; } ;
struct vsp1_format_info {int hsub; int vsub; unsigned int* bpp; scalar_t__ swap_uv; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;
struct vsp1_device {TYPE_5__* info; } ;
struct v4l2_mbus_framefmt {unsigned int width; unsigned int height; } ;
struct TYPE_11__ {int gen; } ;
struct TYPE_9__ {unsigned int bytesperline; } ;
struct TYPE_7__ {unsigned int width; unsigned int left; } ;
struct TYPE_8__ {TYPE_1__ wpf; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 struct vsp1_rwpf* FUNC_3 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_4 (TYPE_6__*,int ,int ) ;
 int FUNC_5 (struct vsp1_rwpf*,struct vsp1_dl_body*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct vsp1_entity *VAR_11,
        struct vsp1_pipeline *VAR_12,
        struct vsp1_dl_list *VAR_13,
        struct vsp1_dl_body *VAR_14)
{
 struct vsp1_rwpf *VAR_15 = FUNC_3(&VAR_11->subdev);
 struct vsp1_device *VAR_16 = VAR_15->entity.vsp1;
 struct vsp1_rwpf_memory VAR_17 = VAR_15->mem;
 const struct v4l2_mbus_framefmt *VAR_18;
 const struct v4l2_pix_format_mplane *VAR_19 = &VAR_15->format;
 const struct vsp1_format_info *VAR_20 = VAR_15->fmtinfo;
 unsigned int VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26;

 VAR_18 = FUNC_4(&VAR_15->entity,
       VAR_15->entity.config,
       VAR_0);
 VAR_21 = VAR_18->width;
 VAR_22 = VAR_18->height;
 VAR_23 = 0;





 if (VAR_12->partitions > 1) {
  VAR_21 = VAR_12->partition->wpf.width;
  VAR_23 = VAR_12->partition->wpf.left;
 }

 FUNC_5(VAR_15, VAR_14, VAR_4, VAR_5 |
         (0 << VAR_6) |
         (VAR_21 << VAR_7));
 FUNC_5(VAR_15, VAR_14, VAR_8, VAR_5 |
         (0 << VAR_6) |
         (VAR_22 << VAR_7));





 if (VAR_12->lif && !VAR_15->writeback)
  return;
 VAR_25 = VAR_15->flip.active;

 if (VAR_25 & FUNC_0(VAR_9) && !VAR_15->flip.rotate)
  VAR_24 = VAR_19->width - VAR_23 - VAR_21;
 else if (VAR_25 & FUNC_0(VAR_10) && VAR_15->flip.rotate)
  VAR_24 = VAR_19->height - VAR_23 - VAR_21;
 else
  VAR_24 = VAR_23;

 for (VAR_26 = 0; VAR_26 < VAR_19->num_planes; ++VAR_26) {
  unsigned int VAR_27 = VAR_26 > 0 ? VAR_20->hsub : 1;
  unsigned int VAR_28 = VAR_26 > 0 ? VAR_20->vsub : 1;

  if (VAR_15->flip.rotate)
   VAR_17.addr[VAR_26] += VAR_24 / VAR_28
         * VAR_19->plane_fmt[VAR_26].bytesperline;
  else
   VAR_17.addr[VAR_26] += VAR_24 / VAR_27
         * VAR_20->bpp[VAR_26] / 8;
 }

 if (VAR_25 & FUNC_0(VAR_10)) {






  if (VAR_15->flip.rotate)
   VAR_22 = VAR_21;
  else
   VAR_22 = VAR_19->height;

  VAR_17.addr[0] += (VAR_22 - 1)
        * VAR_19->plane_fmt[0].bytesperline;

  if (VAR_19->num_planes > 1) {
   VAR_24 = (VAR_22 / VAR_20->vsub - 1)
          * VAR_19->plane_fmt[1].bytesperline;
   VAR_17.addr[1] += VAR_24;
   VAR_17.addr[2] += VAR_24;
  }
 }

 if (VAR_15->flip.rotate && !(VAR_25 & FUNC_0(VAR_9))) {
  unsigned int VAR_29 = FUNC_1(0, (int)VAR_19->width - 16);





  for (VAR_26 = 0; VAR_26 < VAR_19->num_planes; ++VAR_26) {
   unsigned int VAR_30 = VAR_26 > 0 ? VAR_20->hsub : 1;

   VAR_17.addr[VAR_26] += VAR_29 / VAR_30
         * VAR_20->bpp[VAR_26] / 8;
  }
 }





 if (VAR_16->info->gen == 3 && VAR_19->num_planes == 3 &&
     VAR_20->swap_uv)
  FUNC_2(VAR_17.addr[1], VAR_17.addr[2]);

 FUNC_5(VAR_15, VAR_14, VAR_3, VAR_17.addr[0]);
 FUNC_5(VAR_15, VAR_14, VAR_1, VAR_17.addr[1]);
 FUNC_5(VAR_15, VAR_14, VAR_2, VAR_17.addr[2]);





 VAR_15->writeback = 0;
}
