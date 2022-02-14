
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int frame_list_dma; int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct dwc2_hsotg *VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_4->lock, VAR_7);

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 if (VAR_6 & VAR_2) {

  FUNC_4(&VAR_4->lock, VAR_7);
  return;
 }

 FUNC_2(VAR_4, VAR_4->frame_list_dma, VAR_3);

 VAR_6 &= ~VAR_1;
 VAR_6 |= VAR_5 | VAR_2;
 FUNC_0(VAR_4->dev, "Enabling Periodic schedule\n");
 FUNC_2(VAR_4, VAR_6, VAR_0);

 FUNC_4(&VAR_4->lock, VAR_7);
}
