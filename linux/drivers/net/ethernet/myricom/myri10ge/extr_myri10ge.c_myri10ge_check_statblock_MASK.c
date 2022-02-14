
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct myri10ge_priv {unsigned int link_state; void* rdma_tags_available; int down_wq; int down_cnt; int dev; int link_changes; TYPE_1__* ss; } ;
struct mcp_irq_data {scalar_t__ link_down; int rdma_tags_available; int link_up; int stats_updated; } ;
struct TYPE_2__ {struct mcp_irq_data* fw_stats; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct myri10ge_priv*,int ,int ,char*,...) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct myri10ge_priv *VAR_3)
{
 struct mcp_irq_data *VAR_4 = VAR_3->ss[0].fw_stats;

 if (FUNC_5(VAR_4->stats_updated)) {
  unsigned VAR_5 = FUNC_4(VAR_4->link_up);
  if (VAR_3->link_state != VAR_5) {
   VAR_3->link_state = VAR_5;

   if (VAR_3->link_state == VAR_1) {
    FUNC_3(VAR_3, VAR_2, VAR_3->dev, "link up\n");
    FUNC_2(VAR_3->dev);
    VAR_3->link_changes++;
   } else {
    FUNC_3(VAR_3, VAR_2, VAR_3->dev, "link %s\n",
        (VAR_5 == VAR_0 ?
         "mismatch (Myrinet detected)" :
         "down"));
    FUNC_1(VAR_3->dev);
    VAR_3->link_changes++;
   }
  }
  if (VAR_3->rdma_tags_available !=
      FUNC_4(VAR_4->rdma_tags_available)) {
   VAR_3->rdma_tags_available =
       FUNC_4(VAR_4->rdma_tags_available);
   FUNC_0(VAR_3->dev, "RDMA timed out! %d tags left\n",
        VAR_3->rdma_tags_available);
  }
  VAR_3->down_cnt += VAR_4->link_down;
  if (VAR_4->link_down)
   FUNC_6(&VAR_3->down_wq);
 }
}
