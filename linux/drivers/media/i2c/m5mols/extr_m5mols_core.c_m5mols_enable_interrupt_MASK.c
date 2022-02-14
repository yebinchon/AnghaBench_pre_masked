
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct m5mols_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct m5mols_info*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int*) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;
 struct m5mols_info* FUNC_3 (struct v4l2_subdev*) ;

int FUNC_4(struct v4l2_subdev *VAR_3, u8 VAR_4)
{
 struct m5mols_info *VAR_5 = FUNC_3(VAR_3);
 u8 VAR_6 = FUNC_0(VAR_5) ? VAR_0 : 0;
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_2, &VAR_7);
 if (!VAR_8)
  VAR_8 = FUNC_2(VAR_3, VAR_1, VAR_4 & ~VAR_6);
 return VAR_8;
}
