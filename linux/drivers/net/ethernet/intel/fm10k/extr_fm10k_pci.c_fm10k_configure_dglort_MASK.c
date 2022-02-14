
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int (* configure_dglort_map ) (struct fm10k_hw*,struct fm10k_dglort_cfg*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct fm10k_hw {TYPE_4__ mac; } ;
struct fm10k_intfc {int* rssrk; int* reta; int glort_count; TYPE_2__* l2_accel; TYPE_1__* ring_feature; scalar_t__ glort; scalar_t__ num_rx_queues; int flags; struct fm10k_hw hw; } ;
struct fm10k_dglort_cfg {int inner_rss; void* shared_l; int idx; void* pc_l; void* rss_l; scalar_t__ glort; void* queue_l; int member_0; } ;
typedef int dglort ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {scalar_t__ mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 void* FUNC_3 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct fm10k_hw*,int ,int) ;
 int FUNC_5 (struct fm10k_dglort_cfg*,int ,int) ;
 int FUNC_6 (struct fm10k_hw*,struct fm10k_dglort_cfg*) ;
 int FUNC_7 (struct fm10k_hw*,struct fm10k_dglort_cfg*) ;
 int FUNC_8 (struct fm10k_hw*,struct fm10k_dglort_cfg*) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct fm10k_intfc *VAR_14)
{
 struct fm10k_dglort_cfg VAR_15 = { 0 };
 struct fm10k_hw *VAR_16 = &VAR_14->hw;
 int VAR_17;
 u32 VAR_18;


 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
  FUNC_4(VAR_16, FUNC_2(0, VAR_17), VAR_14->rssrk[VAR_17]);


 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
  FUNC_4(VAR_16, FUNC_1(0, VAR_17), VAR_14->reta[VAR_17]);




 VAR_18 = VAR_2 |
        VAR_4 |
        VAR_3 |
        VAR_5;

 if (FUNC_9(VAR_0, VAR_14->flags))
  VAR_18 |= VAR_6;
 if (FUNC_9(VAR_1, VAR_14->flags))
  VAR_18 |= VAR_7;

 FUNC_4(VAR_16, FUNC_0(0), VAR_18);


 VAR_15.inner_rss = 1;
 VAR_15.rss_l = FUNC_3(VAR_14->ring_feature[VAR_11].mask);
 VAR_15.pc_l = FUNC_3(VAR_14->ring_feature[VAR_10].mask);
 VAR_16->mac.ops.configure_dglort_map(VAR_16, &VAR_15);


 if (VAR_14->glort_count > 64) {
  FUNC_5(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.inner_rss = 1;
  VAR_15.glort = VAR_14->glort + 64;
  VAR_15.idx = VAR_12;
  VAR_15.queue_l = FUNC_3(VAR_14->num_rx_queues - 1);
  VAR_16->mac.ops.configure_dglort_map(VAR_16, &VAR_15);
 }


 FUNC_5(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.inner_rss = 1;
 VAR_15.glort = VAR_14->glort;
 VAR_15.rss_l = FUNC_3(VAR_14->ring_feature[VAR_11].mask);
 VAR_15.pc_l = FUNC_3(VAR_14->ring_feature[VAR_10].mask);

 VAR_15.idx = VAR_13;
 if (VAR_14->l2_accel)
  VAR_15.shared_l = FUNC_3(VAR_14->l2_accel->size);
 VAR_16->mac.ops.configure_dglort_map(VAR_16, &VAR_15);
}
