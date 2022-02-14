
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct block_device {int dummy; } ;
typedef int block_t ;
struct TYPE_6__ {scalar_t__ start_blk; } ;
struct TYPE_5__ {TYPE_1__* dcc_info; } ;
struct TYPE_4__ {int cmd_lock; } ;


 TYPE_3__ FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,struct block_device*,int ,int ,int ) ;
 int FUNC_3 (struct block_device*) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct block_device*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct f2fs_sb_info *VAR_0,
  struct block_device *VAR_1, block_t VAR_2, block_t VAR_3)
{
 block_t VAR_4 = VAR_2;

 if (!FUNC_3(VAR_1))
  return 0;

 FUNC_8(VAR_1, VAR_2, VAR_3);

 if (FUNC_4(VAR_0)) {
  int VAR_5 = FUNC_5(VAR_0, VAR_2);

  VAR_2 -= FUNC_0(VAR_5).start_blk;
 }
 FUNC_6(&FUNC_1(VAR_0)->dcc_info->cmd_lock);
 FUNC_2(VAR_0, VAR_1, VAR_4, VAR_2, VAR_3);
 FUNC_7(&FUNC_1(VAR_0)->dcc_info->cmd_lock);
 return 0;
}
