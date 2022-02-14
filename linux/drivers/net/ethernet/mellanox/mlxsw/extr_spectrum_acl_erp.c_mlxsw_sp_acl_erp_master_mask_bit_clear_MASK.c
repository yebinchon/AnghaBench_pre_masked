
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_master_mask {scalar_t__* count; int bitmap; } ;


 int FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static void
FUNC_1(unsigned long VAR_0,
           struct mlxsw_sp_acl_erp_master_mask *VAR_1)
{
 if (--VAR_1->count[VAR_0] == 0)
  FUNC_0(VAR_0, VAR_1->bitmap);
}
