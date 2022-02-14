
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {int next_to_clean; int desc_num; struct hns3_desc_cb* desc_cb; } ;
struct hns3_desc_cb {scalar_t__ type; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hns3_enet_ring*,int) ;
 int FUNC_1 (struct hns3_desc_cb*) ;
 int FUNC_2 (int*,int) ;

__attribute__((used)) static void FUNC_3(struct hns3_enet_ring *VAR_1, int VAR_2,
      int *VAR_3, int *VAR_4)
{
 int VAR_5 = VAR_1->next_to_clean;
 struct hns3_desc_cb *VAR_6;

 while (VAR_2 != VAR_5) {
  VAR_6 = &VAR_1->desc_cb[VAR_5];
  (*VAR_4) += (VAR_6->type == VAR_0);
  (*VAR_3) += VAR_6->length;

  FUNC_0(VAR_1, VAR_5);

  if (++VAR_5 == VAR_1->desc_num)
   VAR_5 = 0;


  FUNC_1(&VAR_1->desc_cb[VAR_5]);
 }




 FUNC_2(&VAR_1->next_to_clean, VAR_5);
}
