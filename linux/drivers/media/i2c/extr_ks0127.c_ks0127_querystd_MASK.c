
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int *,int *) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, v4l2_std_id *VAR_2)
{
 FUNC_1(1, VAR_0, VAR_1, "querystd\n");
 return FUNC_0(VAR_1, ((void*)0), VAR_2);
}
