
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef enum mlx5_monitor_counter_ppcnt { ____Placeholder_mlx5_monitor_counter_ppcnt } mlx5_monitor_counter_ppcnt ;
struct TYPE_2__ {int counter; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(int VAR_4, u32 *VAR_5)
{
 enum mlx5_monitor_counter_ppcnt VAR_6;

 for (VAR_6 = 0;
      VAR_6 < VAR_1;
      VAR_6++, VAR_4++) {
  FUNC_0(VAR_3, VAR_5,
    VAR_2[VAR_4].type,
    VAR_0);
  FUNC_0(VAR_3, VAR_5,
    VAR_2[VAR_4].counter,
    VAR_6);
 }
 return VAR_6;
}
