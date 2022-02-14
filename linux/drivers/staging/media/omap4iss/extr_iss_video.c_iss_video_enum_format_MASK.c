
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ code; } ;
struct v4l2_fmtdesc {unsigned int index; scalar_t__ type; int pixelformat; } ;
struct iss_video {scalar_t__ type; } ;
struct iss_format_info {scalar_t__ code; int pixelformat; } ;
struct file {int dummy; } ;


 unsigned int FUNC_0 (struct iss_format_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct iss_video*,struct v4l2_mbus_framefmt*) ;
 struct iss_format_info* VAR_1 ;
 struct iss_video* FUNC_2 (struct file*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_2, void *VAR_3, struct v4l2_fmtdesc *VAR_4)
{
 struct iss_video *VAR_5 = FUNC_2(VAR_2);
 struct v4l2_mbus_framefmt VAR_6;
 unsigned int VAR_7 = VAR_4->index;
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_4->type != VAR_5->type)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_5, &VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); ++VAR_8) {
  const struct iss_format_info *VAR_10 = &VAR_1[VAR_8];

  if (VAR_6.code != VAR_10->code)
   continue;

  if (VAR_7 == 0) {
   VAR_4->pixelformat = VAR_10->pixelformat;
   return 0;
  }

  VAR_7--;
 }

 return -VAR_0;
}
