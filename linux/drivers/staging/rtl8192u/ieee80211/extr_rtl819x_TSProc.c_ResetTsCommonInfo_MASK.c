
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qos_tclas {int dummy; } qos_tclas ;
struct tspec_body {int dummy; } ;
struct ts_common_info {scalar_t__ t_clas_num; scalar_t__ t_clas_proc; int t_class; int t_spec; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ts_common_info *VAR_1)
{
 FUNC_0(VAR_1->addr);
 FUNC_1(&VAR_1->t_spec, 0, sizeof(struct tspec_body));
 FUNC_1(&VAR_1->t_class, 0, sizeof(union qos_tclas) * VAR_0);
 VAR_1->t_clas_proc = 0;
 VAR_1->t_clas_num = 0;
}
