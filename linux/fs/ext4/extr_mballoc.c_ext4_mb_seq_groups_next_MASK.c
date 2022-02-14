
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct seq_file {int file; } ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ ext4_group_t ;


 struct super_block* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct super_block *VAR_3 = FUNC_0(FUNC_2(VAR_0->file));
 ext4_group_t VAR_4;

 ++*VAR_2;
 if (*VAR_2 < 0 || *VAR_2 >= FUNC_1(VAR_3))
  return ((void*)0);
 VAR_4 = *VAR_2 + 1;
 return (void *) ((unsigned long) VAR_4);
}
