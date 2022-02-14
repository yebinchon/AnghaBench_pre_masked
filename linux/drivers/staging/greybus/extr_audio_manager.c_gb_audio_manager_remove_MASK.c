
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_audio_manager_module {int kobj; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct gb_audio_manager_module* FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

int FUNC_6(int VAR_3)
{
 struct gb_audio_manager_module *VAR_4;

 FUNC_0(&VAR_2);

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4) {
  FUNC_5(&VAR_2);
  return -VAR_0;
 }
 FUNC_4(&VAR_4->list);
 FUNC_3(&VAR_4->kobj);
 FUNC_5(&VAR_2);
 FUNC_2(&VAR_1, VAR_3);
 return 0;
}
