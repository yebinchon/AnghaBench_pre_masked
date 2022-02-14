
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns3_enet_ring {unsigned int desc_num; int next_to_use; TYPE_1__* desc_cb; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int dma; int length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct hns3_enet_ring*,int ) ;
 struct device* FUNC_3 (struct hns3_enet_ring*) ;

__attribute__((used)) static void FUNC_4(struct hns3_enet_ring *VAR_3, int VAR_4)
{
 struct device *VAR_5 = FUNC_3(VAR_3);
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->desc_num; VAR_6++) {

  if (VAR_3->next_to_use == VAR_4)
   break;


  FUNC_2(VAR_3, VAR_2);


  if (VAR_3->desc_cb[VAR_3->next_to_use].type == VAR_0)
   FUNC_1(VAR_5,
      VAR_3->desc_cb[VAR_3->next_to_use].dma,
     VAR_3->desc_cb[VAR_3->next_to_use].length,
     VAR_1);
  else if (VAR_3->desc_cb[VAR_3->next_to_use].length)
   FUNC_0(VAR_5,
           VAR_3->desc_cb[VAR_3->next_to_use].dma,
           VAR_3->desc_cb[VAR_3->next_to_use].length,
           VAR_1);

  VAR_3->desc_cb[VAR_3->next_to_use].length = 0;
  VAR_3->desc_cb[VAR_3->next_to_use].dma = 0;
 }
}
