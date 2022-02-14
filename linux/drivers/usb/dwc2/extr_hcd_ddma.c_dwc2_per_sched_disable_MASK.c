
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct dwc2_hsotg *VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;

 FUNC_3(&VAR_2->lock, VAR_4);

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (!(VAR_3 & VAR_1)) {

  FUNC_4(&VAR_2->lock, VAR_4);
  return;
 }

 VAR_3 &= ~VAR_1;
 FUNC_0(VAR_2->dev, "Disabling Periodic schedule\n");
 FUNC_2(VAR_2, VAR_3, VAR_0);

 FUNC_4(&VAR_2->lock, VAR_4);
}
