
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int p_dpc_ptt; } ;
struct dbg_attn_block_result {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_attn_type { ____Placeholder_dbg_attn_type } dbg_attn_type ;
typedef enum block_id { ____Placeholder_block_id } block_id ;
typedef int attn_results ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,int ) ;
 int FUNC_1 (struct dbg_attn_block_result*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct qed_hwfn*,struct dbg_attn_block_result*) ;
 int FUNC_4 (struct qed_hwfn*,int ,int,int,int,struct dbg_attn_block_result*) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_1,
          enum block_id VAR_2,
          enum dbg_attn_type VAR_3, bool VAR_4)
{
 struct dbg_attn_block_result VAR_5;
 enum dbg_status VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 VAR_6 = FUNC_4(VAR_1, VAR_1->p_dpc_ptt, VAR_2, VAR_3,
       VAR_4, &VAR_5);
 if (VAR_6 != VAR_0)
  FUNC_0(VAR_1,
     "Failed to parse attention information [status: %s]\n",
     FUNC_2(VAR_6));
 else
  FUNC_3(VAR_1, &VAR_5);
}
