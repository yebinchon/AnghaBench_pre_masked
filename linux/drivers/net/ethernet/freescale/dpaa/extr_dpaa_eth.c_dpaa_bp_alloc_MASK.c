
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa_bp {int free_buf_cb; int seed_cb; int config_count; int * percpu_count; int bpid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct dpaa_bp* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (struct device*,int ) ;
 struct dpaa_bp* FUNC_2 (struct device*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct dpaa_bp *FUNC_3(struct device *VAR_6)
{
 struct dpaa_bp *VAR_7;

 VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->bpid = VAR_1;
 VAR_7->percpu_count = FUNC_1(VAR_6, *VAR_7->percpu_count);
 if (!VAR_7->percpu_count)
  return FUNC_0(-VAR_0);

 VAR_7->config_count = VAR_2;

 VAR_7->seed_cb = VAR_5;
 VAR_7->free_buf_cb = VAR_4;

 return VAR_7;
}
