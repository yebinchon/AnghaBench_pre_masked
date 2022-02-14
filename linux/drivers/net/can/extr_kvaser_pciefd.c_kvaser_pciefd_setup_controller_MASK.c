
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrlmode; } ;
struct kvaser_pciefd_can {int lock; scalar_t__ reg_base; TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct kvaser_pciefd_can *VAR_11)
{
 u32 VAR_12;
 unsigned long VAR_13;

 FUNC_2(&VAR_11->lock, VAR_13);

 VAR_12 = FUNC_0(VAR_11->reg_base + VAR_9);
 if (VAR_11->can.ctrlmode & VAR_0) {
  VAR_12 &= ~VAR_4;
  if (VAR_11->can.ctrlmode & VAR_1)
   VAR_12 |= VAR_8;
  else
   VAR_12 &= ~VAR_8;
 } else {
  VAR_12 |= VAR_4;
  VAR_12 &= ~VAR_8;
 }

 if (VAR_11->can.ctrlmode & VAR_2)
  VAR_12 |= VAR_7;

 VAR_12 |= VAR_5;
 VAR_12 |= VAR_6;

 VAR_12 &= ~VAR_3;
 VAR_12 &= ~VAR_10;
 FUNC_1(VAR_12, VAR_11->reg_base + VAR_9);

 FUNC_3(&VAR_11->lock, VAR_13);
}
