
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {struct v4l2_subdev sensor_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct s5c73m3*,int ,int ) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_4, int VAR_5)
{
 struct v4l2_subdev *VAR_6 = &VAR_4->sensor_sd;

 FUNC_1(1, VAR_3, VAR_6, "Image stabilization: %d\n", VAR_5);

 return FUNC_0(VAR_4, VAR_0, VAR_5 ?
   VAR_1 : VAR_2);
}
