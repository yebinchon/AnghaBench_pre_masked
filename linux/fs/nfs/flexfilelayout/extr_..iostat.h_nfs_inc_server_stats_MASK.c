
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {TYPE_1__* io_stats; } ;
typedef enum nfs_stat_eventcounters { ____Placeholder_nfs_stat_eventcounters } nfs_stat_eventcounters ;
struct TYPE_2__ {int * events; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(const struct nfs_server *VAR_0,
     enum nfs_stat_eventcounters VAR_1)
{
 FUNC_0(VAR_0->io_stats->events[VAR_1]);
}
