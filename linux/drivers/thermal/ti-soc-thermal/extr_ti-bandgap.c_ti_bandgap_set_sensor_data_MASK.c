
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_bandgap {TYPE_1__* regval; } ;
struct TYPE_2__ {void* data; } ;


 int FUNC_0 (struct ti_bandgap*,int) ;

int FUNC_1(struct ti_bandgap *VAR_0, int VAR_1, void *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_0->regval[VAR_1].data = VAR_2;

 return 0;
}
