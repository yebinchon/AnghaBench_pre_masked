
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; int data; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct bnad_rx_unmap {TYPE_2__ vector; int * skb; } ;
struct bnad {int netdev; TYPE_1__* pcidev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void
FUNC_5(struct bnad *VAR_2, struct sk_buff *VAR_3,
    struct bnad_rx_unmap *VAR_4, u32 VAR_5)
{
 FUNC_3(VAR_3->data);

 FUNC_1(&VAR_2->pcidev->dev,
   FUNC_0(&VAR_4->vector, VAR_1),
   VAR_4->vector.len, VAR_0);

 FUNC_4(VAR_3, VAR_5);
 VAR_3->protocol = FUNC_2(VAR_3, VAR_2->netdev);

 VAR_4->skb = ((void*)0);
 VAR_4->vector.len = 0;
}
