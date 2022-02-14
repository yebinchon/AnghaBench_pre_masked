
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dwc2_hsotg_ep {int desc_list_dma; scalar_t__ dir_in; int index; } ;
struct dwc2_hsotg {int dev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (struct dwc2_hsotg_ep*,int ,int ) ;
 int FUNC_9 (struct dwc2_hsotg*,struct dwc2_hsotg_ep*) ;
 int FUNC_10 (struct dwc2_hsotg*,int) ;
 int FUNC_11 (struct dwc2_hsotg*,int,int) ;
 scalar_t__ FUNC_12 (struct dwc2_hsotg*) ;

__attribute__((used)) static void FUNC_13(struct dwc2_hsotg *VAR_3,
       struct dwc2_hsotg_ep *VAR_4)
{
 u32 VAR_5;
 u8 VAR_6 = VAR_4->index;
 u32 VAR_7 = VAR_4->dir_in ? FUNC_0(VAR_6) : FUNC_2(VAR_6);
 u32 VAR_8 = VAR_4->dir_in ? FUNC_1(VAR_6) : FUNC_3(VAR_6);

 if (VAR_4->dir_in)
  FUNC_7(VAR_3->dev, "Sending zero-length packet on ep%d\n",
   VAR_6);
 else
  FUNC_7(VAR_3->dev, "Receiving zero-length packet on ep%d\n",
   VAR_6);
 if (FUNC_12(VAR_3)) {

  dma_addr_t VAR_9 = VAR_4->desc_list_dma;

  if (!VAR_6)
   FUNC_9(VAR_3, VAR_4);

  FUNC_8(VAR_4, VAR_9, 0);
 } else {
  FUNC_11(VAR_3, FUNC_4(1) | FUNC_5(1) |
       FUNC_6(0),
       VAR_8);
 }

 VAR_5 = FUNC_10(VAR_3, VAR_7);
 VAR_5 |= VAR_0;
 VAR_5 |= VAR_1;
 VAR_5 |= VAR_2;
 FUNC_11(VAR_3, VAR_5, VAR_7);
}
