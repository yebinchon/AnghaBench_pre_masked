
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {int lock; int * frame_list; int frame_list_sz; int frame_list_dma; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct dwc2_hsotg *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);

 if (!VAR_1->frame_list) {
  FUNC_3(&VAR_1->lock, VAR_2);
  return;
 }

 FUNC_0(VAR_1->dev, VAR_1->frame_list_dma,
    VAR_1->frame_list_sz, VAR_0);

 FUNC_1(VAR_1->frame_list);
 VAR_1->frame_list = ((void*)0);

 FUNC_3(&VAR_1->lock, VAR_2);
}
