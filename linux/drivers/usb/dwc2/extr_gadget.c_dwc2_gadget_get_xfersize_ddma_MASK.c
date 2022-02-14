
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct dwc2_hsotg_ep {int desc_count; struct dwc2_dma_desc* desc_list; struct dwc2_hsotg* parent; } ;
struct dwc2_hsotg {int dev; } ;
struct dwc2_dma_desc {unsigned int status; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct dwc2_hsotg_ep *VAR_3)
{
 struct dwc2_hsotg *VAR_4 = VAR_3->parent;
 unsigned int VAR_5 = 0;
 struct dwc2_dma_desc *VAR_6 = VAR_3->desc_list;
 int VAR_7;
 u32 VAR_8;

 if (!VAR_6)
  return -VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_3->desc_count; ++VAR_7) {
  VAR_8 = VAR_6->status;
  VAR_5 += VAR_8 & VAR_0;

  if (VAR_8 & VAR_1)
   FUNC_0(VAR_4->dev, "descriptor %d closed with %x\n",
    VAR_7, VAR_8 & VAR_1);
  VAR_6++;
 }

 return VAR_5;
}
