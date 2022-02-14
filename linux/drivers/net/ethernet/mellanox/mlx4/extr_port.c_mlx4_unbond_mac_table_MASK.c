
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_mac_table {scalar_t__* entries; int* is_dup; int mutex; int * refs; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {struct mlx4_mac_table mac_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct mlx4_dev*,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx4_dev *VAR_2)
{
 struct mlx4_mac_table *VAR_3 = &FUNC_0(VAR_2)->port[1].mac_table;
 struct mlx4_mac_table *VAR_4 = &FUNC_0(VAR_2)->port[2].mac_table;
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7;
 bool VAR_8 = 0;
 bool VAR_9 = 0;

 FUNC_3(&VAR_3->mutex);
 FUNC_3(&VAR_4->mutex);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_3->entries[VAR_7] != VAR_4->entries[VAR_7]) {
   FUNC_2(VAR_2, "mac table is in an unexpected state when trying to unbond\n");
   VAR_5 = -VAR_0;
   goto unlock;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!VAR_3->entries[VAR_7])
   continue;
  VAR_3->is_dup[VAR_7] = 0;
  if (!VAR_3->refs[VAR_7]) {
   VAR_3->entries[VAR_7] = 0;
   VAR_8 = 1;
  }
  VAR_4->is_dup[VAR_7] = 0;
  if (!VAR_4->refs[VAR_7]) {
   VAR_4->entries[VAR_7] = 0;
   VAR_9 = 1;
  }
 }

 if (VAR_8) {
  VAR_5 = FUNC_1(VAR_2, 1, VAR_3->entries);
  if (VAR_5)
   FUNC_2(VAR_2, "failed to unmirror MAC tables for port 1(%d)\n", VAR_5);
 }
 if (VAR_9) {
  VAR_6 = FUNC_1(VAR_2, 2, VAR_4->entries);
  if (VAR_6) {
   FUNC_2(VAR_2, "failed to unmirror MAC tables for port 2(%d)\n", VAR_6);
   VAR_5 = VAR_6;
  }
 }
unlock:
 FUNC_4(&VAR_4->mutex);
 FUNC_4(&VAR_3->mutex);
 return VAR_5;
}
