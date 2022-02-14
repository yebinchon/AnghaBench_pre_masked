
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct bdisp_ctx {TYPE_2__ fh; TYPE_1__* bdisp_dev; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct bdisp_ctx*) ;
 int FUNC_1 (int ,char*) ;
 struct bdisp_ctx* FUNC_2 (void*) ;
 int FUNC_3 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6, enum v4l2_buf_type VAR_7)
{
 struct bdisp_ctx *VAR_8 = FUNC_2(VAR_6);

 if ((VAR_7 == VAR_4) &&
     !FUNC_0(VAR_1, VAR_8)) {
  FUNC_1(VAR_8->bdisp_dev->dev, "src not defined\n");
  return -VAR_2;
 }

 if ((VAR_7 == VAR_3) &&
     !FUNC_0(VAR_0, VAR_8)) {
  FUNC_1(VAR_8->bdisp_dev->dev, "dst not defined\n");
  return -VAR_2;
 }

 return FUNC_3(VAR_5, VAR_8->fh.m2m_ctx, VAR_7);
}
