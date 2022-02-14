
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_host {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct isci_host*) ;
 scalar_t__ FUNC_1 (struct isci_host*) ;

irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct isci_host *VAR_3 = VAR_2;

 if (FUNC_1(VAR_3))
  FUNC_0(VAR_3);

 return VAR_0;
}
