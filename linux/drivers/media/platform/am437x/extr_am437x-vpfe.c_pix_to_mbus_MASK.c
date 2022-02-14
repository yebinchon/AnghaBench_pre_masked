
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_fmt {int code; } ;
struct vpfe_device {int dummy; } ;
struct v4l2_pix_format {int pixelformat; } ;
struct v4l2_mbus_framefmt {int dummy; } ;


 struct vpfe_fmt* FUNC_0 (int ) ;
 struct vpfe_fmt* VAR_0 ;
 int FUNC_1 (struct v4l2_mbus_framefmt*,int ,int) ;
 int FUNC_2 (struct v4l2_mbus_framefmt*,struct v4l2_pix_format*,int ) ;
 int FUNC_3 (int,struct vpfe_device*,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct vpfe_device *VAR_1,
   struct v4l2_pix_format *VAR_2,
   struct v4l2_mbus_framefmt *VAR_3)
{
 struct vpfe_fmt *VAR_4;

 VAR_4 = FUNC_0(VAR_2->pixelformat);
 if (!VAR_4) {

  FUNC_3(3, VAR_1, "Invalid pixel code: %x, default used instead\n",
   VAR_2->pixelformat);
  VAR_4 = &VAR_0[0];
 }

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 FUNC_2(VAR_3, VAR_2, VAR_4->code);
}
