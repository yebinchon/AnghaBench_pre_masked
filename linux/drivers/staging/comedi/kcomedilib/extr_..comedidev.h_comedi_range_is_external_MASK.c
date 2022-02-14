
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* range_table; } ;
struct TYPE_4__ {TYPE_1__* range; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct comedi_subdevice *VAR_1,
         unsigned int VAR_2)
{
 return !!(VAR_1->range_table->range[VAR_2].flags & VAR_0);
}
