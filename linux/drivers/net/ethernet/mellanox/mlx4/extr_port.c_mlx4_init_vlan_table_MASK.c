
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_vlan_table {int* is_dup; scalar_t__ total; scalar_t__ max; scalar_t__* refs; scalar_t__* entries; int mutex; } ;
struct TYPE_2__ {int log_num_vlans; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct mlx4_dev *VAR_2, struct mlx4_vlan_table *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_3->mutex);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->entries[VAR_4] = 0;
  VAR_3->refs[VAR_4] = 0;
  VAR_3->is_dup[VAR_4] = 0;
 }
 VAR_3->max = (1 << VAR_2->caps.log_num_vlans) - VAR_1;
 VAR_3->total = 0;
}
