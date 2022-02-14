
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int_gl; scalar_t__ gl_adapt_enable; } ;
struct hns3_enet_ring_group {TYPE_1__ coal; } ;
struct hns3_enet_tqp_vector {scalar_t__ last_jiffies; struct hns3_enet_ring_group tx_group; struct hns3_enet_ring_group rx_group; } ;


 int FUNC_0 (struct hns3_enet_ring_group*) ;
 int FUNC_1 (struct hns3_enet_tqp_vector*,int ) ;
 int FUNC_2 (struct hns3_enet_tqp_vector*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct hns3_enet_tqp_vector *VAR_1)
{
 struct hns3_enet_ring_group *VAR_2 = &VAR_1->rx_group;
 struct hns3_enet_ring_group *VAR_3 = &VAR_1->tx_group;
 bool VAR_4, VAR_5;


 if (FUNC_4(VAR_0,
   VAR_1->last_jiffies + FUNC_3(1000)))
  return;

 if (VAR_2->coal.gl_adapt_enable) {
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4)
   FUNC_1(VAR_1,
             VAR_2->coal.int_gl);
 }

 if (VAR_3->coal.gl_adapt_enable) {
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5)
   FUNC_2(VAR_1,
             VAR_3->coal.int_gl);
 }

 VAR_1->last_jiffies = VAR_0;
}
