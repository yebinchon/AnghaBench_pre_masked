
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ stop_src; } ;
struct TYPE_4__ {int inttrig; TYPE_1__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5)
{
 if (VAR_5->async->cmd.stop_src == VAR_2)
  FUNC_0(VAR_4, VAR_1,
       VAR_0, 1);

 VAR_5->async->inttrig = VAR_3;
}
