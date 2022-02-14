
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int width; int height; int code; } ;
struct resizer_luma_yenh {int member_3; int member_2; int member_1; int member_0; } ;
struct isp_res_device {scalar_t__ input; struct v4l2_mbus_framefmt* formats; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct isp_res_device*,struct v4l2_mbus_framefmt*,struct v4l2_mbus_framefmt*) ;
 int FUNC_2 (struct isp_res_device*,int) ;
 int FUNC_3 (struct isp_res_device*,int ) ;
 int FUNC_4 (struct isp_res_device*,struct resizer_luma_yenh*) ;
 int FUNC_5 (struct isp_res_device*,int) ;
 int FUNC_6 (struct isp_res_device*,int,int ) ;
 int FUNC_7 (struct isp_res_device*,int ,int ) ;
 int FUNC_8 (struct isp_res_device*,scalar_t__) ;
 int FUNC_9 (struct isp_res_device*,int ) ;

__attribute__((used)) static void FUNC_10(struct isp_res_device *VAR_5)
{
 struct v4l2_mbus_framefmt *VAR_6, *VAR_7;
 struct resizer_luma_yenh VAR_8 = {0, 0, 0, 0};

 FUNC_8(VAR_5, VAR_5->input);

 VAR_6 = &VAR_5->formats[VAR_2];
 VAR_7 = &VAR_5->formats[VAR_3];


 if (VAR_5->input == VAR_1)
  FUNC_2(VAR_5, 0);
 else
  FUNC_2(VAR_5, FUNC_0(VAR_6->width, 0x10) * 2);


 FUNC_3(VAR_5, VAR_4);
 FUNC_9(VAR_5, VAR_6->code);
 FUNC_7(VAR_5, VAR_0, VAR_0);
 FUNC_4(VAR_5, &VAR_8);


 FUNC_5(VAR_5, FUNC_0(VAR_7->width * 2, 32));
 FUNC_6(VAR_5, VAR_7->width, VAR_7->height);

 FUNC_1(VAR_5, VAR_6, VAR_7);
}
