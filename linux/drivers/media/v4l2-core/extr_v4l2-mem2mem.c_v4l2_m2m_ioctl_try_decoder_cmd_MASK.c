
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; scalar_t__ speed; } ;
struct TYPE_4__ {scalar_t__ pts; } ;
struct v4l2_decoder_cmd {scalar_t__ cmd; TYPE_1__ start; TYPE_2__ stop; scalar_t__ flags; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct file *VAR_4, void *VAR_5,
       struct v4l2_decoder_cmd *VAR_6)
{
 if (VAR_6->cmd != VAR_2 && VAR_6->cmd != VAR_1)
  return -VAR_0;

 VAR_6->flags = 0;

 if (VAR_6->cmd == VAR_2) {
  VAR_6->stop.pts = 0;
 } else if (VAR_6->cmd == VAR_1) {
  VAR_6->start.speed = 0;
  VAR_6->start.format = VAR_3;
 }
 return 0;
}
