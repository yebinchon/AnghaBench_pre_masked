
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pm8001_mpi3_phy_pg_trx_config {int dummy; } ;
struct pm8001_hba_info {TYPE_1__* chip; } ;
typedef int phycfg_int ;
typedef int phycfg_ext ;
struct TYPE_2__ {int n_phy; } ;


 int FUNC_0 (struct pm8001_mpi3_phy_pg_trx_config*,int ,int) ;
 int FUNC_1 (struct pm8001_hba_info*,struct pm8001_mpi3_phy_pg_trx_config*) ;
 int FUNC_2 (struct pm8001_hba_info*,struct pm8001_mpi3_phy_pg_trx_config*) ;
 int FUNC_3 (struct pm8001_hba_info*,int*) ;
 int FUNC_4 (struct pm8001_hba_info*,int,int,int *) ;

__attribute__((used)) static
int FUNC_5(struct pm8001_hba_info *VAR_0)
{
 struct pm8001_mpi3_phy_pg_trx_config VAR_1;
 struct pm8001_mpi3_phy_pg_trx_config VAR_2;
 int VAR_3 = 0;
 int VAR_4 = 0;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 FUNC_0(&VAR_2, 0, sizeof(VAR_2));

 FUNC_2(VAR_0, &VAR_1);
 FUNC_1(VAR_0, &VAR_2);
 FUNC_3(VAR_0, &VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0->chip->n_phy; VAR_4++) {
  if (VAR_3 & (1 << VAR_4)) {
   FUNC_4(VAR_0, VAR_4,
     sizeof(VAR_1) / sizeof(u32),
     (u32 *)&VAR_1);

  } else {
   FUNC_4(VAR_0, VAR_4,
     sizeof(VAR_2) / sizeof(u32),
     (u32 *)&VAR_2);
  }
 }

 return 0;
}
