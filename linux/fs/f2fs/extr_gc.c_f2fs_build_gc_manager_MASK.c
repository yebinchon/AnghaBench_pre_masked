
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct f2fs_sb_info {int gc_pin_file_threshold; } ;
struct TYPE_6__ {int * v_ops; } ;
struct TYPE_5__ {int end_blk; } ;
struct TYPE_4__ {scalar_t__* last_victim; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct f2fs_sb_info*) ;
 TYPE_2__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*,int ) ;
 TYPE_1__* FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*) ;

void FUNC_6(struct f2fs_sb_info *VAR_3)
{
 FUNC_0(VAR_3)->v_ops = &VAR_2;

 VAR_3->gc_pin_file_threshold = VAR_1;


 if (FUNC_5(VAR_3) && !FUNC_4(VAR_3))
  FUNC_3(VAR_3)->last_victim[VAR_0] =
    FUNC_2(VAR_3, FUNC_1(0).end_blk) + 1;
}
