
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {void* irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_3 ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,char*,...) ;
 int FUNC_4 (void*,int *,int ,int,int ,struct phy_device*) ;

void FUNC_5(struct phy_device *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_4->irq, ((void*)0), VAR_3,
       VAR_0 | VAR_1,
       FUNC_2(VAR_4), VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_4, "Error %d requesting IRQ %d, falling back to polling\n",
       VAR_5, VAR_4->irq);
  VAR_4->irq = VAR_2;
 } else {
  if (FUNC_0(VAR_4)) {
   FUNC_3(VAR_4, "Can't enable interrupt, falling back to polling\n");
   FUNC_1(VAR_4);
   VAR_4->irq = VAR_2;
  }
 }
}
