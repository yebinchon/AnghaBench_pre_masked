
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlxsw_sp_acl_erp_table {scalar_t__ num_max_atcam_erps; int erp_index_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp_acl_erp_table *VAR_1,
          u8 *VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_1(VAR_1->erp_index_bitmap,
        VAR_1->num_max_atcam_erps);
 if (VAR_3 < VAR_1->num_max_atcam_erps) {
  FUNC_0(VAR_3, VAR_1->erp_index_bitmap);
  *VAR_2 = VAR_3;
  return 0;
 }

 return -VAR_0;
}
