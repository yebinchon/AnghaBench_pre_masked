
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct discard_cmd_control {int cmd_lock; int root; } ;
struct discard_cmd {scalar_t__ state; int ref; } ;
typedef int block_t ;
struct TYPE_2__ {struct discard_cmd_control* dcc_info; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,struct discard_cmd*,int ) ;
 int FUNC_2 (struct f2fs_sb_info*,struct discard_cmd*) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct f2fs_sb_info *VAR_1, block_t VAR_2)
{
 struct discard_cmd_control *VAR_3 = FUNC_0(VAR_1)->dcc_info;
 struct discard_cmd *VAR_4;
 bool VAR_5 = 0;

 FUNC_4(&VAR_3->cmd_lock);
 VAR_4 = (struct discard_cmd *)FUNC_3(&VAR_3->root,
       ((void*)0), VAR_2);
 if (VAR_4) {
  if (VAR_4->state == VAR_0) {
   FUNC_1(VAR_1, VAR_4, VAR_2);
  } else {
   VAR_4->ref++;
   VAR_5 = 1;
  }
 }
 FUNC_5(&VAR_3->cmd_lock);

 if (VAR_5)
  FUNC_2(VAR_1, VAR_4);
}
