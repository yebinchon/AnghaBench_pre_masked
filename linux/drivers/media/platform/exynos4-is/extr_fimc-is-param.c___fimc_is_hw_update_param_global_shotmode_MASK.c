
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct param_global_shotmode {int dummy; } ;
struct fimc_is {size_t config_index; TYPE_5__* config; TYPE_3__* is_p_region; } ;
struct TYPE_9__ {struct param_global_shotmode shotmode; } ;
struct TYPE_10__ {TYPE_4__ global; } ;
struct TYPE_6__ {struct param_global_shotmode shotmode; } ;
struct TYPE_7__ {TYPE_1__ global; } ;
struct TYPE_8__ {TYPE_2__ parameter; } ;


 int FUNC_0 (struct param_global_shotmode*,struct param_global_shotmode*) ;

__attribute__((used)) static void FUNC_1(struct fimc_is *VAR_0)
{
 struct param_global_shotmode *VAR_1, *VAR_2;

 VAR_1 = &VAR_0->is_p_region->parameter.global.shotmode;
 VAR_2 = &VAR_0->config[VAR_0->config_index].global.shotmode;
 FUNC_0(VAR_1, VAR_2);
}
