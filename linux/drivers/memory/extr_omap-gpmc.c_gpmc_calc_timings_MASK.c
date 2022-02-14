
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmc_timings {int dummy; } ;
struct gpmc_settings {scalar_t__ sync_write; scalar_t__ sync_read; scalar_t__ mux_add_data; } ;
struct gpmc_device_timings {int dummy; } ;


 int FUNC_0 (struct gpmc_timings*,struct gpmc_device_timings*,int) ;
 int FUNC_1 (struct gpmc_timings*,struct gpmc_device_timings*,int) ;
 int FUNC_2 (struct gpmc_timings*,struct gpmc_device_timings*,int) ;
 int FUNC_3 (struct gpmc_timings*,struct gpmc_device_timings*,int) ;
 int FUNC_4 (struct gpmc_timings*,struct gpmc_device_timings*,int) ;
 int FUNC_5 (struct gpmc_timings*) ;
 int FUNC_6 (struct gpmc_timings*,int ,int) ;

int FUNC_7(struct gpmc_timings *VAR_0,
        struct gpmc_settings *VAR_1,
        struct gpmc_device_timings *VAR_2)
{
 bool VAR_3 = 0, VAR_4 = 0;

 if (VAR_1) {
  VAR_3 = VAR_1->mux_add_data ? 1 : 0;
  VAR_4 = (VAR_1->sync_read || VAR_1->sync_write);
 }

 FUNC_6(VAR_0, 0, sizeof(*VAR_0));

 FUNC_2(VAR_0, VAR_2, VAR_4);

 if (VAR_1 && VAR_1->sync_read)
  FUNC_3(VAR_0, VAR_2, VAR_3);
 else
  FUNC_0(VAR_0, VAR_2, VAR_3);

 if (VAR_1 && VAR_1->sync_write)
  FUNC_4(VAR_0, VAR_2, VAR_3);
 else
  FUNC_1(VAR_0, VAR_2, VAR_3);


 FUNC_5(VAR_0);

 return 0;
}
