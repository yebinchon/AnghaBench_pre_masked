
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_comm {int vc_mutex; int * vc_sb; } ;
struct super_block {int * s_fs_info; } ;


 struct venus_comm* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_0)
{
 struct venus_comm *VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_1->vc_mutex);
 VAR_1->vc_sb = ((void*)0);
 VAR_0->s_fs_info = ((void*)0);
 FUNC_3(&VAR_1->vc_mutex);
 FUNC_1(&VAR_1->vc_mutex);

 FUNC_4("Bye bye.\n");
}
