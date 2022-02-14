
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal {int j_async_throttle; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (struct super_block*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2)
{
 struct reiserfs_journal *VAR_3 = FUNC_0(VAR_2);

 if (FUNC_1(&VAR_3->j_async_throttle)) {
  int VAR_4;

  VAR_4 = FUNC_4(VAR_2);
  FUNC_2(VAR_0, VAR_1 / 10);
  FUNC_3(VAR_2, VAR_4);
 }

 return 0;
}
