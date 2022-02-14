
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ af_list_max; scalar_t__ afcache_size; int picode; } ;
struct TYPE_4__ {TYPE_1__ stat_info; } ;
struct fmdev {TYPE_2__ rx; } ;


 int VAR_0 ;

void FUNC_0(struct fmdev *VAR_1)
{
 VAR_1->rx.stat_info.picode = VAR_0;
 VAR_1->rx.stat_info.afcache_size = 0;
 VAR_1->rx.stat_info.af_list_max = 0;
}
