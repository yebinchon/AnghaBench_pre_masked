
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_mbus_code_enum {unsigned int index; int code; int which; } ;
struct v4l2_device {int dummy; } ;
struct pxa_mbus_pixelfmt {int name; int bits_per_sample; } ;
struct pxa_camera_format_xlate {int code; struct pxa_mbus_pixelfmt const* host_fmt; } ;
struct pxa_camera_dev {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pxa_camera_dev*) ;
 struct pxa_mbus_pixelfmt const* VAR_3 ;
 int FUNC_3 (struct pxa_mbus_pixelfmt const*) ;
 int FUNC_4 (struct pxa_camera_dev*,int ) ;
 struct pxa_mbus_pixelfmt* FUNC_5 (int) ;
 int FUNC_6 (struct pxa_camera_dev*,int ,int ,int *,struct v4l2_subdev_mbus_code_enum*) ;
 struct pxa_camera_dev* FUNC_7 (struct v4l2_device*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_device *VAR_4,
      unsigned int VAR_5,
      struct pxa_camera_format_xlate *VAR_6)
{
 struct pxa_camera_dev *VAR_7 = FUNC_7(VAR_4);
 int VAR_8 = 0, VAR_9;
 struct v4l2_subdev_mbus_code_enum VAR_10 = {
  .which = VAR_0,
  .index = VAR_5,
 };
 const struct pxa_mbus_pixelfmt *VAR_11;

 VAR_9 = FUNC_6(VAR_7, VAR_2, VAR_1, ((void*)0), &VAR_10);
 if (VAR_9 < 0)

  return 0;

 VAR_11 = FUNC_5(VAR_10.code);
 if (!VAR_11) {
  FUNC_1(FUNC_2(VAR_7),
   "Invalid format code #%u: %d\n", VAR_5, VAR_10.code);
  return 0;
 }


 VAR_9 = FUNC_4(VAR_7, VAR_11->bits_per_sample);
 if (VAR_9 < 0)
  return 0;

 switch (VAR_10.code) {
 case 131:
  VAR_8++;
  if (VAR_6) {
   VAR_6->host_fmt = &VAR_3[0];
   VAR_6->code = VAR_10.code;
   VAR_6++;
   FUNC_0(FUNC_2(VAR_7),
    "Providing format %s using code %d\n",
    VAR_3[0].name, VAR_10.code);
  }

 case 130:
 case 129:
 case 128:
 case 132:
 case 133:
  if (VAR_6)
   FUNC_0(FUNC_2(VAR_7),
    "Providing format %s packed\n",
    VAR_11->name);
  break;
 default:
  if (!FUNC_3(VAR_11))
   return 0;
  if (VAR_6)
   FUNC_0(FUNC_2(VAR_7),
    "Providing format %s in pass-through mode\n",
    VAR_11->name);
  break;
 }


 VAR_8++;
 if (VAR_6) {
  VAR_6->host_fmt = VAR_11;
  VAR_6->code = VAR_10.code;
  VAR_6++;
 }

 return VAR_8;
}
