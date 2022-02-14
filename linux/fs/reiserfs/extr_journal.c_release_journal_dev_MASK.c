
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal {int * j_dev_bd; int j_dev_mode; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_0,
          struct reiserfs_journal *VAR_1)
{
 if (VAR_1->j_dev_bd != ((void*)0)) {
  FUNC_0(VAR_1->j_dev_bd, VAR_1->j_dev_mode);
  VAR_1->j_dev_bd = ((void*)0);
 }
}
