
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip; } ;
struct adapter {int pdev_dev; TYPE_1__ params; } ;


 unsigned int FUNC_0 (int ) ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int) ;

unsigned int FUNC_2(struct adapter *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2->params.chip);

 switch (VAR_3) {
 case 130:
  return VAR_0;

 case 129:
 case 128:
  return VAR_1;
 }

 FUNC_1(VAR_2->pdev_dev,
  "Unsupported chip version %d\n", VAR_3);
 return 0;
}
