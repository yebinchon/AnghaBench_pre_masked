
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_encoder_cmd {int cmd; int flags; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int i_flags; int ana_capturing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*) ;
 int FUNC_5 (struct cx18_open_id*) ;
 int FUNC_6 (struct cx18_open_id*,int) ;
 int FUNC_7 (struct cx18*) ;
 int FUNC_8 (struct cx18*,int ,int,int ) ;
 struct cx18_open_id* FUNC_9 (void*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_8, void *VAR_9,
    struct v4l2_encoder_cmd *VAR_10)
{
 struct cx18_open_id *VAR_11 = FUNC_9(VAR_9);
 struct cx18 *VAR_12 = VAR_11->cx;
 u32 VAR_13;

 switch (VAR_10->cmd) {
 case 129:
  FUNC_0("V4L2_ENC_CMD_START\n");
  VAR_10->flags = 0;
  return FUNC_5(VAR_11);

 case 128:
  FUNC_0("V4L2_ENC_CMD_STOP\n");
  VAR_10->flags &= VAR_7;
  FUNC_6(VAR_11,
      VAR_10->flags & VAR_7);
  break;

 case 131:
  FUNC_0("V4L2_ENC_CMD_PAUSE\n");
  VAR_10->flags = 0;
  if (!FUNC_2(&VAR_12->ana_capturing))
   return -VAR_6;
  if (FUNC_11(VAR_2, &VAR_12->i_flags))
   return 0;
  VAR_13 = FUNC_3(VAR_12);
  if (VAR_13 == VAR_3) {
   FUNC_1("Can't find valid task handle for V4L2_ENC_CMD_PAUSE\n");
   return -VAR_4;
  }
  FUNC_4(VAR_12);
  FUNC_8(VAR_12, VAR_0, 1, VAR_13);
  break;

 case 130:
  FUNC_0("V4L2_ENC_CMD_RESUME\n");
  VAR_10->flags = 0;
  if (!FUNC_2(&VAR_12->ana_capturing))
   return -VAR_6;
  if (!FUNC_10(VAR_2, &VAR_12->i_flags))
   return 0;
  VAR_13 = FUNC_3(VAR_12);
  if (VAR_13 == VAR_3) {
   FUNC_1("Can't find valid task handle for V4L2_ENC_CMD_RESUME\n");
   return -VAR_4;
  }
  FUNC_8(VAR_12, VAR_1, 1, VAR_13);
  FUNC_7(VAR_12);
  break;

 default:
  FUNC_0("Unknown cmd %d\n", VAR_10->cmd);
  return -VAR_5;
 }
 return 0;
}
