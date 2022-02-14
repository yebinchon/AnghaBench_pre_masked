
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_ntb {int ntb; TYPE_1__* stdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct switchtec_ntb *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->stdev->dev, "doorbell\n");

 FUNC_1(&VAR_3->ntb, 0);

 return VAR_0;
}
