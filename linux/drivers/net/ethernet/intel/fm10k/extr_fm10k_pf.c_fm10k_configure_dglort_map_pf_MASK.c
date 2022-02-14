
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct fm10k_hw {int dummy; } ;
struct fm10k_dglort_cfg {int idx; int rss_l; int pc_l; int vsi_l; int vsi_b; int queue_l; int queue_b; scalar_t__ glort; scalar_t__ shared_l; scalar_t__ inner_rss; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (struct fm10k_hw*,int ) ;
 int FUNC_7 (struct fm10k_hw*,int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_8(struct fm10k_hw *VAR_13,
      struct fm10k_dglort_cfg *VAR_14)
{
 u16 VAR_15, VAR_16, VAR_17, VAR_18;
 u16 VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23, VAR_24, VAR_25;


 if (!VAR_14)
  return VAR_8;


 if ((VAR_14->idx > 7) || (VAR_14->rss_l > 7) || (VAR_14->pc_l > 3) ||
     (VAR_14->vsi_l > 6) || (VAR_14->vsi_b > 64) ||
     (VAR_14->queue_l > 8) || (VAR_14->queue_b >= 256))
  return VAR_8;


 VAR_16 = FUNC_0(VAR_14->rss_l + VAR_14->pc_l);
 VAR_17 = FUNC_0(VAR_14->vsi_l + VAR_14->queue_l);
 VAR_15 = VAR_14->glort;
 VAR_22 = VAR_14->queue_b;


 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++, VAR_15++) {
  for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++, VAR_22++) {
   if (VAR_22 >= VAR_9)
    break;

   FUNC_7(VAR_13, FUNC_5(VAR_22), VAR_15);
   FUNC_7(VAR_13, FUNC_3(VAR_22), VAR_15);
  }
 }


 VAR_16 = FUNC_0(VAR_14->queue_l + VAR_14->rss_l + VAR_14->vsi_l);
 VAR_18 = FUNC_0(VAR_14->pc_l);


 for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++) {
  VAR_22 = VAR_21 + VAR_14->queue_b;
  for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++) {
   if (VAR_22 >= VAR_9)
    break;

   VAR_23 = FUNC_6(VAR_13, FUNC_4(VAR_22));
   VAR_23 &= ~VAR_10;
   VAR_23 |= VAR_21 << VAR_11;
   FUNC_7(VAR_13, FUNC_4(VAR_22), VAR_23);

   VAR_22 += VAR_18;
  }
 }


 VAR_24 = ((u32)(VAR_14->rss_l) << VAR_3) |
      ((u32)(VAR_14->queue_b) << VAR_2) |
      ((u32)(VAR_14->pc_l) << VAR_1) |
      ((u32)(VAR_14->vsi_b) << VAR_4) |
      ((u32)(VAR_14->vsi_l) << VAR_5) |
      ((u32)(VAR_14->queue_l));
 if (VAR_14->inner_rss)
  VAR_24 |= VAR_0;


 VAR_25 = (VAR_14->idx == VAR_12) ?
   VAR_6 : VAR_7;
 VAR_25 <<= VAR_14->vsi_l + VAR_14->queue_l + VAR_14->shared_l;
 VAR_25 |= VAR_14->glort;


 FUNC_7(VAR_13, FUNC_1(VAR_14->idx), VAR_24);
 FUNC_7(VAR_13, FUNC_2(VAR_14->idx), VAR_25);

 return 0;
}
