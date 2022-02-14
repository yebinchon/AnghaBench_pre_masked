
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * stats; } ;
struct gfs2_glock {TYPE_1__ gl_stats; } ;



__attribute__((used)) static inline void FUNC_0(struct gfs2_glock *VAR_0, int VAR_1)
{
 VAR_0->gl_stats.stats[VAR_1]++;
}
