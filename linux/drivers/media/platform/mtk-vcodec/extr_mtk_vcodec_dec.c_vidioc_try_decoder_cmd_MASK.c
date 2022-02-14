
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_decoder_cmd {int cmd; int flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
    struct v4l2_decoder_cmd *VAR_3)
{
 switch (VAR_3->cmd) {
 case 128:
 case 129:
  if (VAR_3->flags != 0) {
   FUNC_0("cmd->flags=%u", VAR_3->flags);
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
