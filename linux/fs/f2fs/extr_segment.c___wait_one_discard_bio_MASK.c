
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct discard_cmd_control {int cmd_lock; } ;
struct discard_cmd {scalar_t__ state; unsigned int len; int error; int ref; int wait; } ;
struct TYPE_2__ {struct discard_cmd_control* dcc_info; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,struct discard_cmd*) ;
 int FUNC_2 (struct f2fs_sb_info*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static unsigned int FUNC_6(struct f2fs_sb_info *VAR_1,
       struct discard_cmd *VAR_2)
{
 struct discard_cmd_control *VAR_3 = FUNC_0(VAR_1)->dcc_info;
 unsigned int VAR_4 = 0;

 FUNC_5(&VAR_2->wait);
 FUNC_3(&VAR_3->cmd_lock);
 FUNC_2(VAR_1, VAR_2->state != VAR_0);
 VAR_2->ref--;
 if (!VAR_2->ref) {
  if (!VAR_2->error)
   VAR_4 = VAR_2->len;
  FUNC_1(VAR_1, VAR_2);
 }
 FUNC_4(&VAR_3->cmd_lock);

 return VAR_4;
}
