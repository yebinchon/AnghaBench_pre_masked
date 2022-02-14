
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct mlx4_mac_table {int* is_dup; int mutex; int total; scalar_t__* entries; scalar_t__* refs; } ;
struct mlx4_port_info {struct mlx4_mac_table mac_table; } ;
struct TYPE_3__ {int num_ports; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_4__ {struct mlx4_port_info* port; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_mac_table*,int ) ;
 int FUNC_1 (struct mlx4_dev*,char*,int) ;
 int FUNC_2 (struct mlx4_dev*) ;
 TYPE_2__* FUNC_3 (struct mlx4_dev*) ;
 scalar_t__ FUNC_4 (struct mlx4_dev*,int,scalar_t__*) ;
 int FUNC_5 (struct mlx4_dev*,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct mlx4_dev*,struct mlx4_mac_table*,int) ;

void FUNC_10(struct mlx4_dev *VAR_1, u8 VAR_2, u64 VAR_3)
{
 struct mlx4_port_info *VAR_4;
 struct mlx4_mac_table *VAR_5;
 int VAR_6;
 bool VAR_7 = FUNC_2(VAR_1);
 u8 VAR_8 = (VAR_2 == 1) ? 2 : 1;
 struct mlx4_mac_table *VAR_9 = &FUNC_3(VAR_1)->port[VAR_8].mac_table;

 if (VAR_2 < 1 || VAR_2 > VAR_1->caps.num_ports) {
  FUNC_5(VAR_1, "invalid port number (%d), aborting...\n", VAR_2);
  return;
 }
 VAR_4 = &FUNC_3(VAR_1)->port[VAR_2];
 VAR_5 = &VAR_4->mac_table;

 if (VAR_7) {
  if (VAR_2 == 1) {
   FUNC_6(&VAR_5->mutex);
   FUNC_7(&VAR_9->mutex, VAR_0);
  } else {
   FUNC_6(&VAR_9->mutex);
   FUNC_7(&VAR_5->mutex, VAR_0);
  }
 } else {
  FUNC_6(&VAR_5->mutex);
 }

 VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_3);

 if (FUNC_9(VAR_1, VAR_5, VAR_6))
  goto out;

 if (--VAR_5->refs[VAR_6] || VAR_5->is_dup[VAR_6]) {
  FUNC_1(VAR_1, "Have more references for index %d, no need to modify mac table\n",
    VAR_6);
  if (!VAR_5->refs[VAR_6])
   VAR_9->is_dup[VAR_6] = 0;
  goto out;
 }

 VAR_5->entries[VAR_6] = 0;
 if (FUNC_4(VAR_1, VAR_2, VAR_5->entries))
  FUNC_5(VAR_1, "Fail to set mac in port %d during unregister\n", VAR_2);
 --VAR_5->total;

 if (VAR_7) {
  VAR_9->is_dup[VAR_6] = 0;
  if (VAR_9->refs[VAR_6])
   goto out;
  VAR_9->entries[VAR_6] = 0;
  if (FUNC_4(VAR_1, VAR_8, VAR_9->entries))
   FUNC_5(VAR_1, "Fail to set mac in duplicate port %d during unregister\n", VAR_8);

  --VAR_5->total;
 }
out:
 if (VAR_7) {
  if (VAR_2 == 2) {
   FUNC_8(&VAR_5->mutex);
   FUNC_8(&VAR_9->mutex);
  } else {
   FUNC_8(&VAR_9->mutex);
   FUNC_8(&VAR_5->mutex);
  }
 } else {
  FUNC_8(&VAR_5->mutex);
 }
}
