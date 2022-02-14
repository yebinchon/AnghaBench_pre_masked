
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
struct dwc2_qh {scalar_t__ ep_type; scalar_t__ dev_speed; int * n_bytes; int * desc_list; int desc_list_sz; int desc_list_dma; } ;
struct dwc2_hsotg {int dev; struct kmem_cache* desc_gen_cache; struct kmem_cache* desc_hsisoc_cache; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kmem_cache*,int *) ;

__attribute__((used)) static void FUNC_3(struct dwc2_hsotg *VAR_3, struct dwc2_qh *VAR_4)
{
 struct kmem_cache *VAR_5;

 if (VAR_4->ep_type == VAR_1 &&
     VAR_4->dev_speed == VAR_2)
  VAR_5 = VAR_3->desc_hsisoc_cache;
 else
  VAR_5 = VAR_3->desc_gen_cache;

 if (VAR_4->desc_list) {
  FUNC_0(VAR_3->dev, VAR_4->desc_list_dma,
     VAR_4->desc_list_sz, VAR_0);
  FUNC_2(VAR_5, VAR_4->desc_list);
  VAR_4->desc_list = ((void*)0);
 }

 FUNC_1(VAR_4->n_bytes);
 VAR_4->n_bytes = ((void*)0);
}
