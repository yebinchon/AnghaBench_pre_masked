
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_ddbs; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;
struct asd_ddb_ssp_smp_target_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct asd_ha_struct*) ;
 int FUNC_1 (int,struct asd_ha_struct*) ;
 int FUNC_2 (struct asd_ha_struct*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct asd_ha_struct *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 >= VAR_1->hw_prof.max_ddbs) {
  VAR_2 = -VAR_0;
  goto out;
 }
 FUNC_1(VAR_2, VAR_1);

 for (VAR_3 = 0; VAR_3 < sizeof(struct asd_ddb_ssp_smp_target_port); VAR_3+= 4)
  FUNC_2(VAR_1, VAR_2, VAR_3, 0);
out:
 return VAR_2;
}
