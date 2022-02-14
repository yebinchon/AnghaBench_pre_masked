
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2, u8 VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 return FUNC_0(VAR_2, VAR_1, VAR_3, 0xff,
    VAR_0);
}
