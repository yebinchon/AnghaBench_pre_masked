
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_29__ {int name; } ;
struct TYPE_30__ {TYPE_8__ attr; } ;
struct TYPE_27__ {int name; } ;
struct TYPE_28__ {TYPE_6__ attr; } ;
struct TYPE_25__ {int name; } ;
struct TYPE_26__ {TYPE_4__ attr; } ;
struct TYPE_23__ {int name; } ;
struct TYPE_24__ {TYPE_2__ attr; } ;
struct TYPE_20__ {int name; } ;
struct TYPE_22__ {TYPE_14__ attr; } ;
struct TYPE_18__ {int name; } ;
struct TYPE_19__ {TYPE_12__ attr; } ;
struct TYPE_16__ {int name; } ;
struct TYPE_17__ {TYPE_10__ attr; } ;
struct TYPE_21__ {TYPE_13__ min_time_window_attr; TYPE_11__ max_time_window_attr; TYPE_9__ min_power_attr; TYPE_7__ max_power_attr; TYPE_5__ name_attr; TYPE_3__ time_window_attr; TYPE_1__ power_limit_attr; } ;


 int VAR_0 ;
 TYPE_15__* VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  FUNC_0(VAR_1[VAR_2].power_limit_attr.attr.name);
  FUNC_0(VAR_1[VAR_2].time_window_attr.attr.name);
  FUNC_0(VAR_1[VAR_2].name_attr.attr.name);
  FUNC_0(VAR_1[VAR_2].max_power_attr.attr.name);
  FUNC_0(VAR_1[VAR_2].min_power_attr.attr.name);
  FUNC_0(VAR_1[VAR_2].max_time_window_attr.attr.name);
  FUNC_0(VAR_1[VAR_2].min_time_window_attr.attr.name);
 }
}
