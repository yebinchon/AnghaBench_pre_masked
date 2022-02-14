
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int step_width; int step_height; int max_height; int min_height; int max_width; int min_width; } ;
struct v4l2_frmsizeenum {scalar_t__ pixel_format; TYPE_1__ stepwise; int type; scalar_t__ index; } ;
struct file {int dummy; } ;
struct coda_q_data {scalar_t__ fourcc; } ;
struct coda_ctx {scalar_t__ inst_type; int dev; } ;
struct coda_codec {int max_h; int max_w; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct coda_codec* FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct coda_ctx* FUNC_2 (void*) ;
 struct coda_q_data* FUNC_3 (struct coda_ctx*,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_8, void *VAR_9,
    struct v4l2_frmsizeenum *VAR_10)
{
 struct coda_ctx *VAR_11 = FUNC_2(VAR_9);
 struct coda_q_data *VAR_12;
 const struct coda_codec *VAR_13;

 if (VAR_11->inst_type != VAR_0)
  return -VAR_2;

 if (VAR_10->index)
  return -VAR_1;

 if (FUNC_1(VAR_10->pixel_format) ==
     VAR_7) {
  VAR_12 = FUNC_3(VAR_11, VAR_5);
  VAR_13 = FUNC_0(VAR_11->dev, VAR_10->pixel_format,
     VAR_12->fourcc);
 } else {
  VAR_13 = FUNC_0(VAR_11->dev, VAR_7,
     VAR_10->pixel_format);
 }
 if (!VAR_13)
  return -VAR_1;

 VAR_10->type = VAR_6;
 VAR_10->stepwise.min_width = VAR_4;
 VAR_10->stepwise.max_width = VAR_13->max_w;
 VAR_10->stepwise.step_width = 1;
 VAR_10->stepwise.min_height = VAR_3;
 VAR_10->stepwise.max_height = VAR_13->max_h;
 VAR_10->stepwise.step_height = 1;

 return 0;
}
