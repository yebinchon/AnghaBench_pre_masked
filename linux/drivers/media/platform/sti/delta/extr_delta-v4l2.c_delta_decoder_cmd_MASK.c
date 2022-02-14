
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_decoder_cmd {int dummy; } ;
struct file {int dummy; } ;
struct delta_ctx {int dummy; } ;


 int FUNC_0 (struct delta_ctx*,void*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_decoder_cmd*) ;
 struct delta_ctx* FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
        struct v4l2_decoder_cmd *VAR_2)
{
 struct delta_ctx *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_3, VAR_1);
}
