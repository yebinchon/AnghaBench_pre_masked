
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef unsigned long ext4_group_t ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_first_meta_bg; } ;


 unsigned long FUNC_0 (struct super_block*) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (struct super_block*,unsigned long) ;
 unsigned long FUNC_3 (struct super_block*,unsigned long) ;
 int FUNC_4 (struct super_block*) ;
 unsigned long FUNC_5 (int ) ;

unsigned long FUNC_6(struct super_block *VAR_0, ext4_group_t VAR_1)
{
 unsigned long VAR_2 =
   FUNC_5(FUNC_1(VAR_0)->s_es->s_first_meta_bg);
 unsigned long VAR_3 = VAR_1 / FUNC_0(VAR_0);

 if (!FUNC_4(VAR_0) || VAR_3 < VAR_2)
  return FUNC_3(VAR_0, VAR_1);

 return FUNC_2(VAR_0,VAR_1);

}
