
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_is {int config_index; TYPE_1__* config; } ;
struct TYPE_2__ {unsigned long* p_region_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fimc_is*,int) ;
 int FUNC_1 (struct fimc_is*) ;
 int FUNC_2 (struct fimc_is*) ;
 scalar_t__ FUNC_3 (int,unsigned long*) ;

int FUNC_4(struct fimc_is *VAR_7)
{
 unsigned long *VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;

 VAR_10 = VAR_7->config_index;
 VAR_8 = &VAR_7->config[VAR_10].p_region_index[0];

 if (FUNC_3(VAR_3, VAR_8))
  FUNC_1(VAR_7);

 if (FUNC_3(VAR_6, VAR_8))
  FUNC_2(VAR_7);

 for (VAR_9 = VAR_4; VAR_9 < VAR_0; VAR_9++) {
  if (FUNC_3(VAR_9, VAR_8))
   VAR_11 = FUNC_0(VAR_7, VAR_9);
 }

 for (VAR_9 = VAR_0; VAR_9 < VAR_5; VAR_9++) {
  if (FUNC_3(VAR_9, VAR_8))
   VAR_11 = FUNC_0(VAR_7, VAR_9);
 }

 for (VAR_9 = VAR_2; VAR_9 <= VAR_1; VAR_9++) {
  if (FUNC_3(VAR_9, VAR_8))
   VAR_11 = FUNC_0(VAR_7, VAR_9);
 }

 return VAR_11;
}
