
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int v4l2_dev; } ;
struct TYPE_3__ {int entity; int name; } ;
struct TYPE_4__ {int entity; } ;
struct s5c73m3 {TYPE_1__ oif_sd; TYPE_2__ sensor_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int *,int ,int) ;
 struct s5c73m3* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_6)
{
 struct s5c73m3 *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6->v4l2_dev, &VAR_7->sensor_sd);
 if (VAR_8) {
  FUNC_3(VAR_6->v4l2_dev, "Failed to register %s\n",
       VAR_7->oif_sd.name);
  return VAR_8;
 }

 VAR_8 = FUNC_0(&VAR_7->sensor_sd.entity,
   VAR_4, &VAR_7->oif_sd.entity, VAR_2,
   VAR_1 | VAR_0);

 VAR_8 = FUNC_0(&VAR_7->sensor_sd.entity,
   VAR_5, &VAR_7->oif_sd.entity, VAR_3,
   VAR_1 | VAR_0);

 return VAR_8;
}
