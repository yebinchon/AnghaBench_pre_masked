
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vxge_hw_fifo_txd {int dummy; } ;
struct vxge_hw_device_config {TYPE_5__* vp_config; scalar_t__ rth_en; } ;
struct vxge_config {void* tx_steering_type; void* rth_steering; } ;
struct TYPE_12__ {int vpath_per_dev; int g_no_cpus; } ;
struct TYPE_10__ {int btimer_val; int rtimer_val; int ltimer_val; int uec_d; int uec_c; int uec_b; int uec_a; int urange_c; int urange_b; int urange_a; int util_sel; void* timer_ri_en; void* timer_ci_en; void* timer_ac_en; void* intr_enable; } ;
struct TYPE_9__ {int scatter_mode; int rxds_limit; int buffer_mode; int ring_blocks; int enable; } ;
struct TYPE_8__ {int btimer_val; int ltimer_val; int rtimer_val; int uec_d; int uec_c; int uec_b; int uec_a; int urange_c; int urange_b; int urange_a; int util_sel; void* timer_ri_en; void* timer_ci_en; void* timer_ac_en; void* intr_enable; } ;
struct TYPE_7__ {int max_frags; int memblock_size; int fifo_blocks; int intr; int enable; } ;
struct TYPE_11__ {int vp_id; int rpa_strip_vlan_tag; TYPE_4__ rti; TYPE_3__ ring; TYPE_2__ tti; TYPE_1__ fifo; int mtu; int min_bandwidth; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int * VAR_43 ;
 TYPE_6__* VAR_44 ;
 scalar_t__ VAR_45 ;
 int FUNC_0 () ;
 int VAR_46 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,char*,int ,...) ;

__attribute__((used)) static int FUNC_3(struct vxge_hw_device_config *VAR_47,
         u64 VAR_48, struct vxge_config *VAR_49)
{
 int VAR_50, VAR_51 = 0, VAR_52 = 0, VAR_53;
 u32 VAR_54, VAR_55;

 VAR_53 = VAR_44->vpath_per_dev;
 if ((VAR_44->vpath_per_dev == VAR_42) &&
  (VAR_45 == VAR_34)) {

  if (VAR_44->g_no_cpus == -1)
   return 0;

  if (!VAR_44->g_no_cpus)
   VAR_44->g_no_cpus =
    FUNC_0();

  VAR_44->vpath_per_dev = VAR_44->g_no_cpus >> 1;
  if (!VAR_44->vpath_per_dev)
   VAR_44->vpath_per_dev = 1;

  for (VAR_50 = 0; VAR_50 < VAR_23; VAR_50++)
   if (!FUNC_1(VAR_48, VAR_50, 1))
    continue;
   else
    VAR_52++;
  if (VAR_52 < VAR_44->vpath_per_dev)
   VAR_44->vpath_per_dev = VAR_52;

  VAR_44->g_no_cpus = VAR_44->g_no_cpus -
    (VAR_44->vpath_per_dev * 2);
  if (VAR_44->g_no_cpus <= 0)
   VAR_44->g_no_cpus = -1;
 }

 if (VAR_44->vpath_per_dev == 1) {
  FUNC_2(VAR_38,
   "%s: Disable tx and rx steering, "
   "as single vpath is configured", VAR_17);
  VAR_49->rth_steering = VAR_1;
  VAR_49->tx_steering_type = VAR_1;
  VAR_47->rth_en = 0;
 }


 for (VAR_50 = 0; VAR_50 < VAR_23; VAR_50++)
  VAR_47->vp_config[VAR_50].min_bandwidth = VAR_43[VAR_50];

 for (VAR_50 = 0; VAR_50 < VAR_23; VAR_50++) {
  VAR_47->vp_config[VAR_50].vp_id = VAR_50;
  VAR_47->vp_config[VAR_50].mtu = VAR_18;
  if (VAR_51 < VAR_44->vpath_per_dev) {
   if (!FUNC_1(VAR_48, VAR_50, 1)) {
    FUNC_2(VAR_38,
     "%s: vpath: %d is not available",
     VAR_17, VAR_50);
    continue;
   } else {
    FUNC_2(VAR_38,
     "%s: vpath: %d available",
     VAR_17, VAR_50);
    VAR_51++;
   }
  } else {
   FUNC_2(VAR_38,
    "%s: vpath: %d is not configured, "
    "max_config_vpath exceeded",
    VAR_17, VAR_50);
   break;
  }


  VAR_47->vp_config[VAR_50].fifo.enable =
      VAR_21;
  VAR_47->vp_config[VAR_50].fifo.max_frags =
    VAR_0 + 1;
  VAR_47->vp_config[VAR_50].fifo.memblock_size =
   VAR_24;

  VAR_54 = VAR_47->vp_config[VAR_50].fifo.max_frags *
    sizeof(struct vxge_hw_fifo_txd);
  VAR_55 = VAR_24 / VAR_54;

  VAR_47->vp_config[VAR_50].fifo.fifo_blocks =
   ((VAR_16 - 1) / VAR_55) + 1;

  VAR_47->vp_config[VAR_50].fifo.intr =
    VAR_22;


  VAR_47->vp_config[VAR_50].tti.intr_enable =
     VAR_28;

  VAR_47->vp_config[VAR_50].tti.btimer_val =
   (VAR_39 * 1000) / 272;

  VAR_47->vp_config[VAR_50].tti.timer_ac_en =
    VAR_29;




  VAR_47->vp_config[VAR_50].tti.timer_ci_en =
   VAR_30;

  VAR_47->vp_config[VAR_50].tti.timer_ri_en =
    VAR_31;

  VAR_47->vp_config[VAR_50].tti.util_sel =
   VAR_33;

  VAR_47->vp_config[VAR_50].tti.ltimer_val =
   (VAR_40 * 1000) / 272;

  VAR_47->vp_config[VAR_50].tti.rtimer_val =
   (VAR_41 * 1000) / 272;

  VAR_47->vp_config[VAR_50].tti.urange_a = VAR_13;
  VAR_47->vp_config[VAR_50].tti.urange_b = VAR_14;
  VAR_47->vp_config[VAR_50].tti.urange_c = VAR_15;
  VAR_47->vp_config[VAR_50].tti.uec_a = VAR_9;
  VAR_47->vp_config[VAR_50].tti.uec_b = VAR_10;
  VAR_47->vp_config[VAR_50].tti.uec_c = VAR_11;
  VAR_47->vp_config[VAR_50].tti.uec_d = VAR_12;


  VAR_47->vp_config[VAR_50].ring.enable =
      VAR_25;

  VAR_47->vp_config[VAR_50].ring.ring_blocks =
      VAR_19;

  VAR_47->vp_config[VAR_50].ring.buffer_mode =
   VAR_26;

  VAR_47->vp_config[VAR_50].ring.rxds_limit =
    VAR_20;

  VAR_47->vp_config[VAR_50].ring.scatter_mode =
     VAR_27;


  VAR_47->vp_config[VAR_50].rti.intr_enable =
     VAR_28;

  VAR_47->vp_config[VAR_50].rti.btimer_val =
   (VAR_35 * 1000)/272;

  VAR_47->vp_config[VAR_50].rti.timer_ac_en =
      VAR_29;

  VAR_47->vp_config[VAR_50].rti.timer_ci_en =
      VAR_30;

  VAR_47->vp_config[VAR_50].rti.timer_ri_en =
      VAR_31;

  VAR_47->vp_config[VAR_50].rti.util_sel =
    VAR_32;

  VAR_47->vp_config[VAR_50].rti.urange_a =
      VAR_6;
  VAR_47->vp_config[VAR_50].rti.urange_b =
      VAR_7;
  VAR_47->vp_config[VAR_50].rti.urange_c =
      VAR_8;
  VAR_47->vp_config[VAR_50].rti.uec_a = VAR_2;
  VAR_47->vp_config[VAR_50].rti.uec_b = VAR_3;
  VAR_47->vp_config[VAR_50].rti.uec_c = VAR_4;
  VAR_47->vp_config[VAR_50].rti.uec_d = VAR_5;

  VAR_47->vp_config[VAR_50].rti.rtimer_val =
   (VAR_37 * 1000) / 272;

  VAR_47->vp_config[VAR_50].rti.ltimer_val =
   (VAR_36 * 1000) / 272;

  VAR_47->vp_config[VAR_50].rpa_strip_vlan_tag =
   VAR_46;
 }

 VAR_44->vpath_per_dev = VAR_53;
 return VAR_51;
}
