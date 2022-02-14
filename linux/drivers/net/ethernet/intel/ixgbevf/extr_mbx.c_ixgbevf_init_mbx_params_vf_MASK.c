
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rsts; scalar_t__ acks; scalar_t__ reqs; scalar_t__ msgs_rx; scalar_t__ msgs_tx; } ;
struct ixgbe_mbx_info {TYPE_1__ stats; int size; int udelay; scalar_t__ timeout; } ;
struct ixgbe_hw {struct ixgbe_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static s32 FUNC_0(struct ixgbe_hw *VAR_2)
{
 struct ixgbe_mbx_info *VAR_3 = &VAR_2->mbx;




 VAR_3->timeout = 0;
 VAR_3->udelay = VAR_1;

 VAR_3->size = VAR_0;

 VAR_3->stats.msgs_tx = 0;
 VAR_3->stats.msgs_rx = 0;
 VAR_3->stats.reqs = 0;
 VAR_3->stats.acks = 0;
 VAR_3->stats.rsts = 0;

 return 0;
}
