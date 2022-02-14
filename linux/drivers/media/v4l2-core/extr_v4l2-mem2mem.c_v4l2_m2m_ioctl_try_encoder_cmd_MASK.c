
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_encoder_cmd {scalar_t__ cmd; scalar_t__ flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(struct file *VAR_3, void *VAR_4,
       struct v4l2_encoder_cmd *VAR_5)
{
 if (VAR_5->cmd != VAR_2 && VAR_5->cmd != VAR_1)
  return -VAR_0;

 VAR_5->flags = 0;
 return 0;
}
