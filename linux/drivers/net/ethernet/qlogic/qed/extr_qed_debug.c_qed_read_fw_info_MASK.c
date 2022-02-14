
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct storm_defs {size_t block_id; } ;
struct qed_ptt {int dummy; } ;
struct dbg_tools_data {scalar_t__* block_in_reset; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
struct fw_info {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,size_t,struct fw_info*) ;
 struct storm_defs* VAR_1 ;

bool FUNC_1(struct qed_hwfn *VAR_2,
        struct qed_ptt *VAR_3, struct fw_info *VAR_4)
{
 struct dbg_tools_data *VAR_5 = &VAR_2->dbg_info;
 u8 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct storm_defs *VAR_7 = &VAR_1[VAR_6];


  if (VAR_5->block_in_reset[VAR_7->block_id])
   continue;


  FUNC_0(VAR_2, VAR_3, VAR_6, VAR_4);

  return 1;
 }

 return 0;
}
