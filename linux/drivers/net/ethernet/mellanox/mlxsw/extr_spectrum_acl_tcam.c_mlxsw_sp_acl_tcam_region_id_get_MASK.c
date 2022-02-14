
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlxsw_sp_acl_tcam {scalar_t__ max_regions; int used_regions; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp_acl_tcam *VAR_1,
        u16 *VAR_2)
{
 u16 VAR_3;

 VAR_3 = FUNC_1(VAR_1->used_regions, VAR_1->max_regions);
 if (VAR_3 < VAR_1->max_regions) {
  FUNC_0(VAR_3, VAR_1->used_regions);
  *VAR_2 = VAR_3;
  return 0;
 }
 return -VAR_0;
}
