
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_8254* pacer; } ;
struct comedi_cmd {scalar_t__ convert_src; } ;
struct comedi_8254 {unsigned int osc_base; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      unsigned int *VAR_3, unsigned int *VAR_4,
      unsigned int VAR_5, int VAR_6,
      unsigned int *VAR_7, unsigned int *VAR_8,
      unsigned int VAR_9)
{
 struct comedi_8254 *VAR_10 = VAR_1->pacer;
 struct comedi_cmd *VAR_11 = &VAR_2->async->cmd;

 *VAR_7 = *VAR_4 / VAR_10->osc_base;
 *VAR_8 = *VAR_3 / VAR_10->osc_base;
 *VAR_8 = *VAR_8 / *VAR_7;
 if (*VAR_8 < VAR_6)
  *VAR_8 = VAR_6;

 *VAR_4 = *VAR_7 * VAR_10->osc_base;

 if (VAR_11->convert_src == VAR_0 && !VAR_9) {

  if (*VAR_8 < (VAR_6 + 2))
   *VAR_8 = VAR_6 + 2;
 }

 *VAR_3 = *VAR_7 * *VAR_8 * VAR_10->osc_base;
}
