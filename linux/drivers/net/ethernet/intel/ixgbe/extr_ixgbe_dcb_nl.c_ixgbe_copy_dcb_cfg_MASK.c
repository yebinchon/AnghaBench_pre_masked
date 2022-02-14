
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tc_configuration {scalar_t__ dcb_pfc; TYPE_2__* path; } ;
struct ixgbe_dcb_config {scalar_t__** bw_percentage; scalar_t__ pfc_mode_enable; struct tc_configuration* tc_config; } ;
struct TYPE_3__ {int up; } ;
struct ixgbe_adapter {TYPE_1__ fcoe; int netdev; struct ixgbe_dcb_config dcb_cfg; struct ixgbe_dcb_config temp_dcb_cfg; } ;
struct dcb_app {int protocol; int selector; } ;
struct TYPE_4__ {scalar_t__ prio_type; scalar_t__ bwg_id; scalar_t__ bwg_percent; scalar_t__ up_to_tc_bitmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_1 (int ,struct dcb_app*) ;

__attribute__((used)) static int FUNC_2(struct ixgbe_adapter *VAR_13, int VAR_14)
{
 struct ixgbe_dcb_config *VAR_15 = &VAR_13->temp_dcb_cfg;
 struct ixgbe_dcb_config *VAR_16 = &VAR_13->dcb_cfg;
 struct tc_configuration *VAR_17 = ((void*)0);
 struct tc_configuration *VAR_18 = ((void*)0);
 int VAR_19, VAR_20;
 int VAR_21 = VAR_11;
 int VAR_22 = VAR_10;
 int VAR_23 = 0;
 for (VAR_19 = VAR_9; VAR_19 < VAR_14 + VAR_9; VAR_19++) {
  VAR_17 = &VAR_15->tc_config[VAR_19 - VAR_9];
  VAR_18 = &VAR_16->tc_config[VAR_19 - VAR_9];

  if (VAR_18->path[VAR_21].prio_type != VAR_17->path[VAR_21].prio_type) {
   VAR_18->path[VAR_21].prio_type = VAR_17->path[VAR_21].prio_type;
   VAR_23 |= VAR_3;
  }

  if (VAR_18->path[VAR_21].bwg_id != VAR_17->path[VAR_21].bwg_id) {
   VAR_18->path[VAR_21].bwg_id = VAR_17->path[VAR_21].bwg_id;
   VAR_23 |= VAR_3;
  }

  if (VAR_18->path[VAR_21].bwg_percent != VAR_17->path[VAR_21].bwg_percent) {
   VAR_18->path[VAR_21].bwg_percent = VAR_17->path[VAR_21].bwg_percent;
   VAR_23 |= VAR_3;
  }

  if (VAR_18->path[VAR_21].up_to_tc_bitmap !=
    VAR_17->path[VAR_21].up_to_tc_bitmap) {
   VAR_18->path[VAR_21].up_to_tc_bitmap =
    VAR_17->path[VAR_21].up_to_tc_bitmap;
   VAR_23 |= (VAR_3 | VAR_1 | VAR_0);
  }

  if (VAR_18->path[VAR_22].prio_type != VAR_17->path[VAR_22].prio_type) {
   VAR_18->path[VAR_22].prio_type = VAR_17->path[VAR_22].prio_type;
   VAR_23 |= VAR_2;
  }

  if (VAR_18->path[VAR_22].bwg_id != VAR_17->path[VAR_22].bwg_id) {
   VAR_18->path[VAR_22].bwg_id = VAR_17->path[VAR_22].bwg_id;
   VAR_23 |= VAR_2;
  }

  if (VAR_18->path[VAR_22].bwg_percent != VAR_17->path[VAR_22].bwg_percent) {
   VAR_18->path[VAR_22].bwg_percent = VAR_17->path[VAR_22].bwg_percent;
   VAR_23 |= VAR_2;
  }

  if (VAR_18->path[VAR_22].up_to_tc_bitmap !=
    VAR_17->path[VAR_22].up_to_tc_bitmap) {
   VAR_18->path[VAR_22].up_to_tc_bitmap =
    VAR_17->path[VAR_22].up_to_tc_bitmap;
   VAR_23 |= (VAR_2 | VAR_1 | VAR_0);
  }
 }

 for (VAR_19 = VAR_7; VAR_19 < VAR_8; VAR_19++) {
  VAR_20 = VAR_19 - VAR_7;
  if (VAR_16->bw_percentage[VAR_21][VAR_20] != VAR_15->bw_percentage[VAR_21][VAR_20]) {
   VAR_16->bw_percentage[VAR_21][VAR_20] = VAR_15->bw_percentage[VAR_21][VAR_20];
   VAR_23 |= VAR_3;
  }
  if (VAR_16->bw_percentage[VAR_22][VAR_20] != VAR_15->bw_percentage[VAR_22][VAR_20]) {
   VAR_16->bw_percentage[VAR_22][VAR_20] = VAR_15->bw_percentage[VAR_22][VAR_20];
   VAR_23 |= VAR_2;
  }
 }

 for (VAR_19 = VAR_5; VAR_19 < VAR_6; VAR_19++) {
  VAR_20 = VAR_19 - VAR_5;
  if (VAR_16->tc_config[VAR_20].dcb_pfc != VAR_15->tc_config[VAR_20].dcb_pfc) {
   VAR_16->tc_config[VAR_20].dcb_pfc = VAR_15->tc_config[VAR_20].dcb_pfc;
   VAR_23 |= VAR_1;
  }
 }

 if (VAR_16->pfc_mode_enable != VAR_15->pfc_mode_enable) {
  VAR_16->pfc_mode_enable = VAR_15->pfc_mode_enable;
  VAR_23 |= VAR_1;
 }

 return VAR_23;
}
