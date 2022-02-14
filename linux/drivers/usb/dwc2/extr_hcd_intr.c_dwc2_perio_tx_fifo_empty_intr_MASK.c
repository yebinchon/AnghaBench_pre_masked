
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dwc2_hsotg*,int ) ;

__attribute__((used)) static void FUNC_3(struct dwc2_hsotg *VAR_1)
{
 if (FUNC_0())
  FUNC_1(VAR_1->dev, "--Periodic TxFIFO Empty Interrupt--\n");
 FUNC_2(VAR_1, VAR_0);
}
