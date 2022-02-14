
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct TYPE_2__ {unsigned int size; scalar_t__ alg; unsigned int** mapping; size_t mapping_sel; } ;
struct xenvif {TYPE_1__ hash; int num_queues; } ;
struct sk_buff {int dummy; } ;
struct net_device {unsigned int real_num_tx_queues; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (struct net_device*,struct sk_buff*,int *) ;
 struct xenvif* FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct xenvif*,struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_5(struct net_device *VAR_1, struct sk_buff *VAR_2,
          struct net_device *VAR_3)
{
 struct xenvif *VAR_4 = FUNC_2(VAR_1);
 unsigned int VAR_5 = VAR_4->hash.size;
 unsigned int VAR_6;



 VAR_6 = FUNC_0(VAR_4->num_queues);
 if (VAR_6 < 1)
  return 0;

 if (VAR_4->hash.alg == VAR_0)
  return FUNC_1(VAR_1, VAR_2, ((void*)0)) %
         VAR_1->real_num_tx_queues;

 FUNC_4(VAR_4, VAR_2);

 if (VAR_5 == 0)
  return FUNC_3(VAR_2) % VAR_1->real_num_tx_queues;

 return VAR_4->hash.mapping[VAR_4->hash.mapping_sel]
    [FUNC_3(VAR_2) % VAR_5];
}
