
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ice_ring {TYPE_2__* q_vector; TYPE_1__* netdev; } ;
struct TYPE_4__ {int napi; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_3(struct ice_ring *VAR_3, struct sk_buff *VAR_4, u16 VAR_5)
{
 if ((VAR_3->netdev->features & VAR_1) &&
     (VAR_5 & VAR_2))
  FUNC_0(VAR_4, FUNC_1(VAR_0), VAR_5);
 FUNC_2(&VAR_3->q_vector->napi, VAR_4);
}
