
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct m5mols_info {int resolution; struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct m5mols_info*) ;
 int FUNC_1 (struct m5mols_info*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct m5mols_info *VAR_5)
{
 struct v4l2_subdev *VAR_6 = &VAR_5->sd;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_4);
 if (!VAR_7)
  VAR_7 = FUNC_2(VAR_6, VAR_1, VAR_5->resolution);
 if (!VAR_7)
  VAR_7 = FUNC_2(VAR_6, VAR_0, VAR_2);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_5, VAR_3);
 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_5);

 return VAR_7;
}
