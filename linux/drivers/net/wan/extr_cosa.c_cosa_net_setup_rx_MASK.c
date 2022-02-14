
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct channel_data {int * rx_skb; TYPE_2__* netdev; int name; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (int *,int) ;

__attribute__((used)) static char *FUNC_5(struct channel_data *VAR_0, int VAR_1)
{




 FUNC_1(VAR_0->rx_skb);
 VAR_0->rx_skb = FUNC_0(VAR_1);
 if (VAR_0->rx_skb == ((void*)0)) {
  FUNC_3("%s: Memory squeeze, dropping packet\n", VAR_0->name);
  VAR_0->netdev->stats.rx_dropped++;
  return ((void*)0);
 }
 FUNC_2(VAR_0->netdev);
 return FUNC_4(VAR_0->rx_skb, VAR_1);
}
