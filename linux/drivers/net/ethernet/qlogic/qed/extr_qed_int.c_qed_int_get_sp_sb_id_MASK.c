
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct qed_hwfn {TYPE_2__* p_sp_sb; } ;
struct TYPE_3__ {int igu_sb_id; } ;
struct TYPE_4__ {TYPE_1__ sb_info; } ;



u16 FUNC_0(struct qed_hwfn *VAR_0)
{
 return VAR_0->p_sp_sb->sb_info.igu_sb_id;
}
