
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3 {TYPE_1__* otg_regs; } ;
struct TYPE_2__ {int ivect; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdns3*) ;
 int FUNC_1 (struct cdns3*) ;
 int FUNC_2 (struct cdns3*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct cdns3 *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_1);

 FUNC_3(~0, &VAR_1->otg_regs->ivect);

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1);
 return VAR_2;
}
