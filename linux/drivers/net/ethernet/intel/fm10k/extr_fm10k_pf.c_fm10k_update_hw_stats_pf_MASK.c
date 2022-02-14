
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int count; } ;
struct fm10k_hw_stats {int stats_idx; int q; TYPE_2__ nodesc_drop; TYPE_2__ loopback_drop; TYPE_2__ vlan_drop; TYPE_2__ xec; TYPE_2__ um; TYPE_2__ ca; TYPE_2__ ur; TYPE_2__ timeout; } ;
struct TYPE_4__ {int max_queues; } ;
struct fm10k_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (struct fm10k_hw*,int ,TYPE_2__*) ;
 int FUNC_2 (struct fm10k_hw*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct fm10k_hw*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct fm10k_hw *VAR_10,
         struct fm10k_hw_stats *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20, VAR_21;


 VAR_20 = FUNC_2(VAR_10, FUNC_0(0));


 do {
  VAR_12 = FUNC_1(VAR_10, VAR_3,
        &VAR_11->timeout);
  VAR_13 = FUNC_1(VAR_10, VAR_5, &VAR_11->ur);
  VAR_14 = FUNC_1(VAR_10, VAR_0, &VAR_11->ca);
  VAR_15 = FUNC_1(VAR_10, VAR_4, &VAR_11->um);
  VAR_16 = FUNC_1(VAR_10, VAR_7, &VAR_11->xec);
  VAR_17 = FUNC_1(VAR_10, VAR_6,
          &VAR_11->vlan_drop);
  VAR_18 =
   FUNC_1(VAR_10,
      VAR_1,
      &VAR_11->loopback_drop);
  VAR_19 = FUNC_1(VAR_10,
            VAR_2,
            &VAR_11->nodesc_drop);


  VAR_21 = VAR_20;
  VAR_20 = FUNC_2(VAR_10, FUNC_0(0));
 } while ((VAR_20 ^ VAR_21) & VAR_9);


 VAR_20 &= VAR_9;
 VAR_20 |= VAR_8;


 if (VAR_11->stats_idx == VAR_20) {
  VAR_11->timeout.count += VAR_12;
  VAR_11->ur.count += VAR_13;
  VAR_11->ca.count += VAR_14;
  VAR_11->um.count += VAR_15;
  VAR_11->xec.count += VAR_16;
  VAR_11->vlan_drop.count += VAR_17;
  VAR_11->loopback_drop.count += VAR_18;
  VAR_11->nodesc_drop.count += VAR_19;
 }


 FUNC_3(&VAR_11->timeout, VAR_12);
 FUNC_3(&VAR_11->ur, VAR_13);
 FUNC_3(&VAR_11->ca, VAR_14);
 FUNC_3(&VAR_11->um, VAR_15);
 FUNC_3(&VAR_11->xec, VAR_16);
 FUNC_3(&VAR_11->vlan_drop, VAR_17);
 FUNC_3(&VAR_11->loopback_drop, VAR_18);
 FUNC_3(&VAR_11->nodesc_drop, VAR_19);
 VAR_11->stats_idx = VAR_20;


 FUNC_4(VAR_10, VAR_11->q, 0, VAR_10->mac.max_queues);
}
