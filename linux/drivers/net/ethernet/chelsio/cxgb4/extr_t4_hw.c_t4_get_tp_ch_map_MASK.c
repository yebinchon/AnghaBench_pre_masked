
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip; } ;
struct adapter {int pdev_dev; TYPE_1__ params; } ;


 unsigned int FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_3 (int ,char*,int,unsigned int) ;
 int FUNC_4 (struct adapter*,int ) ;

unsigned int FUNC_5(struct adapter *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1->params.chip);
 unsigned int VAR_4 = 1 << FUNC_1(FUNC_4(VAR_1, VAR_0));

 if (VAR_2 >= VAR_4) {
  FUNC_3(VAR_1->pdev_dev, "TP Port Index %d >= Nports %d\n",
    VAR_2, VAR_4);
  return 0;
 }

 switch (VAR_3) {
 case 130:
 case 129:




  switch (VAR_4) {
  case 1: return 0xf;
  case 2: return 3 << (2 * VAR_2);
  case 4: return 1 << VAR_2;
  }
  break;

 case 128:
  switch (VAR_4) {
  case 1:
  case 2: return 1 << VAR_2;
  }
  break;
 }

 FUNC_2(VAR_1->pdev_dev, "Need TP Channel Map for Chip %0x, Nports %d\n",
  VAR_3, VAR_4);
 return 0;
}
