
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2, u32 VAR_3)
{
 FUNC_1(1, VAR_0, VAR_2, "decoder RESET\n");
 FUNC_0(VAR_2, VAR_1);
 return 0;
}
