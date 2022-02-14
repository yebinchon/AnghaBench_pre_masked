
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {TYPE_1__* io_stats; } ;
typedef enum nfs_stat_bytecounters { ____Placeholder_nfs_stat_bytecounters } nfs_stat_bytecounters ;
struct TYPE_2__ {int * bytes; } ;


 int FUNC_0 (int ,long) ;

__attribute__((used)) static inline void FUNC_1(const struct nfs_server *VAR_0,
     enum nfs_stat_bytecounters VAR_1,
     long VAR_2)
{
 FUNC_0(VAR_0->io_stats->bytes[VAR_1], VAR_2);
}
