
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_format {int format; int which; } ;
struct mcam_camera {int mbus_code; int pix_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mcam_camera*) ;
 int VAR_3 ;
 int FUNC_1 (struct mcam_camera*,int ,int ,int *,...) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct mcam_camera *VAR_5)
{
 struct v4l2_subdev_format VAR_6 = {
  .which = VAR_0,
 };
 int VAR_7;

 FUNC_2(&VAR_6.format, &VAR_5->pix_format, VAR_5->mbus_code);
 VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_2, 0);
 if (VAR_7 == 0)
  VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_4, ((void*)0), &VAR_6);



 VAR_7 += FUNC_0(VAR_5);
 return VAR_7;
}
