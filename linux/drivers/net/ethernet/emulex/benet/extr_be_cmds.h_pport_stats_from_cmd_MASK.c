
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lancer_pport_stats {int dummy; } ;
struct lancer_cmd_resp_pport_stats {struct lancer_pport_stats pport_stats; } ;
struct TYPE_2__ {struct lancer_cmd_resp_pport_stats* va; } ;
struct be_adapter {TYPE_1__ stats_cmd; } ;



__attribute__((used)) static inline struct lancer_pport_stats*
 FUNC_0(struct be_adapter *VAR_0)
{
 struct lancer_cmd_resp_pport_stats *VAR_1 = VAR_0->stats_cmd.va;
 return &VAR_1->pport_stats;
}
