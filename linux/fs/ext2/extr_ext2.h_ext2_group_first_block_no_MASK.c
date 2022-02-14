
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef unsigned long ext2_fsblk_t ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_first_data_block; } ;


 scalar_t__ FUNC_0 (struct super_block*) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static inline ext2_fsblk_t
FUNC_3(struct super_block *VAR_0, unsigned long VAR_1)
{
 return VAR_1 * (ext2_fsblk_t)FUNC_0(VAR_0) +
  FUNC_2(FUNC_1(VAR_0)->s_es->s_first_data_block);
}
