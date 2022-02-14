
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dev_addr; } ;
struct fm10k_l2_accel {int size; scalar_t__ dglort; scalar_t__ count; struct net_device** macvlan; } ;
struct TYPE_5__ {int (* configure_dglort_map ) (struct fm10k_hw*,struct fm10k_dglort_cfg*) ;int (* update_xcast_mode ) (struct fm10k_hw*,scalar_t__,int ) ;} ;
struct TYPE_6__ {scalar_t__ default_vid; TYPE_2__ ops; } ;
struct fm10k_hw {TYPE_3__ mac; } ;
struct fm10k_intfc {int glort; TYPE_1__* ring_feature; struct fm10k_hw hw; int l2_accel; } ;
struct fm10k_dglort_cfg {int inner_rss; void* shared_l; int glort; void* pc_l; void* rss_l; int idx; int member_0; } ;
struct TYPE_4__ {int mask; } ;


 int VAR_0 ;
 struct fm10k_l2_accel* FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct fm10k_intfc*,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct fm10k_intfc*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct fm10k_intfc*) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int FUNC_6 (struct fm10k_intfc*) ;
 int FUNC_7 (struct fm10k_intfc*,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_8 (struct fm10k_l2_accel*,int ) ;
 struct fm10k_intfc* FUNC_9 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_10 (struct fm10k_hw*,scalar_t__,int ) ;
 int FUNC_11 (struct fm10k_hw*,struct fm10k_dglort_cfg*) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_6, void *VAR_7)
{
 struct fm10k_intfc *VAR_8 = FUNC_9(VAR_6);
 struct fm10k_l2_accel *VAR_9 = FUNC_0(VAR_8->l2_accel);
 struct fm10k_dglort_cfg VAR_10 = { 0 };
 struct fm10k_hw *VAR_11 = &VAR_8->hw;
 struct net_device *VAR_12 = VAR_7;
 u16 VAR_13, VAR_14;
 int VAR_15;

 if (!VAR_9)
  return;


 for (VAR_15 = 0; VAR_15 < VAR_9->size; VAR_15++) {
  if (VAR_9->macvlan[VAR_15] == VAR_12)
   break;
 }


 if (VAR_15 == VAR_9->size)
  return;


 FUNC_5(VAR_8);

 VAR_14 = VAR_9->dglort + 1 + VAR_15;

 if (FUNC_4(VAR_8))
  VAR_11->mac.ops.update_xcast_mode(VAR_11, VAR_14,
           VAR_0);

 FUNC_7(VAR_8, VAR_14, VAR_12->dev_addr,
    VAR_11->mac.default_vid, 0);

 for (VAR_13 = FUNC_3(VAR_8, 0);
      VAR_13 < VAR_3;
      VAR_13 = FUNC_3(VAR_8, VAR_13))
  FUNC_7(VAR_8, VAR_14, VAR_12->dev_addr,
     VAR_13, 0);

 FUNC_6(VAR_8);


 VAR_9->macvlan[VAR_15] = ((void*)0);
 VAR_9->count--;


 VAR_10.idx = VAR_4;
 VAR_10.inner_rss = 1;
 VAR_10.rss_l = FUNC_1(VAR_8->ring_feature[VAR_2].mask);
 VAR_10.pc_l = FUNC_1(VAR_8->ring_feature[VAR_1].mask);
 VAR_10.glort = VAR_8->glort;
 VAR_10.shared_l = FUNC_1(VAR_9->size);
 VAR_11->mac.ops.configure_dglort_map(VAR_11, &VAR_10);


 if (VAR_9->count == 0) {
  FUNC_2(VAR_8, ((void*)0));
  FUNC_8(VAR_9, VAR_5);
 }
}
