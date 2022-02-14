
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct isp_device {int dummy; } ;
struct isp_ccdc_device {int state; int output; int underrun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isp_ccdc_device*) ;
 int FUNC_1 (struct isp_ccdc_device*) ;
 int FUNC_2 (struct isp_ccdc_device*) ;
 int FUNC_3 (struct isp_ccdc_device*) ;
 int FUNC_4 (struct isp_device*,int ,int ,int ) ;
 int FUNC_5 (struct isp_device*,int ) ;
 int FUNC_6 (struct isp_device*,int ) ;
 int FUNC_7 (struct isp_device*,int ) ;
 int FUNC_8 (struct isp_device*,int ) ;
 struct isp_device* FUNC_9 (struct isp_ccdc_device*) ;
 struct isp_ccdc_device* FUNC_10 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_11(struct v4l2_subdev *VAR_6, int VAR_7)
{
 struct isp_ccdc_device *VAR_8 = FUNC_10(VAR_6);
 struct isp_device *VAR_9 = FUNC_9(VAR_8);
 int VAR_10 = 0;

 if (VAR_8->state == 128) {
  if (VAR_7 == 128)
   return 0;

  FUNC_8(VAR_9, VAR_5);
  FUNC_4(VAR_9, VAR_3, VAR_1,
       VAR_2);

  FUNC_0(VAR_8);

  FUNC_3(VAR_8);
 }

 switch (VAR_7) {
 case 130:
  if (VAR_8->output & VAR_0)
   FUNC_6(VAR_9, VAR_4);

  if (VAR_8->underrun || !(VAR_8->output & VAR_0))
   FUNC_2(VAR_8);

  VAR_8->underrun = 0;
  break;

 case 129:
  if (VAR_8->output & VAR_0 &&
      VAR_8->state != 129)
   FUNC_6(VAR_9, VAR_4);

  FUNC_2(VAR_8);
  break;

 case 128:
  VAR_10 = FUNC_1(VAR_8);
  if (VAR_8->output & VAR_0)
   FUNC_5(VAR_9, VAR_4);
  FUNC_7(VAR_9, VAR_5);
  VAR_8->underrun = 0;
  break;
 }

 VAR_8->state = VAR_7;
 return VAR_10;
}
