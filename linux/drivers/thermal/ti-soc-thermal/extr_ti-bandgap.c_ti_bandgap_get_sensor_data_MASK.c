
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_bandgap {TYPE_1__* regval; } ;
struct TYPE_2__ {void* data; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct ti_bandgap*,int) ;

void *FUNC_2(struct ti_bandgap *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return FUNC_0(VAR_2);

 return VAR_0->regval[VAR_1].data;
}
