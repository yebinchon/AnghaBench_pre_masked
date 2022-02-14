
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* range_table; } ;
struct TYPE_4__ {TYPE_1__* range; } ;
struct TYPE_3__ {scalar_t__ min; } ;



__attribute__((used)) static inline bool FUNC_0(struct comedi_subdevice *VAR_0,
         unsigned int VAR_1)
{
 return VAR_0->range_table->range[VAR_1].min >= 0;
}
