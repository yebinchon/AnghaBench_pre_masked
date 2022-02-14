
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; } ;
struct bnad_rx_unmap {TYPE_2__ vector; int * skb; } ;
struct bnad {TYPE_1__* pcidev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct bnad *VAR_2, struct bnad_rx_unmap *VAR_3)
{
 if (!VAR_3->skb)
  return;

 FUNC_3(&VAR_2->pcidev->dev,
   FUNC_1(&VAR_3->vector, VAR_1),
   VAR_3->vector.len, VAR_0);
 FUNC_0(VAR_3->skb);
 VAR_3->skb = ((void*)0);
 FUNC_2(&VAR_3->vector, VAR_1, 0);
 VAR_3->vector.len = 0;
}
