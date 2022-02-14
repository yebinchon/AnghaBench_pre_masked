
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_entity {int * ops; } ;
struct v4l2_subdev {int flags; int grp_id; int name; int * internal_ops; struct media_entity entity; } ;
struct media_pad {int flags; } ;
struct iss_ipipe_device {int input; struct media_pad* pads; struct v4l2_subdev subdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct v4l2_subdev*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct media_entity*,int ,struct media_pad*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct v4l2_subdev*,struct iss_ipipe_device*) ;
 int FUNC_5 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_6(struct iss_ipipe_device *VAR_10)
{
 struct v4l2_subdev *VAR_11 = &VAR_10->subdev;
 struct media_pad *VAR_12 = VAR_10->pads;
 struct media_entity *VAR_13 = &VAR_11->entity;
 int VAR_14;

 VAR_10->input = VAR_0;

 FUNC_5(VAR_11, &VAR_9);
 VAR_11->internal_ops = &VAR_8;
 FUNC_3(VAR_11->name, "OMAP4 ISS ISP IPIPE", sizeof(VAR_11->name));
 VAR_11->grp_id = FUNC_0(16);
 FUNC_4(VAR_11, VAR_10);
 VAR_11->flags |= VAR_6;

 VAR_12[VAR_2].flags = VAR_4;
 VAR_12[VAR_3].flags = VAR_5;

 VAR_13->ops = &VAR_7;
 VAR_14 = FUNC_2(VAR_13, VAR_1, VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_1(VAR_11, ((void*)0));

 return 0;
}
