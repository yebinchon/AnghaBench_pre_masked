
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int status; int capabilities; int type; int name; scalar_t__ index; } ;
struct file {int dummy; } ;
struct aspeed_video {int v4l2_input_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 struct aspeed_video* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
       struct v4l2_input *VAR_5)
{
 struct aspeed_video *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->index)
  return -VAR_0;

 FUNC_0(VAR_5->name, "Host VGA capture", sizeof(VAR_5->name));
 VAR_5->type = VAR_1;
 VAR_5->capabilities = VAR_2;
 VAR_5->status = VAR_6->v4l2_input_status;

 return 0;
}
