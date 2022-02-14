
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct m5mols_exif {int qval; int sdr; int flash; int iso_speed; int exposure_bias; int brightness; int aperture; int shutter_speed; int exposure_time; } ;
struct TYPE_2__ {scalar_t__ thumb; scalar_t__ main; scalar_t__ total; struct m5mols_exif exif; } ;
struct m5mols_info {TYPE_1__ cap; struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int *) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int *) ;
 int FUNC_2 (struct v4l2_subdev*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct m5mols_info *VAR_16)
{
 struct m5mols_exif *VAR_17 = &VAR_16->cap.exif;
 struct v4l2_subdev *VAR_18 = &VAR_16->sd;
 int VAR_19;

 VAR_19 = FUNC_0(VAR_18, VAR_9,
       VAR_8, &VAR_17->exposure_time);
 if (VAR_19)
  return VAR_19;
 VAR_19 = FUNC_0(VAR_18, VAR_15, VAR_14,
       &VAR_17->shutter_speed);
 if (VAR_19)
  return VAR_19;
 VAR_19 = FUNC_0(VAR_18, VAR_3, VAR_2,
       &VAR_17->aperture);
 if (VAR_19)
  return VAR_19;
 VAR_19 = FUNC_0(VAR_18, VAR_5, VAR_4,
       &VAR_17->brightness);
 if (VAR_19)
  return VAR_19;
 VAR_19 = FUNC_0(VAR_18, VAR_7, VAR_6,
       &VAR_17->exposure_bias);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_1(VAR_18, VAR_11, &VAR_17->iso_speed);
 if (!VAR_19)
  VAR_19 = FUNC_1(VAR_18, VAR_10, &VAR_17->flash);
 if (!VAR_19)
  VAR_19 = FUNC_1(VAR_18, VAR_13, &VAR_17->sdr);
 if (!VAR_19)
  VAR_19 = FUNC_1(VAR_18, VAR_12, &VAR_17->qval);
 if (VAR_19)
  return VAR_19;

 if (!VAR_19)
  VAR_19 = FUNC_2(VAR_18, VAR_0, &VAR_16->cap.main);
 if (!VAR_19)
  VAR_19 = FUNC_2(VAR_18, VAR_1, &VAR_16->cap.thumb);
 if (!VAR_19)
  VAR_16->cap.total = VAR_16->cap.main + VAR_16->cap.thumb;

 return VAR_19;
}
