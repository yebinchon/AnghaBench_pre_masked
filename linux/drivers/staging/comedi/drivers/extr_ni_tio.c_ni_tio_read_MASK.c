
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {TYPE_1__* counter_dev; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;
struct TYPE_2__ {unsigned int (* read ) (struct ni_gpct*,int) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct ni_gpct*,int) ;

unsigned int FUNC_1(struct ni_gpct *VAR_1, enum ni_gpct_register VAR_2)
{
 if (VAR_2 < VAR_0)
  return VAR_1->counter_dev->read(VAR_1, VAR_2);
 return 0;
}
