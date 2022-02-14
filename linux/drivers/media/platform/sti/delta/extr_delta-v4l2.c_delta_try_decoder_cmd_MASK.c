
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pts; } ;
struct v4l2_decoder_cmd {scalar_t__ cmd; int flags; TYPE_1__ stop; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, void *VAR_5,
     struct v4l2_decoder_cmd *VAR_6)
{
 if (VAR_6->cmd != VAR_1)
  return -VAR_0;

 if (VAR_6->flags & VAR_3)
  return -VAR_0;

 if (!(VAR_6->flags & VAR_2) &&
     (VAR_6->stop.pts != 0))
  return -VAR_0;

 return 0;
}
