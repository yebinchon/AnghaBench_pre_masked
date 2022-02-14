
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmc_timings {int dummy; } ;
struct gpmc_settings {int sync_write; int sync_read; int burst_len; } ;
struct gpmc_onenand_info {int burst_len; int sync_write; int sync_read; } ;
struct device {int of_node; } ;


 int FUNC_0 (int,struct gpmc_settings*) ;
 int FUNC_1 (int,struct gpmc_timings*,struct gpmc_settings*) ;
 int FUNC_2 (struct gpmc_timings*,struct gpmc_settings*,int,int) ;
 int FUNC_3 (int ,struct gpmc_settings*) ;

int FUNC_4(struct device *VAR_0, int VAR_1, int VAR_2,
      int VAR_3,
      struct gpmc_onenand_info *VAR_4)
{
 int VAR_5;
 struct gpmc_timings VAR_6;
 struct gpmc_settings VAR_7;

 FUNC_3(VAR_0->of_node, &VAR_7);

 VAR_4->sync_read = VAR_7.sync_read;
 VAR_4->sync_write = VAR_7.sync_write;
 VAR_4->burst_len = VAR_7.burst_len;

 if (!VAR_7.sync_read && !VAR_7.sync_write)
  return 0;

 FUNC_2(&VAR_6, &VAR_7, VAR_2, VAR_3);

 VAR_5 = FUNC_0(VAR_1, &VAR_7);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_1, &VAR_6, &VAR_7);
}
