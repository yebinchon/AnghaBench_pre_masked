
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_core {unsigned int* erpt_entries_size; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp *VAR_9,
        struct mlxsw_sp_acl_erp_core *VAR_10)
{
 unsigned int VAR_11;

 if (!FUNC_1(VAR_9->core, VAR_1) ||
     !FUNC_1(VAR_9->core, VAR_2) ||
     !FUNC_1(VAR_9->core, VAR_3) ||
     !FUNC_1(VAR_9->core, VAR_0))
  return -VAR_4;

 VAR_11 = FUNC_0(VAR_9->core, VAR_1);
 VAR_10->erpt_entries_size[VAR_6] = VAR_11;

 VAR_11 = FUNC_0(VAR_9->core, VAR_2);
 VAR_10->erpt_entries_size[VAR_7] = VAR_11;

 VAR_11 = FUNC_0(VAR_9->core, VAR_3);
 VAR_10->erpt_entries_size[VAR_8] = VAR_11;

 VAR_11 = FUNC_0(VAR_9->core, VAR_0);
 VAR_10->erpt_entries_size[VAR_5] = VAR_11;

 return 0;
}
