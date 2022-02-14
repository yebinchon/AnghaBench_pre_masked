
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct can_bittiming {int phase_seg2; int prop_seg; int phase_seg1; int sjw; int brp; } ;
struct TYPE_2__ {struct can_bittiming bittiming; struct can_bittiming data_bittiming; } ;
struct kvaser_pciefd_can {int lock; scalar_t__ reg_base; TYPE_1__ can; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct kvaser_pciefd_can *VAR_8, bool VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;
 int VAR_14;
 struct can_bittiming *VAR_15;

 if (VAR_9)
  VAR_15 = &VAR_8->can.data_bittiming;
 else
  VAR_15 = &VAR_8->can.bittiming;

 VAR_12 = ((VAR_15->phase_seg2 - 1) & 0x1f) <<
        VAR_5 |
        (((VAR_15->prop_seg + VAR_15->phase_seg1) - 1) & 0x1ff) <<
        VAR_4 |
        ((VAR_15->sjw - 1) & 0xf) << VAR_3 |
        ((VAR_15->brp - 1) & 0x1fff);

 FUNC_3(&VAR_8->lock, VAR_13);
 VAR_10 = FUNC_0(VAR_8->reg_base + VAR_6);


 FUNC_1(VAR_10 | VAR_7,
    VAR_8->reg_base + VAR_6);


 VAR_14 = FUNC_2(VAR_8->reg_base + VAR_6,
     VAR_11, VAR_11 & VAR_7,
     0, 10);

 if (VAR_14) {
  FUNC_4(&VAR_8->lock, VAR_13);
  return -VAR_0;
 }

 if (VAR_9)
  FUNC_1(VAR_12, VAR_8->reg_base + VAR_1);
 else
  FUNC_1(VAR_12, VAR_8->reg_base + VAR_2);


 FUNC_1(VAR_10, VAR_8->reg_base + VAR_6);

 FUNC_4(&VAR_8->lock, VAR_13);
 return 0;
}
