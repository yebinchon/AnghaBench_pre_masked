
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frmsizeenum {scalar_t__ index; scalar_t__ pixel_format; int stepwise; int type; } ;
struct hantro_fmt {scalar_t__ codec_mode; int frmsize; } ;
struct hantro_ctx {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct hantro_ctx* FUNC_0 (void*) ;
 struct hantro_fmt* FUNC_1 (struct hantro_fmt const*,unsigned int,scalar_t__) ;
 struct hantro_fmt* FUNC_2 (struct hantro_ctx*,unsigned int*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
      struct v4l2_frmsizeenum *VAR_5)
{
 struct hantro_ctx *VAR_6 = FUNC_0(VAR_4);
 const struct hantro_fmt *VAR_7, *VAR_8;
 unsigned int VAR_9;

 if (VAR_5->index != 0) {
  FUNC_3(0, "invalid frame size index (expected 0, got %d)\n",
     VAR_5->index);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_6, &VAR_9);
 VAR_8 = FUNC_1(VAR_7, VAR_9, VAR_5->pixel_format);
 if (!VAR_8) {
  FUNC_3(0, "unsupported bitstream format (%08x)\n",
     VAR_5->pixel_format);
  return -VAR_0;
 }


 if (VAR_8->codec_mode == VAR_1)
  return -VAR_0;

 VAR_5->type = VAR_2;
 VAR_5->stepwise = VAR_8->frmsize;

 return 0;
}
