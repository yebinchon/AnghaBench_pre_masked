
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int non_reuse_pg; int sw_err_cnt; int reuse_pg_cnt; } ;
struct hns3_enet_ring {size_t next_to_use; TYPE_4__* tqp; int syncp; TYPE_3__ stats; TYPE_2__* tqp_vector; struct hns3_desc_cb* desc_cb; } ;
struct hns3_desc_cb {scalar_t__ reuse_flag; } ;
struct TYPE_8__ {scalar_t__ io_base; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {TYPE_1__ napi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hns3_enet_ring*,size_t,struct hns3_desc_cb*) ;
 int FUNC_1 (struct hns3_enet_ring*,struct hns3_desc_cb*) ;
 int FUNC_2 (struct hns3_enet_ring*,size_t) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (struct hns3_enet_ring*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct hns3_enet_ring *VAR_2,
          int VAR_3)
{
 struct hns3_desc_cb *VAR_4;
 struct hns3_desc_cb VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_4 = &VAR_2->desc_cb[VAR_2->next_to_use];
  if (VAR_4->reuse_flag) {
   FUNC_5(&VAR_2->syncp);
   VAR_2->stats.reuse_pg_cnt++;
   FUNC_6(&VAR_2->syncp);

   FUNC_2(VAR_2, VAR_2->next_to_use);
  } else {
   VAR_7 = FUNC_1(VAR_2, &VAR_5);
   if (VAR_7) {
    FUNC_5(&VAR_2->syncp);
    VAR_2->stats.sw_err_cnt++;
    FUNC_6(&VAR_2->syncp);

    FUNC_3(VAR_2->tqp_vector->napi.dev,
         "alloc rx buffer failed: %d\n",
         VAR_7);
    break;
   }
   FUNC_0(VAR_2, VAR_2->next_to_use, &VAR_5);

   FUNC_5(&VAR_2->syncp);
   VAR_2->stats.non_reuse_pg++;
   FUNC_6(&VAR_2->syncp);
  }

  FUNC_4(VAR_2, VAR_1);
 }

 FUNC_7();
 FUNC_8(VAR_6, VAR_2->tqp->io_base + VAR_0);
}
