
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kmem_cache {int dummy; } ;
struct dwc2_qh {scalar_t__ ep_type; scalar_t__ dev_speed; int desc_list_sz; int * desc_list; int desc_list_dma; int n_bytes; } ;
struct dwc2_hsotg {int dev; struct kmem_cache* desc_gen_cache; struct kmem_cache* desc_hsisoc_cache; } ;
struct dwc2_dma_desc {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct dwc2_qh*) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (struct kmem_cache*,int *) ;
 int * FUNC_5 (struct kmem_cache*,int) ;

__attribute__((used)) static int FUNC_6(struct dwc2_hsotg *VAR_6, struct dwc2_qh *VAR_7,
    gfp_t VAR_8)
{
 struct kmem_cache *VAR_9;

 if (VAR_7->ep_type == VAR_4 &&
     VAR_7->dev_speed == VAR_5)
  VAR_9 = VAR_6->desc_hsisoc_cache;
 else
  VAR_9 = VAR_6->desc_gen_cache;

 VAR_7->desc_list_sz = sizeof(struct dwc2_dma_desc) *
      FUNC_2(VAR_7);

 VAR_7->desc_list = FUNC_5(VAR_9, VAR_8 | VAR_3);
 if (!VAR_7->desc_list)
  return -VAR_2;

 VAR_7->desc_list_dma = FUNC_0(VAR_6->dev, VAR_7->desc_list,
        VAR_7->desc_list_sz,
        VAR_1);

 VAR_7->n_bytes = FUNC_3(FUNC_2(VAR_7), sizeof(u32), VAR_8);
 if (!VAR_7->n_bytes) {
  FUNC_1(VAR_6->dev, VAR_7->desc_list_dma,
     VAR_7->desc_list_sz,
     VAR_0);
  FUNC_4(VAR_9, VAR_7->desc_list);
  VAR_7->desc_list = ((void*)0);
  return -VAR_2;
 }

 return 0;
}
