
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct discard_info {int len; int lstart; int start; } ;
struct discard_cmd_control {int undiscard_blks; } ;
struct discard_cmd {scalar_t__ state; int len; int lstart; int start; int bdev; struct discard_info di; } ;
typedef int block_t ;
struct TYPE_2__ {struct discard_cmd_control* dcc_info; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,int ,int,int,int,int *,int *) ;
 int FUNC_2 (struct discard_cmd_control*,struct discard_cmd*) ;
 int FUNC_3 (struct f2fs_sb_info*,struct discard_cmd*) ;

__attribute__((used)) static void FUNC_4(struct f2fs_sb_info *VAR_1,
    struct discard_cmd *VAR_2, block_t VAR_3)
{
 struct discard_cmd_control *VAR_4 = FUNC_0(VAR_1)->dcc_info;
 struct discard_info VAR_5 = VAR_2->di;
 bool VAR_6 = 0;

 if (VAR_2->state == VAR_0 || VAR_2->len == 1) {
  FUNC_3(VAR_1, VAR_2);
  return;
 }

 VAR_4->undiscard_blks -= VAR_5.len;

 if (VAR_3 > VAR_5.lstart) {
  VAR_2->len = VAR_3 - VAR_2->lstart;
  VAR_4->undiscard_blks += VAR_2->len;
  FUNC_2(VAR_4, VAR_2);
  VAR_6 = 1;
 }

 if (VAR_3 < VAR_5.lstart + VAR_5.len - 1) {
  if (VAR_6) {
   FUNC_1(VAR_1, VAR_2->bdev, VAR_3 + 1,
     VAR_5.start + VAR_3 + 1 - VAR_5.lstart,
     VAR_5.lstart + VAR_5.len - 1 - VAR_3,
     ((void*)0), ((void*)0));
  } else {
   VAR_2->lstart++;
   VAR_2->len--;
   VAR_2->start++;
   VAR_4->undiscard_blks += VAR_2->len;
   FUNC_2(VAR_4, VAR_2);
  }
 }
}
