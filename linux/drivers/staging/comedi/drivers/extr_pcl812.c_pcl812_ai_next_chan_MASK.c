
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct comedi_device *VAR_2,
    struct comedi_subdevice *VAR_3)
{
 struct comedi_cmd *VAR_4 = &VAR_3->async->cmd;

 if (VAR_4->stop_src == VAR_1 &&
     VAR_3->async->scans_done >= VAR_4->stop_arg) {
  VAR_3->async->events |= VAR_0;
  return 0;
 }

 return 1;
}
