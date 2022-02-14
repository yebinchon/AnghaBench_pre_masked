
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sw_err_cnt; } ;
struct hns3_enet_ring {size_t next_to_use; size_t next_to_clean; scalar_t__ pending_buf; int * skb; TYPE_5__* tqp; int syncp; TYPE_2__ stats; TYPE_1__* desc_cb; } ;
struct hns3_desc_cb {int dummy; } ;
struct TYPE_10__ {TYPE_4__* handle; } ;
struct TYPE_8__ {int netdev; } ;
struct TYPE_9__ {TYPE_3__ kinfo; } ;
struct TYPE_6__ {int reuse_flag; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hns3_enet_ring*,size_t,struct hns3_desc_cb*) ;
 int FUNC_2 (struct hns3_enet_ring*,struct hns3_desc_cb*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_4 (struct hns3_enet_ring*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hns3_enet_ring *VAR_1)
{
 struct hns3_desc_cb VAR_2;
 int VAR_3;

 while (VAR_1->next_to_use != VAR_1->next_to_clean) {




  if (!VAR_1->desc_cb[VAR_1->next_to_use].reuse_flag) {
   VAR_3 = FUNC_2(VAR_1, &VAR_2);
   if (VAR_3) {
    FUNC_5(&VAR_1->syncp);
    VAR_1->stats.sw_err_cnt++;
    FUNC_6(&VAR_1->syncp);



    FUNC_3(VAR_1->tqp->handle->kinfo.netdev,
         "reserve buffer map failed, ret = %d\n",
         VAR_3);
    return VAR_3;
   }
   FUNC_1(VAR_1, VAR_1->next_to_use, &VAR_2);
  }
  FUNC_4(VAR_1, VAR_0);
 }


 if (VAR_1->skb) {
  FUNC_0(VAR_1->skb);
  VAR_1->skb = ((void*)0);
  VAR_1->pending_buf = 0;
 }

 return 0;
}
