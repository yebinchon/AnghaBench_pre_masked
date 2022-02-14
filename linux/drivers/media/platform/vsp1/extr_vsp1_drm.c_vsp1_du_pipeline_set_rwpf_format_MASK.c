
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_planes; TYPE_1__* plane_fmt; } ;
struct vsp1_rwpf {TYPE_2__ format; struct vsp1_format_info const* fmtinfo; } ;
struct vsp1_format_info {int planes; int hsub; } ;
struct vsp1_device {int dev; } ;
struct TYPE_3__ {unsigned int bytesperline; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct vsp1_format_info* FUNC_1 (struct vsp1_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct vsp1_device *VAR_1,
         struct vsp1_rwpf *VAR_2,
         u32 VAR_3, unsigned int VAR_4)
{
 const struct vsp1_format_info *VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_1->dev, "Unsupported pixel format %08x\n",
   VAR_3);
  return -VAR_0;
 }







 VAR_6 = (VAR_5->planes == 3) ? VAR_5->hsub : 1;

 VAR_2->fmtinfo = VAR_5;
 VAR_2->format.num_planes = VAR_5->planes;
 VAR_2->format.plane_fmt[0].bytesperline = VAR_4;
 VAR_2->format.plane_fmt[1].bytesperline = VAR_4 / VAR_6;

 return 0;
}
