
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_format {int** service_lines; int service_set; } ;


 int FUNC_0 (int**,int ,int) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, struct v4l2_sliced_vbi_format *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 FUNC_0(VAR_1->service_lines, 0, sizeof(VAR_1->service_lines));

 for (VAR_2 = 0; VAR_2 <= 23; VAR_2++) {
  VAR_1->service_lines[0][VAR_2] =
   FUNC_1(VAR_0, VAR_2);
  VAR_3 |= VAR_1->service_lines[0][VAR_2];
 }
 VAR_1->service_set = VAR_3;
 return 0;
}
