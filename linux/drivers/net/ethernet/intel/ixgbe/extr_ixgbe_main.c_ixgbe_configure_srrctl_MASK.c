
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ixgbe_ring {int state; TYPE_2__* xsk_umem; int reg_idx; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbe_adapter {TYPE_1__* ring_feature; struct ixgbe_hw hw; } ;
struct TYPE_5__ {int chunk_size_nohr; } ;
struct TYPE_4__ {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_12,
       struct ixgbe_ring *VAR_13)
{
 struct ixgbe_hw *VAR_14 = &VAR_12->hw;
 u32 VAR_15;
 u8 VAR_16 = VAR_13->reg_idx;

 if (VAR_14->mac.type == VAR_10) {
  u16 VAR_17 = VAR_12->ring_feature[VAR_7].mask;





  VAR_16 &= VAR_17;
 }


 VAR_15 = VAR_2 << VAR_3;


 if (VAR_13->xsk_umem) {
  u32 VAR_18 = VAR_13->xsk_umem->chunk_size_nohr -
      VAR_8;
  if (VAR_14->mac.type != VAR_11)
   VAR_15 |= VAR_6 >> VAR_4;
  else
   VAR_15 |= VAR_18 >> VAR_4;
 } else if (FUNC_2(VAR_9, &VAR_13->state)) {
  VAR_15 |= VAR_1 >> VAR_4;
 } else {
  VAR_15 |= VAR_0 >> VAR_4;
 }


 VAR_15 |= VAR_5;

 FUNC_1(VAR_14, FUNC_0(VAR_16), VAR_15);
}
