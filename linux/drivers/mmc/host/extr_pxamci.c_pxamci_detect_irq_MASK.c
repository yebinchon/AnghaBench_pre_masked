
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxamci_host {int detect_delay_ms; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 struct pxamci_host* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct pxamci_host *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_2, FUNC_2(VAR_3->detect_delay_ms));
 return VAR_0;
}
