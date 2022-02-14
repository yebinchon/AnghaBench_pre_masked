
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int req_prod_pvt; } ;
struct netfront_queue {TYPE_2__ rx; void** grant_rx_ref; struct sk_buff** rx_skbs; } ;
typedef void* grant_ref_t ;
struct TYPE_3__ {int id; void* gref; } ;


 int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct netfront_queue *VAR_0, struct sk_buff *VAR_1,
    grant_ref_t VAR_2)
{
 int VAR_3 = FUNC_2(VAR_0->rx.req_prod_pvt);

 FUNC_0(VAR_0->rx_skbs[VAR_3]);
 VAR_0->rx_skbs[VAR_3] = VAR_1;
 VAR_0->grant_rx_ref[VAR_3] = VAR_2;
 FUNC_1(&VAR_0->rx, VAR_0->rx.req_prod_pvt)->id = VAR_3;
 FUNC_1(&VAR_0->rx, VAR_0->rx.req_prod_pvt)->gref = VAR_2;
 VAR_0->rx.req_prod_pvt++;
}
