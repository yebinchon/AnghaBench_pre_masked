
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct can_bittiming {int brp; int sjw; int prop_seg; int phase_seg1; int phase_seg2; } ;
struct TYPE_2__ {struct can_bittiming data_bittiming; struct can_bittiming bittiming; } ;
struct ifi_canfd_priv {scalar_t__ base; TYPE_1__ can; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ifi_canfd_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_9)
{
 struct ifi_canfd_priv *VAR_10 = FUNC_0(VAR_9);
 const struct can_bittiming *VAR_11 = &VAR_10->can.bittiming;
 const struct can_bittiming *VAR_12 = &VAR_10->can.data_bittiming;
 u16 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


 VAR_13 = VAR_11->brp - 2;
 VAR_14 = VAR_11->sjw - 1;
 VAR_15 = VAR_11->prop_seg + VAR_11->phase_seg1 - 1;
 VAR_16 = VAR_11->phase_seg2 - 2;
 FUNC_1((VAR_16 << VAR_8) |
        (VAR_15 << VAR_7) |
        (VAR_13 << VAR_5) |
        (VAR_14 << VAR_6),
        VAR_10->base + VAR_4);


 VAR_13 = VAR_12->brp - 2;
 VAR_14 = VAR_12->sjw - 1;
 VAR_15 = VAR_12->prop_seg + VAR_12->phase_seg1 - 1;
 VAR_16 = VAR_12->phase_seg2 - 2;
 FUNC_1((VAR_16 << VAR_8) |
        (VAR_15 << VAR_7) |
        (VAR_13 << VAR_5) |
        (VAR_14 << VAR_6),
        VAR_10->base + VAR_0);


 VAR_17 = VAR_12->brp * (VAR_12->prop_seg + VAR_12->phase_seg1);
 VAR_17 &= VAR_3;
 FUNC_1(VAR_2 | VAR_17, VAR_10->base + VAR_1);
}
