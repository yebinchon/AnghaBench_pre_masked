
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_dat; int ns_cpfile; int ns_sufile; int ns_sem; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;


 int FUNC_0 (struct the_nilfs*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_0)
{
 struct the_nilfs *VAR_1 = VAR_0->s_fs_info;

 FUNC_4(VAR_0);

 if (!FUNC_5(VAR_0)) {
  FUNC_1(&VAR_1->ns_sem);
  FUNC_3(VAR_0);
  FUNC_6(&VAR_1->ns_sem);
 }

 FUNC_2(VAR_1->ns_sufile);
 FUNC_2(VAR_1->ns_cpfile);
 FUNC_2(VAR_1->ns_dat);

 FUNC_0(VAR_1);
 VAR_0->s_fs_info = ((void*)0);
}
