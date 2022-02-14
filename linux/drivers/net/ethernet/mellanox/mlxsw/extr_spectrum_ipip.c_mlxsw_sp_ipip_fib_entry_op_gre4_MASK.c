
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp_ipip_entry {int ol_dev; int ol_lb; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;
typedef int __be32 ;
struct TYPE_2__ {int addr4; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int,int ,int,int ) ;
 int FUNC_2 (struct mlxsw_sp*,int ,struct mlxsw_sp_ipip_entry*) ;
 int FUNC_3 (int ) ;
 TYPE_1__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_ipip_entry *VAR_2,
     enum mlxsw_reg_ralue_op VAR_3,
     u32 VAR_4)
{
 u16 VAR_5 = FUNC_3(VAR_2->ol_lb);
 __be32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_4,
         VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_4(VAR_0,
      VAR_2->ol_dev).addr4;
 return FUNC_1(VAR_1, FUNC_0(VAR_6),
           32, VAR_5, VAR_3,
           VAR_4);
}
