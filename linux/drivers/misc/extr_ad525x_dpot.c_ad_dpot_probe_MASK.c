
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_dpot_bus_data {int dummy; } ;
struct dpot_data {unsigned long devid; int max_pos; int rdac_mask; int feat; int wipers; int* rdac_cache; int uid; struct ad_dpot_bus_data bdata; int update_lock; } ;
struct device {int kobj; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct device*,int,int) ;
 int FUNC_5 (struct device*,int,int) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,char const*,int) ;
 int FUNC_8 (struct device*,struct dpot_data*) ;
 int FUNC_9 (struct dpot_data*) ;
 struct dpot_data* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;

int FUNC_13(struct device *VAR_7,
  struct ad_dpot_bus_data *VAR_8, unsigned long VAR_9,
       const char *VAR_10)
{

 struct dpot_data *VAR_11;
 int VAR_12, VAR_13 = 0;

 VAR_11 = FUNC_10(sizeof(struct dpot_data), VAR_4);
 if (!VAR_11) {
  VAR_13 = -VAR_1;
  goto exit;
 }

 FUNC_8(VAR_7, VAR_11);
 FUNC_11(&VAR_11->update_lock);

 VAR_11->bdata = *VAR_8;
 VAR_11->devid = VAR_9;

 VAR_11->max_pos = 1 << FUNC_1(VAR_9);
 VAR_11->rdac_mask = VAR_11->max_pos - 1;
 VAR_11->feat = FUNC_0(VAR_9);
 VAR_11->uid = FUNC_2(VAR_9);
 VAR_11->wipers = FUNC_3(VAR_9);

 for (VAR_12 = VAR_0; VAR_12 < VAR_5; VAR_12++)
  if (VAR_11->wipers & (1 << VAR_12)) {
   VAR_13 = FUNC_4(VAR_7, VAR_11->feat, VAR_12);
   if (VAR_13)
    goto exit_remove_files;

   if (VAR_11->feat & VAR_3)
    VAR_11->rdac_cache[VAR_12] = VAR_11->max_pos / 2;
  }

 if (VAR_11->feat & VAR_2)
  VAR_13 = FUNC_12(&VAR_7->kobj, &VAR_6);

 if (VAR_13) {
  FUNC_6(VAR_7, "failed to register sysfs hooks\n");
  goto exit_free;
 }

 FUNC_7(VAR_7, "%s %d-Position Digital Potentiometer registered\n",
   VAR_10, VAR_11->max_pos);

 return 0;

exit_remove_files:
 for (VAR_12 = VAR_0; VAR_12 < VAR_5; VAR_12++)
  if (VAR_11->wipers & (1 << VAR_12))
   FUNC_5(VAR_7, VAR_11->feat, VAR_12);

exit_free:
 FUNC_9(VAR_11);
 FUNC_8(VAR_7, ((void*)0));
exit:
 FUNC_6(VAR_7, "failed to create client for %s ID 0x%lX\n",
  VAR_10, VAR_9);
 return VAR_13;
}
