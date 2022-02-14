
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ips_driver {void* gpu_turbo_disable; void* gpu_busy; void* gpu_lower; void* gpu_raise; void* read_mch_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ips_driver *VAR_5)
{
 VAR_5->read_mch_val = FUNC_0(VAR_4);
 if (!VAR_5->read_mch_val)
  goto out_err;
 VAR_5->gpu_raise = FUNC_0(VAR_2);
 if (!VAR_5->gpu_raise)
  goto out_put_mch;
 VAR_5->gpu_lower = FUNC_0(VAR_1);
 if (!VAR_5->gpu_lower)
  goto out_put_raise;
 VAR_5->gpu_busy = FUNC_0(VAR_0);
 if (!VAR_5->gpu_busy)
  goto out_put_lower;
 VAR_5->gpu_turbo_disable = FUNC_0(VAR_3);
 if (!VAR_5->gpu_turbo_disable)
  goto out_put_busy;

 return 1;

out_put_busy:
 FUNC_1(VAR_0);
out_put_lower:
 FUNC_1(VAR_1);
out_put_raise:
 FUNC_1(VAR_2);
out_put_mch:
 FUNC_1(VAR_4);
out_err:
 return 0;
}
