
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ len; int protocol; } ;
struct netfront_stats {int syncp; int bytes; int packets; } ;
struct netfront_queue {int napi; TYPE_2__* info; } ;
struct TYPE_9__ {int pull_to; } ;
struct TYPE_6__ {int rx_errors; } ;
struct TYPE_8__ {TYPE_1__ stats; } ;
struct TYPE_7__ {TYPE_3__* netdev; int rx_stats; } ;


 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,TYPE_3__*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct netfront_stats* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct netfront_queue *VAR_0,
     struct sk_buff_head *VAR_1)
{
 struct netfront_stats *VAR_2 = FUNC_9(VAR_0->info->rx_stats);
 int VAR_3 = 0;
 struct sk_buff *VAR_4;

 while ((VAR_4 = FUNC_2(VAR_1)) != ((void*)0)) {
  int VAR_5 = FUNC_0(VAR_4)->pull_to;

  if (VAR_5 > FUNC_7(VAR_4))
   FUNC_1(VAR_4, VAR_5 - FUNC_7(VAR_4));


  VAR_4->protocol = FUNC_4(VAR_4, VAR_0->info->netdev);
  FUNC_8(VAR_4);

  if (FUNC_3(VAR_0->info->netdev, VAR_4)) {
   FUNC_5(VAR_4);
   VAR_3++;
   VAR_0->info->netdev->stats.rx_errors++;
   continue;
  }

  FUNC_10(&VAR_2->syncp);
  VAR_2->packets++;
  VAR_2->bytes += VAR_4->len;
  FUNC_11(&VAR_2->syncp);


  FUNC_6(&VAR_0->napi, VAR_4);
 }

 return VAR_3;
}
