
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_mbus_code_enum {int index; scalar_t__ code; } ;
struct v4l2_subdev {int name; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct cal_fmt {scalar_t__ code; int fourcc; } ;
struct cal_ctx {int num_active_fmt; struct cal_fmt** active_fmt; struct v4l2_subdev* sensor; } ;
typedef int mbus_code ;


 int FUNC_0 (struct cal_fmt*) ;
 int VAR_0 ;
 int FUNC_1 (struct cal_ctx*) ;
 struct cal_fmt* VAR_1 ;
 int FUNC_2 (int,struct cal_ctx*,char*,int ,...) ;
 int FUNC_3 (struct cal_ctx*,char*,int ) ;
 int FUNC_4 (struct cal_ctx*,char*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct v4l2_subdev_mbus_code_enum*,int ,int) ;
 struct cal_ctx* FUNC_7 (struct v4l2_async_notifier*) ;
 int VAR_3 ;
 int FUNC_8 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_mbus_code_enum*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_async_notifier *VAR_4,
      struct v4l2_subdev *VAR_5,
      struct v4l2_async_subdev *VAR_6)
{
 struct cal_ctx *VAR_7 = FUNC_7(VAR_4);
 struct v4l2_subdev_mbus_code_enum VAR_8;
 int VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12;

 if (VAR_7->sensor) {
  FUNC_4(VAR_7, "Rejecting subdev %s (Already set!!)",
    VAR_5->name);
  return 0;
 }

 VAR_7->sensor = VAR_5;
 FUNC_2(1, VAR_7, "Using sensor %s for capture\n", VAR_5->name);


 VAR_7->num_active_fmt = 0;
 for (VAR_11 = 0, VAR_10 = 0; VAR_9 != -VAR_0; ++VAR_11) {
  struct cal_fmt *VAR_13;

  FUNC_6(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.index = VAR_11;
  VAR_9 = FUNC_8(VAR_5, VAR_3, VAR_2,
           ((void*)0), &VAR_8);
  if (VAR_9)
   continue;

  FUNC_2(2, VAR_7,
   "subdev %s: code: %04x idx: %d\n",
   VAR_5->name, VAR_8.code, VAR_11);

  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_1); VAR_12++) {
   VAR_13 = &VAR_1[VAR_12];

   if (VAR_8.code == VAR_13->code) {
    VAR_7->active_fmt[VAR_10] = VAR_13;
    FUNC_2(2, VAR_7,
     "matched fourcc: %s: code: %04x idx: %d\n",
     FUNC_5(VAR_13->fourcc),
     VAR_13->code, VAR_10);
    VAR_7->num_active_fmt = ++VAR_10;
   }
  }
 }

 if (VAR_10 == 0) {
  FUNC_3(VAR_7, "No suitable format reported by subdev %s\n",
   VAR_5->name);
  return -VAR_0;
 }

 FUNC_1(VAR_7);

 return 0;
}
