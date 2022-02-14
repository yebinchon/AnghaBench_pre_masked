
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct bnx2x_fastpath {int napi; int rx_queue; } ;
struct bnx2x {int dev; } ;
struct TYPE_2__ {scalar_t__ gso_size; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2x*,struct sk_buff*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_2, struct bnx2x_fastpath *VAR_3,
          struct sk_buff *VAR_4)
{
 FUNC_4(VAR_4, VAR_3->rx_queue);
 FUNC_2(&VAR_3->napi, VAR_4);
}
