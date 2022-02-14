
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext4_group_t ;
struct TYPE_2__ {int * s_journal; } ;


 unsigned long FUNC_0 (struct super_block*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (unsigned long*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (struct super_block*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0, ext4_group_t VAR_1,
     struct buffer_head *VAR_2, unsigned long *VAR_3)
{
next:
 *VAR_3 = FUNC_2((unsigned long *)
           VAR_2->b_data,
           FUNC_0(VAR_0), *VAR_3);
 if (*VAR_3 >= FUNC_0(VAR_0))
  return 0;

 if ((FUNC_1(VAR_0)->s_journal == ((void*)0)) &&
     FUNC_3(VAR_0, VAR_1, *VAR_3)) {
  *VAR_3 = *VAR_3 + 1;
  if (*VAR_3 < FUNC_0(VAR_0))
   goto next;
  return 0;
 }

 return 1;
}
