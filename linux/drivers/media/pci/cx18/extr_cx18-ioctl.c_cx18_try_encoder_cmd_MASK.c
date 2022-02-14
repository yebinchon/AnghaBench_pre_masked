
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_encoder_cmd {int cmd; int flags; } ;
struct file {int dummy; } ;
struct cx18 {int dummy; } ;
struct TYPE_2__ {struct cx18* cx; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;




 int VAR_1 ;
 TYPE_1__* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_encoder_cmd *VAR_4)
{
 struct cx18 *VAR_5 = FUNC_1(VAR_3)->cx;

 switch (VAR_4->cmd) {
 case 129:
  FUNC_0("V4L2_ENC_CMD_START\n");
  VAR_4->flags = 0;
  break;

 case 128:
  FUNC_0("V4L2_ENC_CMD_STOP\n");
  VAR_4->flags &= VAR_1;
  break;

 case 131:
  FUNC_0("V4L2_ENC_CMD_PAUSE\n");
  VAR_4->flags = 0;
  break;

 case 130:
  FUNC_0("V4L2_ENC_CMD_RESUME\n");
  VAR_4->flags = 0;
  break;

 default:
  FUNC_0("Unknown cmd %d\n", VAR_4->cmd);
  return -VAR_0;
 }
 return 0;
}
