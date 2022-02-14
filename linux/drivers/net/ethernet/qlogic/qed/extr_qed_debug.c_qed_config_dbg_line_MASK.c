
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct block_defs {int dbg_force_frame_addr; int dbg_force_valid_addr; int dbg_shift_addr; int dbg_enable_addr; int dbg_select_addr; } ;
typedef enum block_id { ____Placeholder_block_id } block_id ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;
 struct block_defs** VAR_0 ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_1,
    struct qed_ptt *VAR_2,
    enum block_id VAR_3,
    u8 VAR_4,
    u8 VAR_5,
    u8 VAR_6,
    u8 VAR_7, u8 VAR_8)
{
 struct block_defs *VAR_9 = VAR_0[VAR_3];

 FUNC_0(VAR_1, VAR_2, VAR_9->dbg_select_addr, VAR_4);
 FUNC_0(VAR_1, VAR_2, VAR_9->dbg_enable_addr, VAR_5);
 FUNC_0(VAR_1, VAR_2, VAR_9->dbg_shift_addr, VAR_6);
 FUNC_0(VAR_1, VAR_2, VAR_9->dbg_force_valid_addr, VAR_7);
 FUNC_0(VAR_1, VAR_2, VAR_9->dbg_force_frame_addr, VAR_8);
}
