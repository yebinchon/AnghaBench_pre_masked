
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_io_info {int type; int op; int op_flags; } ;
struct f2fs_bio_info {int * bio; TYPE_1__* sbi; struct f2fs_io_info fio; } ;
struct TYPE_2__ {int sb; } ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_5(struct f2fs_bio_info *VAR_0)
{
 struct f2fs_io_info *VAR_1 = &VAR_0->fio;

 if (!VAR_0->bio)
  return;

 FUNC_1(VAR_0->bio, VAR_1->op, VAR_1->op_flags);

 if (FUNC_2(VAR_1->op))
  FUNC_3(VAR_0->sbi->sb, VAR_1->type, VAR_0->bio);
 else
  FUNC_4(VAR_0->sbi->sb, VAR_1->type, VAR_0->bio);

 FUNC_0(VAR_0->sbi, VAR_0->bio, VAR_1->type);
 VAR_0->bio = ((void*)0);
}
