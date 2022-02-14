
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int hw_tcs; int flags; scalar_t__ atr_sample_rate; TYPE_2__ hw; TYPE_3__* ring_feature; } ;
struct TYPE_6__ {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (struct ixgbe_adapter*) ;

__attribute__((used)) static unsigned int FUNC_1(struct ixgbe_adapter *VAR_5)
{
 unsigned int VAR_6;
 u8 VAR_7 = VAR_5->hw_tcs;

 if (!(VAR_5->flags & VAR_0)) {

  VAR_6 = 1;
 } else if (VAR_5->flags & VAR_1) {

  VAR_6 = VAR_5->ring_feature[VAR_3].mask + 1;
 } else if (VAR_7 > 1) {

  if (VAR_5->hw.mac.type == VAR_4) {

   VAR_6 = 4;
  } else if (VAR_7 > 4) {

   VAR_6 = 8;
  } else {

   VAR_6 = 16;
  }
 } else if (VAR_5->atr_sample_rate) {

  VAR_6 = VAR_2;
 } else {

  VAR_6 = FUNC_0(VAR_5);
 }

 return VAR_6;
}
