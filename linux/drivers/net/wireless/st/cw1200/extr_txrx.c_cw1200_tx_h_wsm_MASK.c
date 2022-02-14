
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void* id; void* len; } ;
struct wsm_tx {int queue_id; TYPE_3__ hdr; } ;
struct TYPE_7__ {int offset; } ;
struct cw1200_txinfo {int queue; TYPE_4__* skb; TYPE_2__ txpriv; } ;
struct cw1200_common {TYPE_1__* hw; } ;
struct TYPE_9__ {int len; } ;
struct TYPE_6__ {int wiphy; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct wsm_tx*,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 struct wsm_tx* FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct wsm_tx *
FUNC_6(struct cw1200_common *VAR_0,
  struct cw1200_txinfo *VAR_1)
{
 struct wsm_tx *VAR_2;

 if (FUNC_2(VAR_1->skb) < sizeof(struct wsm_tx)) {
  FUNC_4(VAR_0->hw->wiphy,
     "Bug: no space allocated for WSM header. headroom: %d\n",
     FUNC_2(VAR_1->skb));
  return ((void*)0);
 }

 VAR_2 = FUNC_3(VAR_1->skb, sizeof(struct wsm_tx));
 VAR_1->txpriv.offset += sizeof(struct wsm_tx);
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->hdr.len = FUNC_0(VAR_1->skb->len);
 VAR_2->hdr.id = FUNC_0(0x0004);
 VAR_2->queue_id = FUNC_5(VAR_1->queue);
 return VAR_2;
}
