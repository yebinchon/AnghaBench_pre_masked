
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct report_general_resp {int enclosure_logical_id; int configuring; int conf_route_table; int t2t_supp; int num_phys; int route_indexes; int change_count; } ;
struct smp_resp {struct report_general_resp rg; } ;
struct TYPE_2__ {int enclosure_logical_id; int configuring; int conf_route_table; int t2t_supp; int num_phys; void* max_route_indexes; void* ex_change_count; } ;
struct domain_device {TYPE_1__ ex_dev; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct domain_device *VAR_1,
         struct smp_resp *VAR_2)
{
 struct report_general_resp *VAR_3 = &VAR_2->rg;

 VAR_1->ex_dev.ex_change_count = FUNC_0(VAR_3->change_count);
 VAR_1->ex_dev.max_route_indexes = FUNC_0(VAR_3->route_indexes);
 VAR_1->ex_dev.num_phys = FUNC_2(VAR_3->num_phys, (u8)VAR_0);
 VAR_1->ex_dev.t2t_supp = VAR_3->t2t_supp;
 VAR_1->ex_dev.conf_route_table = VAR_3->conf_route_table;
 VAR_1->ex_dev.configuring = VAR_3->configuring;
 FUNC_1(VAR_1->ex_dev.enclosure_logical_id, VAR_3->enclosure_logical_id, 8);
}
