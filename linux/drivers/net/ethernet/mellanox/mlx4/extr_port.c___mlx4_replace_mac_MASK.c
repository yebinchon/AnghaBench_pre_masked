
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct mlx4_mac_table {int mutex; void** entries; } ;
struct mlx4_port_info {int base_qpn; struct mlx4_mac_table mac_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_port_info* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mlx4_dev*,char*,unsigned long long) ;
 int FUNC_2 (struct mlx4_dev*) ;
 TYPE_1__* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,size_t,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct mlx4_dev*,struct mlx4_mac_table*,int) ;

int FUNC_10(struct mlx4_dev *VAR_2, u8 VAR_3, int VAR_4, u64 VAR_5)
{
 struct mlx4_port_info *VAR_6 = &FUNC_3(VAR_2)->port[VAR_3];
 struct mlx4_mac_table *VAR_7 = &VAR_6->mac_table;
 int VAR_8 = VAR_4 - VAR_6->base_qpn;
 int VAR_9 = 0;
 bool VAR_10 = FUNC_2(VAR_2);
 u8 VAR_11 = (VAR_3 == 1) ? 2 : 1;
 struct mlx4_mac_table *VAR_12 = &FUNC_3(VAR_2)->port[VAR_11].mac_table;


 if (VAR_10) {
  if (VAR_3 == 1) {
   FUNC_5(&VAR_7->mutex);
   FUNC_6(&VAR_12->mutex, VAR_1);
  } else {
   FUNC_5(&VAR_12->mutex);
   FUNC_6(&VAR_7->mutex, VAR_1);
  }
 } else {
  FUNC_5(&VAR_7->mutex);
 }

 VAR_9 = FUNC_9(VAR_2, VAR_7, VAR_8);
 if (VAR_9)
  goto out;

 VAR_7->entries[VAR_8] = FUNC_0(VAR_5 | VAR_0);

 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_7->entries);
 if (FUNC_8(VAR_9)) {
  FUNC_1(VAR_2, "Failed adding MAC: 0x%llx\n",
    (unsigned long long) VAR_5);
  VAR_7->entries[VAR_8] = 0;
 } else {
  if (VAR_10) {
   VAR_12->entries[VAR_8] = FUNC_0(VAR_5 | VAR_0);

   VAR_9 = FUNC_4(VAR_2, VAR_11, VAR_12->entries);
   if (FUNC_8(VAR_9)) {
    FUNC_1(VAR_2, "Failed adding duplicate MAC: 0x%llx\n",
      (unsigned long long)VAR_5);
    VAR_12->entries[VAR_8] = 0;
   }
  }
 }
out:
 if (VAR_10) {
  if (VAR_3 == 2) {
   FUNC_7(&VAR_7->mutex);
   FUNC_7(&VAR_12->mutex);
  } else {
   FUNC_7(&VAR_12->mutex);
   FUNC_7(&VAR_7->mutex);
  }
 } else {
  FUNC_7(&VAR_7->mutex);
 }
 return VAR_9;
}
