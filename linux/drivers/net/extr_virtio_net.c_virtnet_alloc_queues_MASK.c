
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct virtnet_info {int max_queue_pairs; TYPE_4__* ctrl; TYPE_4__* sq; TYPE_2__* rq; int dev; int refill; } ;
struct TYPE_8__ {int syncp; } ;
struct TYPE_9__ {TYPE_3__ stats; int sg; int napi; } ;
struct TYPE_6__ {int syncp; } ;
struct TYPE_7__ {TYPE_1__ stats; int mrg_avg_pkt_len; int sg; int napi; int * pages; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (int ,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct virtnet_info *VAR_7)
{
 int VAR_8;

 VAR_7->ctrl = FUNC_5(sizeof(*VAR_7->ctrl), VAR_1);
 if (!VAR_7->ctrl)
  goto err_ctrl;
 VAR_7->sq = FUNC_3(VAR_7->max_queue_pairs, sizeof(*VAR_7->sq), VAR_1);
 if (!VAR_7->sq)
  goto err_sq;
 VAR_7->rq = FUNC_3(VAR_7->max_queue_pairs, sizeof(*VAR_7->rq), VAR_1);
 if (!VAR_7->rq)
  goto err_rq;

 FUNC_1(&VAR_7->refill, VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_7->max_queue_pairs; VAR_8++) {
  VAR_7->rq[VAR_8].pages = ((void*)0);
  FUNC_6(VAR_7->dev, &VAR_7->rq[VAR_8].napi, VAR_5,
          VAR_3);
  FUNC_7(VAR_7->dev, &VAR_7->sq[VAR_8].napi, VAR_6,
      VAR_2 ? VAR_3 : 0);

  FUNC_8(VAR_7->rq[VAR_8].sg, FUNC_0(VAR_7->rq[VAR_8].sg));
  FUNC_2(&VAR_7->rq[VAR_8].mrg_avg_pkt_len);
  FUNC_8(VAR_7->sq[VAR_8].sg, FUNC_0(VAR_7->sq[VAR_8].sg));

  FUNC_9(&VAR_7->rq[VAR_8].stats.syncp);
  FUNC_9(&VAR_7->sq[VAR_8].stats.syncp);
 }

 return 0;

err_rq:
 FUNC_4(VAR_7->sq);
err_sq:
 FUNC_4(VAR_7->ctrl);
err_ctrl:
 return -VAR_0;
}
