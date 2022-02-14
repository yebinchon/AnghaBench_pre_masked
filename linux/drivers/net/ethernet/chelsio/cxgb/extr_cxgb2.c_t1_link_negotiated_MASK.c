
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_info {int dev; } ;
struct TYPE_2__ {int nports; } ;
struct adapter {int sge; TYPE_1__ params; struct port_info* port; } ;





 int FUNC_0 (struct port_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,unsigned int) ;

void FUNC_5(struct adapter *VAR_0, int VAR_1, int VAR_2,
   int VAR_3, int VAR_4, int VAR_5)
{
 struct port_info *VAR_6 = &VAR_0->port[VAR_1];

 if (VAR_2 != FUNC_2(VAR_6->dev)) {
  if (VAR_2)
   FUNC_3(VAR_6->dev);
  else
   FUNC_1(VAR_6->dev);
  FUNC_0(VAR_6);


  if ((VAR_3 > 0) && (VAR_0->params.nports > 1)) {
   unsigned int VAR_7 = 10;
   switch (VAR_3) {
   case 128:
    VAR_7 = 1000;
    break;
   case 129:
    VAR_7 = 100;
    break;
   case 130:
    VAR_7 = 10;
    break;
   }
   FUNC_4(VAR_0->sge, VAR_1, 0, VAR_7);
  }
 }
}
