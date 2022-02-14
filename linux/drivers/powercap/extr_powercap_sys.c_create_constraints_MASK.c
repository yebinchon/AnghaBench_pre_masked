
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct powercap_zone_constraint_ops {scalar_t__ get_min_time_window_us; scalar_t__ get_max_time_window_us; scalar_t__ get_min_power_uw; scalar_t__ get_max_power_uw; scalar_t__ get_name; int set_time_window_us; int get_time_window_us; int set_power_limit_uw; int get_power_limit_uw; } ;
struct powercap_zone_constraint {struct powercap_zone_constraint_ops const* ops; int id; } ;
struct powercap_zone {int zone_attr_count; int ** zone_dev_attrs; int const_id_cnt; struct powercap_zone_constraint* constraints; } ;
struct TYPE_15__ {int attr; } ;
struct TYPE_14__ {int attr; } ;
struct TYPE_13__ {int attr; } ;
struct TYPE_12__ {int attr; } ;
struct TYPE_11__ {int attr; } ;
struct TYPE_10__ {int attr; } ;
struct TYPE_9__ {int attr; } ;
struct TYPE_16__ {TYPE_7__ min_time_window_attr; TYPE_6__ max_time_window_attr; TYPE_5__ min_power_attr; TYPE_4__ max_power_attr; TYPE_3__ name_attr; TYPE_2__ time_window_attr; TYPE_1__ power_limit_attr; } ;


 int VAR_0 ;
 TYPE_8__* VAR_1 ;

__attribute__((used)) static int FUNC_0(struct powercap_zone *VAR_2,
   int VAR_3,
   const struct powercap_zone_constraint_ops *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 int VAR_7;
 struct powercap_zone_constraint *VAR_8;

 if (!VAR_2 || !VAR_4 || !VAR_4->get_power_limit_uw ||
     !VAR_4->set_power_limit_uw ||
     !VAR_4->get_time_window_us ||
     !VAR_4->set_time_window_us)
  return -VAR_0;

 VAR_7 = VAR_2->zone_attr_count;
 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  VAR_8 = &VAR_2->constraints[VAR_5];
  VAR_8->ops = VAR_4;
  VAR_8->id = VAR_2->const_id_cnt;
  VAR_2->const_id_cnt++;
  VAR_2->zone_dev_attrs[VAR_7++] =
    &VAR_1[VAR_5].power_limit_attr.attr;
  VAR_2->zone_dev_attrs[VAR_7++] =
    &VAR_1[VAR_5].time_window_attr.attr;
  if (VAR_8->ops->get_name)
   VAR_2->zone_dev_attrs[VAR_7++] =
    &VAR_1[VAR_5].name_attr.attr;
  if (VAR_8->ops->get_max_power_uw)
   VAR_2->zone_dev_attrs[VAR_7++] =
    &VAR_1[VAR_5].max_power_attr.attr;
  if (VAR_8->ops->get_min_power_uw)
   VAR_2->zone_dev_attrs[VAR_7++] =
    &VAR_1[VAR_5].min_power_attr.attr;
  if (VAR_8->ops->get_max_time_window_us)
   VAR_2->zone_dev_attrs[VAR_7++] =
    &VAR_1[VAR_5].max_time_window_attr.attr;
  if (VAR_8->ops->get_min_time_window_us)
   VAR_2->zone_dev_attrs[VAR_7++] =
    &VAR_1[VAR_5].min_time_window_attr.attr;
 }
 VAR_2->zone_attr_count = VAR_7;

 return VAR_6;
}
