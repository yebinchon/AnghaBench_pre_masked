
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ width; scalar_t__ height; } ;
struct jpu_q_data {TYPE_3__ format; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct jpu_ctx {TYPE_2__ fh; TYPE_1__* jpu; scalar_t__ encoder; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jpu_ctx*,int *,TYPE_3__*,int) ;
 int FUNC_1 (int ,char*) ;
 struct jpu_ctx* FUNC_2 (void*) ;
 struct jpu_q_data* FUNC_3 (struct jpu_ctx*,int) ;
 int FUNC_4 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4, enum v4l2_buf_type VAR_5)
{
 struct jpu_ctx *VAR_6 = FUNC_2(VAR_4);
 struct jpu_q_data *VAR_7, *VAR_8, *VAR_9, VAR_10, *VAR_11;
 enum v4l2_buf_type VAR_12;

 VAR_7 = FUNC_3(VAR_6, VAR_2);
 VAR_8 = FUNC_3(VAR_6, VAR_1);

 if (VAR_6->encoder) {
  VAR_10 = *VAR_7;
  VAR_9 = VAR_7;
  VAR_11 = VAR_8;
  VAR_12 = VAR_2;
 } else {
  VAR_10 = *VAR_8;
  VAR_9 = VAR_8;
  VAR_11 = VAR_7;
  VAR_12 = VAR_1;
 }

 VAR_10.format.width = VAR_11->format.width;
 VAR_10.format.height = VAR_11->format.height;

 FUNC_0(VAR_6, ((void*)0), &VAR_10.format, VAR_12);

 if (VAR_10.format.width != VAR_9->format.width ||
     VAR_10.format.height != VAR_9->format.height) {
  FUNC_1(VAR_6->jpu->dev, "src and dst formats do not match.\n");

  return -VAR_0;
 }

 return FUNC_4(VAR_3, VAR_6->fh.m2m_ctx, VAR_5);
}
