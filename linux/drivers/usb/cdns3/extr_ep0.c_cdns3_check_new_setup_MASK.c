
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_sts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cdns3_device*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct cdns3_device *VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_3, 0 | VAR_2);
 VAR_4 = FUNC_1(&VAR_3->regs->ep_sts);

 return !!(VAR_4 & (VAR_0 | VAR_1));
}
