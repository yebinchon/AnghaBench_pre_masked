
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {TYPE_1__* counter_dev; } ;
struct TYPE_2__ {int variant; } ;


 int FUNC_0 (struct ni_gpct const*,unsigned int*) ;



 int FUNC_1 (struct ni_gpct const*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(const struct ni_gpct *VAR_0,
        unsigned int *VAR_1)
{
 switch (VAR_0->counter_dev->variant) {
 case 129:
 case 128:
 default:
  return FUNC_1(VAR_0, VAR_1);
 case 130:
  return FUNC_0(VAR_0, VAR_1);
 }
}
