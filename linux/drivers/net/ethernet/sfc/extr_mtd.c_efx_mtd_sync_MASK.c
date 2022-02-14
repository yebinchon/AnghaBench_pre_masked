
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct efx_nic* priv; } ;
struct efx_nic {TYPE_1__* type; } ;
struct efx_mtd_partition {int dev_type_name; int name; } ;
struct TYPE_2__ {int (* mtd_sync ) (struct mtd_info*) ;} ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct mtd_info*) ;
 struct efx_mtd_partition* FUNC_2 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_0)
{
 struct efx_mtd_partition *VAR_1 = FUNC_2(VAR_0);
 struct efx_nic *VAR_2 = VAR_0->priv;
 int VAR_3;

 VAR_3 = VAR_2->type->mtd_sync(VAR_0);
 if (VAR_3)
  FUNC_0("%s: %s sync failed (%d)\n",
         VAR_1->name, VAR_1->dev_type_name, VAR_3);
}
