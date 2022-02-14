
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_entity {int * ops; } ;
struct v4l2_subdev {int grp_id; int flags; int name; int * internal_ops; struct media_entity entity; } ;
struct media_pad {int flags; } ;
struct TYPE_2__ {int capture_mem; int bpl_alignment; int isp; int * ops; int type; } ;
struct isp_ccdc_device {TYPE_1__ video_out; int input; struct media_pad* pads; struct v4l2_subdev subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct v4l2_subdev*,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct media_entity*,int ,struct media_pad*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct isp_ccdc_device*) ;
 int FUNC_7 (struct v4l2_subdev*,struct isp_ccdc_device*) ;
 int FUNC_8 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_9(struct isp_ccdc_device *VAR_15)
{
 struct v4l2_subdev *VAR_16 = &VAR_15->subdev;
 struct media_pad *VAR_17 = VAR_15->pads;
 struct media_entity *VAR_18 = &VAR_16->entity;
 int VAR_19;

 VAR_15->input = VAR_0;

 FUNC_8(VAR_16, &VAR_13);
 VAR_16->internal_ops = &VAR_12;
 FUNC_5(VAR_16->name, "OMAP3 ISP CCDC", sizeof(VAR_16->name));
 VAR_16->grp_id = 1 << 16;
 FUNC_7(VAR_16, VAR_15);
 VAR_16->flags |= VAR_10 | VAR_9;

 VAR_17[VAR_2].flags = VAR_6
        | VAR_5;
 VAR_17[VAR_4].flags = VAR_7;
 VAR_17[VAR_3].flags = VAR_7;

 VAR_18->ops = &VAR_11;
 VAR_19 = FUNC_3(VAR_18, VAR_1, VAR_17);
 if (VAR_19 < 0)
  return VAR_19;

 FUNC_1(VAR_16, ((void*)0));

 VAR_15->video_out.type = VAR_8;
 VAR_15->video_out.ops = &VAR_14;
 VAR_15->video_out.isp = FUNC_6(VAR_15);
 VAR_15->video_out.capture_mem = FUNC_0(4096 * 4096) * 3;
 VAR_15->video_out.bpl_alignment = 32;

 VAR_19 = FUNC_4(&VAR_15->video_out, "CCDC");
 if (VAR_19 < 0)
  goto error;

 return 0;

error:
 FUNC_2(VAR_18);
 return VAR_19;
}
