
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct mlxsw_sp_acl_rule_info {int counter_index; } ;
struct mlxsw_sp_acl_rule {void* last_packets; void* last_bytes; void* last_used; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_acl_rule_info* FUNC_0 (struct mlxsw_sp_acl_rule*) ;
 int FUNC_1 (struct mlxsw_sp*,int ,void**,void**) ;

int FUNC_2(struct mlxsw_sp *VAR_0,
    struct mlxsw_sp_acl_rule *VAR_1,
    u64 *VAR_2, u64 *VAR_3, u64 *VAR_4)

{
 struct mlxsw_sp_acl_rule_info *VAR_5;
 u64 VAR_6;
 u64 VAR_7;
 int VAR_8;

 VAR_5 = FUNC_0(VAR_1);
 VAR_8 = FUNC_1(VAR_0, VAR_5->counter_index,
     &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 *VAR_2 = VAR_6 - VAR_1->last_packets;
 *VAR_3 = VAR_7 - VAR_1->last_bytes;
 *VAR_4 = VAR_1->last_used;

 VAR_1->last_bytes = VAR_7;
 VAR_1->last_packets = VAR_6;

 return 0;
}
