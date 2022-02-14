
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_encoder_cmd {int dummy; } ;
struct file {int dummy; } ;
struct coda_ctx {scalar_t__ inst_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct coda_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_encoder_cmd*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_encoder_cmd *VAR_4)
{
 struct coda_ctx *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->inst_type != VAR_0)
  return -VAR_1;

 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
