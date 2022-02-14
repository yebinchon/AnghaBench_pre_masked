
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_mac_table {int max; int * entries; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,char*) ;

__attribute__((used)) static int FUNC_1(struct mlx4_dev *VAR_1,
     struct mlx4_mac_table *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 < 0 || VAR_3 >= VAR_2->max || !VAR_2->entries[VAR_3]) {
  FUNC_0(VAR_1, "No valid Mac entry for the given index\n");
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
