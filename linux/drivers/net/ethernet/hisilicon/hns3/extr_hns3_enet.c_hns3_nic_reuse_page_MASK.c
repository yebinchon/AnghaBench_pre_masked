
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct hns3_enet_ring {size_t next_to_clean; struct hns3_desc* desc; } ;
struct hns3_desc_cb {scalar_t__ page_offset; int reuse_flag; int priv; } ;
struct TYPE_2__ {int size; } ;
struct hns3_desc {TYPE_1__ rx; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hns3_enet_ring*) ;
 scalar_t__ FUNC_2 (struct hns3_enet_ring*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int,int ,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_0, int VAR_1,
    struct hns3_enet_ring *VAR_2, int VAR_3,
    struct hns3_desc_cb *VAR_4)
{
 struct hns3_desc *VAR_5 = &VAR_2->desc[VAR_2->next_to_clean];
 int VAR_6 = FUNC_3(VAR_5->rx.size);
 u32 VAR_7 = FUNC_1(VAR_2);

 FUNC_7(VAR_0, VAR_1, VAR_4->priv, VAR_4->page_offset + VAR_3,
   VAR_6 - VAR_3, VAR_7);




 if (FUNC_8(FUNC_6(VAR_4->priv) != FUNC_4()) ||
     (!VAR_4->page_offset && FUNC_5(VAR_4->priv) > 1))
  return;


 VAR_4->page_offset += VAR_7;

 if (VAR_4->page_offset + VAR_7 <= FUNC_2(VAR_2)) {
  VAR_4->reuse_flag = 1;

  FUNC_0(VAR_4->priv);
 } else if (FUNC_5(VAR_4->priv) == 1) {
  VAR_4->reuse_flag = 1;
  VAR_4->page_offset = 0;
  FUNC_0(VAR_4->priv);
 }
}
