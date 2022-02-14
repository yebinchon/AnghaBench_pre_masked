
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fimc_is {TYPE_4__* is_p_region; } ;
struct TYPE_5__ {int cmd; } ;
struct TYPE_6__ {TYPE_1__ control; } ;
struct TYPE_7__ {TYPE_2__ isp; } ;
struct TYPE_8__ {TYPE_3__ parameter; } ;



__attribute__((used)) static inline void FUNC_0(struct fimc_is *VAR_0, int VAR_1)
{
 VAR_0->is_p_region->parameter.isp.control.cmd = VAR_1;
}
