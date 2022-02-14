
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_entity {int * ops; } ;
struct v4l2_subdev {int flags; int grp_id; int name; int * internal_ops; struct media_entity entity; } ;
struct media_pad {void* flags; } ;
struct TYPE_2__ {int capture_mem; int bpl_alignment; int bpl_zero_padding; int bpl_max; int iss; int * ops; int type; } ;
struct iss_ipipeif_device {TYPE_1__ video_out; int input; struct media_pad* pads; struct v4l2_subdev subdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct v4l2_subdev*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct media_entity*,int ,struct media_pad*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct iss_ipipeif_device*) ;
 int FUNC_7 (struct v4l2_subdev*,struct iss_ipipeif_device*) ;
 int FUNC_8 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_9(struct iss_ipipeif_device *VAR_13)
{
 struct v4l2_subdev *VAR_14 = &VAR_13->subdev;
 struct media_pad *VAR_15 = VAR_13->pads;
 struct media_entity *VAR_16 = &VAR_14->entity;
 int VAR_17;

 VAR_13->input = VAR_0;

 FUNC_8(VAR_14, &VAR_11);
 VAR_14->internal_ops = &VAR_10;
 FUNC_5(VAR_14->name, "OMAP4 ISS ISP IPIPEIF", sizeof(VAR_14->name));
 VAR_14->grp_id = FUNC_0(16);
 FUNC_7(VAR_14, VAR_13);
 VAR_14->flags |= VAR_8;

 VAR_15[VAR_2].flags = VAR_5;
 VAR_15[VAR_3].flags = VAR_6;
 VAR_15[VAR_4].flags = VAR_6;

 VAR_16->ops = &VAR_9;
 VAR_17 = FUNC_3(VAR_16, VAR_1, VAR_15);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_2(VAR_14, ((void*)0));

 VAR_13->video_out.type = VAR_7;
 VAR_13->video_out.ops = &VAR_12;
 VAR_13->video_out.iss = FUNC_6(VAR_13);
 VAR_13->video_out.capture_mem = FUNC_1(4096 * 4096) * 3;
 VAR_13->video_out.bpl_alignment = 32;
 VAR_13->video_out.bpl_zero_padding = 1;
 VAR_13->video_out.bpl_max = 0x1ffe0;

 return FUNC_4(&VAR_13->video_out, "ISP IPIPEIF");
}
