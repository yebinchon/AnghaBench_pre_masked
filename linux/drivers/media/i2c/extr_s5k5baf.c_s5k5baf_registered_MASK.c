
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int v4l2_dev; } ;
struct TYPE_3__ {int entity; } ;
struct TYPE_4__ {int entity; int name; } ;
struct s5k5baf {TYPE_1__ sd; TYPE_2__ cis_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int ,int) ;
 struct s5k5baf* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3)
{
 struct s5k5baf *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->v4l2_dev, &VAR_4->cis_sd);
 if (VAR_5 < 0)
  FUNC_3(VAR_3, "failed to register subdev %s\n",
    VAR_4->cis_sd.name);
 else
  VAR_5 = FUNC_0(&VAR_4->cis_sd.entity, VAR_2,
            &VAR_4->sd.entity, VAR_2,
            VAR_1 |
            VAR_0);
 return VAR_5;
}
