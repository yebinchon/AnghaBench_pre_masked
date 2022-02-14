
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int max_period; int min_period; } ;
struct TYPE_4__ {int max_period; int min_period; } ;
struct TYPE_6__ {TYPE_2__ ioss_config; TYPE_1__ pss_config; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_0(u8 *VAR_1,
          u8 *VAR_2,
          u8 *VAR_3,
          u8 *VAR_4)
{
 *VAR_1 = VAR_0->pss_config.min_period;
 *VAR_2 = VAR_0->pss_config.max_period;
 *VAR_3 = VAR_0->ioss_config.min_period;
 *VAR_4 = VAR_0->ioss_config.max_period;

 return 0;
}
