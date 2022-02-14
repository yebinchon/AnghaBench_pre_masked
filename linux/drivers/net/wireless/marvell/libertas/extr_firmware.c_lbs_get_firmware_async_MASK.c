
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lbs_private {int driver_lock; int fw_model; int * fw_iter; struct lbs_fw_table const* fw_table; scalar_t__ fw_callback; struct device* fw_device; } ;
struct lbs_fw_table {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ lbs_fw_cb ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct lbs_private *VAR_1, struct device *VAR_2,
       u32 VAR_3, const struct lbs_fw_table *VAR_4,
       lbs_fw_cb VAR_5)
{
 unsigned long VAR_6;

 FUNC_2(&VAR_1->driver_lock, VAR_6);
 if (VAR_1->fw_callback) {
  FUNC_0("firmware load already in progress\n");
  FUNC_3(&VAR_1->driver_lock, VAR_6);
  return -VAR_0;
 }

 VAR_1->fw_device = VAR_2;
 VAR_1->fw_callback = VAR_5;
 VAR_1->fw_table = VAR_4;
 VAR_1->fw_iter = ((void*)0);
 VAR_1->fw_model = VAR_3;
 FUNC_3(&VAR_1->driver_lock, VAR_6);

 FUNC_0("Starting async firmware load\n");
 FUNC_1(VAR_1);
 return 0;
}
