
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct discard_cmd_control {int discard_cmd_cnt; } ;
struct TYPE_2__ {struct discard_cmd_control* dcc_info; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct discard_cmd_control*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct f2fs_sb_info *VAR_0)
{
 struct discard_cmd_control *VAR_1 = FUNC_0(VAR_0)->dcc_info;

 if (!VAR_1)
  return;

 FUNC_3(VAR_0);





 if (FUNC_5(FUNC_1(&VAR_1->discard_cmd_cnt)))
  FUNC_2(VAR_0);

 FUNC_4(VAR_1);
 FUNC_0(VAR_0)->dcc_info = ((void*)0);
}
