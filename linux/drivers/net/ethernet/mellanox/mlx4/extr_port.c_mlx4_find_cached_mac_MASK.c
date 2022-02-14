
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct mlx4_mac_table {int * entries; int * refs; } ;
struct mlx4_port_info {struct mlx4_mac_table mac_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_port_info* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_3, u8 VAR_4, u64 VAR_5, int *VAR_6)
{
 struct mlx4_port_info *VAR_7 = &FUNC_1(VAR_3)->port[VAR_4];
 struct mlx4_mac_table *VAR_8 = &VAR_7->mac_table;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (!VAR_8->refs[VAR_9])
   continue;

  if (VAR_5 == (VAR_1 & FUNC_0(VAR_8->entries[VAR_9]))) {
   *VAR_6 = VAR_9;
   return 0;
  }
 }

 return -VAR_0;
}
