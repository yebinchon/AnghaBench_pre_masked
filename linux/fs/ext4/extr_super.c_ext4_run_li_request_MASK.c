
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_li_request {scalar_t__ lr_next_group; long lr_timeout; unsigned long lr_next_sched; TYPE_1__* lr_sbi; struct super_block* lr_super; } ;
struct ext4_group_desc {int bg_flags; } ;
typedef scalar_t__ ext4_group_t ;
struct TYPE_4__ {scalar_t__ s_groups_count; } ;
struct TYPE_3__ {unsigned long s_li_wait_mult; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 struct ext4_group_desc* FUNC_2 (struct super_block*,scalar_t__,int *) ;
 int FUNC_3 (struct super_block*,scalar_t__,int) ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_4(struct ext4_li_request *VAR_2)
{
 struct ext4_group_desc *VAR_3 = ((void*)0);
 ext4_group_t VAR_4, VAR_5;
 struct super_block *VAR_6;
 unsigned long VAR_7 = 0;
 int VAR_8 = 0;

 VAR_6 = VAR_2->lr_super;
 VAR_5 = FUNC_0(VAR_6)->s_groups_count;

 for (VAR_4 = VAR_2->lr_next_group; VAR_4 < VAR_5; VAR_4++) {
  VAR_3 = FUNC_2(VAR_6, VAR_4, ((void*)0));
  if (!VAR_3) {
   VAR_8 = 1;
   break;
  }

  if (!(VAR_3->bg_flags & FUNC_1(VAR_0)))
   break;
 }

 if (VAR_4 >= VAR_5)
  VAR_8 = 1;

 if (!VAR_8) {
  VAR_7 = VAR_1;
  VAR_8 = FUNC_3(VAR_6, VAR_4,
         VAR_2->lr_timeout ? 0 : 1);
  if (VAR_2->lr_timeout == 0) {
   VAR_7 = (VAR_1 - VAR_7) *
      VAR_2->lr_sbi->s_li_wait_mult;
   VAR_2->lr_timeout = VAR_7;
  }
  VAR_2->lr_next_sched = VAR_1 + VAR_2->lr_timeout;
  VAR_2->lr_next_group = VAR_4 + 1;
 }
 return VAR_8;
}
